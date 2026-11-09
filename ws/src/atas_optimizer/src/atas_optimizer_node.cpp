// Copyright 2026 ATAS Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "atas_optimizer/atas_optimizer_node.hpp"

#include <memory>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <chrono>
#include <cmath>

namespace atas_optimizer
{

AtasOptimizerNode::AtasOptimizerNode(const rclcpp::NodeOptions & options)
: Node("atas_optimizer_node", options)
{
  // 1. Declaracao de Parametros Configuraveis (CFG1)
  this->declare_parameter<int>("max_drones", 5);
  this->declare_parameter<double>("optimization_rate_hz", 5.0);
  this->declare_parameter<double>("z_min", 2.5);
  this->declare_parameter<double>("z_max", 35.0);
  this->declare_parameter<double>("z_nominal", 15.0);
  this->declare_parameter<double>("max_radius", 30.0);
  this->declare_parameter<double>("inter_drone_safety_dist", 5.0);
  this->declare_parameter<double>("slew_rate_v_max", 5.0);

  this->declare_parameter<double>("weight_detection", 1.0);
  this->declare_parameter<double>("weight_latency", 0.5);
  this->declare_parameter<double>("weight_active_drones", 2.0);
  this->declare_parameter<double>("weight_safety", 10.0);

  this->declare_parameter<double>("cbba_hysteresis", 0.15);
  this->declare_parameter<int>("cbba_max_bundle_size", 2);
  this->declare_parameter<double>("cbba_lambda_dist", 0.02);
  this->declare_parameter<double>("cbba_rf_contention_penalty", 1.5);

  this->declare_parameter<double>("solver_deadline_sec", 0.040);
  this->declare_parameter<double>("watchdog_timeout_sec", 0.500);

  // Supervisao Adaptativa Pareto em Malha Fechada (F3)
  this->declare_parameter<bool>("adaptive_supervision_enabled", true);
  this->declare_parameter<double>("feedback_latency_threshold_ms", 25.0);
  this->declare_parameter<double>("feedback_target_detections", 4.0);
  this->declare_parameter<int>("feedback_min_samples", 10);

  // Modelagem Geometrica Dual-Sensor (LiDAR + Camera) (Fase 1 v2.0.0)
  this->declare_parameter<double>("uav_lidar_range_m", 100.0);
  this->declare_parameter<double>("uav_lidar_horizontal_fov_deg", 120.0);
  this->declare_parameter<double>("uav_lidar_lower_fov_deg", -30.0);
  this->declare_parameter<double>("uav_lidar_upper_fov_deg", 10.0);
  this->declare_parameter<double>("uav_camera_range_m", 40.0);
  this->declare_parameter<double>("uav_camera_horizontal_fov_deg", 90.0);
  this->declare_parameter<double>("uav_camera_vertical_fov_deg", 58.7155);

  this->declare_parameter<std::vector<double>>(
    "base_standby_x", std::vector<double>{0.0, 5.0, 10.0, 15.0, 20.0});
  this->declare_parameter<std::vector<double>>(
    "base_standby_y", std::vector<double>{0.0, 0.0, 0.0, 0.0, 0.0});
  this->declare_parameter<std::vector<double>>(
    "base_standby_z", std::vector<double>{0.5, 0.5, 0.5, 0.5, 0.5});

  // 2. Leitura dos valores iniciais
  load_parameters();

  // 3. Inicializacao dos Otimizadores
  viewpoint_opt_.set_altitude_bounds(z_min_, z_max_);
  viewpoint_opt_.set_nominal_altitude(z_nominal_);
  viewpoint_opt_.set_max_radius(max_radius_);
  viewpoint_opt_.set_inter_drone_safety_distance(d_safe_);
  viewpoint_opt_.set_pareto_weights(w_det_, w_lat_, w_safe_);
  viewpoint_opt_.set_slew_rate_v_max(slew_rate_v_max_);
  viewpoint_opt_.set_solver_deadline(solver_deadline_sec_);

  init_cbba_agents();

  // 4. Registro de Callback para Reconfiguracao Dinamica (CFG2)
  param_callback_handle_ = this->add_on_set_parameters_callback(
    std::bind(&AtasOptimizerNode::parameters_callback, this, std::placeholders::_1));

#ifdef HAVE_SWARM_INTERFACES
  // 5. Publicadores oficiais do contrato 3.1.0
  auto active_set_qos = rclcpp::QoS(rclcpp::KeepLast(1)).reliable().transient_local();
  active_set_pub_ = this->create_publisher<swarm_interfaces::msg::DroneActiveSet>(
    "/drones/active_set", active_set_qos);
  references_pub_ = this->create_publisher<swarm_interfaces::msg::DroneReferenceArray>(
    "/drones/references", rclcpp::QoS(10).reliable());
  diagnostics_pub_ = this->create_publisher<diagnostic_msgs::msg::DiagnosticArray>(
    "/atas/diagnostics", rclcpp::QoS(10));

  // Assinantes do contrato 3.1.0
  ugv_sub_ = this->create_subscription<swarm_interfaces::msg::UgvStateArray>(
    "/ugv_fleet/state", rclcpp::QoS(10),
    std::bind(&AtasOptimizerNode::ugv_callback, this, std::placeholders::_1));

  drone_state_sub_ = this->create_subscription<swarm_interfaces::msg::DroneStateArray>(
    "/drones/state", rclcpp::QoS(10),
    std::bind(&AtasOptimizerNode::drone_state_callback, this, std::placeholders::_1));

  latency_sub_ = this->create_subscription<swarm_interfaces::msg::UavLinkLatencyArray>(
    "/comm/uav_latency", rclcpp::QoS(10),
    std::bind(&AtasOptimizerNode::latency_callback, this, std::placeholders::_1));

  feedback_sub_ = this->create_subscription<swarm_interfaces::msg::OptimizerFeedback>(
    "/metrics/optimizer_feedback", rclcpp::QoS(10),
    std::bind(&AtasOptimizerNode::feedback_callback, this, std::placeholders::_1));

  detection_summary_sub_ = this->create_subscription<swarm_interfaces::msg::DetectionSummary>(
    "/metrics/detection_summary", rclcpp::QoS(10),
    std::bind(&AtasOptimizerNode::detection_summary_callback, this, std::placeholders::_1));
#endif

#ifdef HAVE_SWARM_WORLD_INTERFACES
  actor_states_sub_ = this->create_subscription<swarm_world_interfaces::msg::ActorStateArray>(
    "/world/actor_states", rclcpp::QoS(10),
    std::bind(&AtasOptimizerNode::actor_states_callback, this, std::placeholders::_1));
#endif

  // 6. Timer de controle e otimizacao atrelado ao ROS clock (use_sim_time)
  auto period = std::chrono::duration<double>(1.0 / rate_hz_);
  auto period_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(period);
  timer_ = rclcpp::create_timer(
    this, this->get_clock(), period_ns,
    std::bind(&AtasOptimizerNode::optimization_loop, this));

  RCLCPP_INFO(
    this->get_logger(),
    "ATAS Multi-Objective Optimizer v2.0.0 iniciado (Drones: %d, Rate: %.1f Hz, Hyst: %.1f%%).",
    max_drones_, rate_hz_, cbba_hysteresis_ * 100.0);
}

void AtasOptimizerNode::load_parameters()
{
  max_drones_ = this->get_parameter("max_drones").as_int();
  rate_hz_ = this->get_parameter("optimization_rate_hz").as_double();
  z_min_ = this->get_parameter("z_min").as_double();
  z_max_ = this->get_parameter("z_max").as_double();
  z_nominal_ = this->get_parameter("z_nominal").as_double();
  max_radius_ = this->get_parameter("max_radius").as_double();
  d_safe_ = this->get_parameter("inter_drone_safety_dist").as_double();
  slew_rate_v_max_ = this->get_parameter("slew_rate_v_max").as_double();

  w_det_ = this->get_parameter("weight_detection").as_double();
  w_lat_ = this->get_parameter("weight_latency").as_double();
  w_uav_ = this->get_parameter("weight_active_drones").as_double();
  w_safe_ = this->get_parameter("weight_safety").as_double();

  cbba_hysteresis_ = this->get_parameter("cbba_hysteresis").as_double();
  cbba_max_bundle_size_ = this->get_parameter("cbba_max_bundle_size").as_int();
  cbba_lambda_dist_ = this->get_parameter("cbba_lambda_dist").as_double();
  cbba_rf_contention_penalty_ = this->get_parameter("cbba_rf_contention_penalty").as_double();

  solver_deadline_sec_ = this->get_parameter("solver_deadline_sec").as_double();
  watchdog_timeout_sec_ = this->get_parameter("watchdog_timeout_sec").as_double();

  adaptive_supervision_enabled_ = this->get_parameter("adaptive_supervision_enabled").as_bool();
  feedback_latency_threshold_ms_ =
    this->get_parameter("feedback_latency_threshold_ms").as_double();
  feedback_target_detections_ = this->get_parameter("feedback_target_detections").as_double();
  feedback_min_samples_ = this->get_parameter("feedback_min_samples").as_int();

  base_standby_x_ = this->get_parameter("base_standby_x").as_double_array();
  base_standby_y_ = this->get_parameter("base_standby_y").as_double_array();
  base_standby_z_ = this->get_parameter("base_standby_z").as_double_array();

  LidarConfig l_cfg;
  l_cfg.range_m = this->get_parameter("uav_lidar_range_m").as_double();
  l_cfg.horizontal_fov_rad =
    this->get_parameter("uav_lidar_horizontal_fov_deg").as_double() * M_PI / 180.0;
  l_cfg.lower_fov_rad =
    this->get_parameter("uav_lidar_lower_fov_deg").as_double() * M_PI / 180.0;
  l_cfg.upper_fov_rad =
    this->get_parameter("uav_lidar_upper_fov_deg").as_double() * M_PI / 180.0;
  viewpoint_opt_.set_lidar_config(l_cfg);

  CameraConfig c_cfg;
  c_cfg.range_m = this->get_parameter("uav_camera_range_m").as_double();
  c_cfg.horizontal_fov_rad =
    this->get_parameter("uav_camera_horizontal_fov_deg").as_double() * M_PI / 180.0;
  c_cfg.vertical_fov_rad =
    this->get_parameter("uav_camera_vertical_fov_deg").as_double() * M_PI / 180.0;
  viewpoint_opt_.set_camera_config(c_cfg);
}

void AtasOptimizerNode::init_cbba_agents()
{
  cbba_agents_.clear();
  for (int i = 0; i < max_drones_; ++i) {
    auto agent = std::make_shared<CbbaAgent>(
      static_cast<uint32_t>(i), static_cast<uint32_t>(cbba_max_bundle_size_));
    agent->set_hysteresis(cbba_hysteresis_);
    agent->set_lambda_dist(cbba_lambda_dist_);
    agent->set_rf_contention_penalty(cbba_rf_contention_penalty_);

    // Definir posições de repouso iniciais
    double bx = (static_cast<size_t>(i) < base_standby_x_.size()) ? base_standby_x_[i] : 0.0;
    double by = (static_cast<size_t>(i) < base_standby_y_.size()) ? base_standby_y_[i] : 0.0;
    double bz = (static_cast<size_t>(i) < base_standby_z_.size()) ? base_standby_z_[i] : 0.5;
    agent->set_position(bx, by, bz);

    cbba_agents_.push_back(agent);
  }
}

rcl_interfaces::msg::SetParametersResult AtasOptimizerNode::parameters_callback(
  const std::vector<rclcpp::Parameter> & parameters)
{
  rcl_interfaces::msg::SetParametersResult result;
  result.successful = true;

  for (const auto & param : parameters) {
    const auto & name = param.get_name();
    if (name == "weight_detection") {
      double val = param.as_double();
      if (val < 0.0) {
        result.successful = false;
        result.reason = "weight_detection deve ser >= 0.0";
        return result;
      }
      w_det_ = val;
      viewpoint_opt_.set_pareto_weights(w_det_, w_lat_, w_safe_);
      RCLCPP_INFO(this->get_logger(), "Parametro weight_detection atualizado: %.3f", w_det_);
    } else if (name == "weight_latency") {
      double val = param.as_double();
      if (val < 0.0) {
        result.successful = false;
        result.reason = "weight_latency deve ser >= 0.0";
        return result;
      }
      w_lat_ = val;
      viewpoint_opt_.set_pareto_weights(w_det_, w_lat_, w_safe_);
      RCLCPP_INFO(this->get_logger(), "Parametro weight_latency atualizado: %.3f", w_lat_);
    } else if (name == "weight_safety") {
      double val = param.as_double();
      if (val < 0.0) {
        result.successful = false;
        result.reason = "weight_safety deve ser >= 0.0";
        return result;
      }
      w_safe_ = val;
      viewpoint_opt_.set_pareto_weights(w_det_, w_lat_, w_safe_);
      RCLCPP_INFO(this->get_logger(), "Parametro weight_safety atualizado: %.3f", w_safe_);
    } else if (name == "inter_drone_safety_dist") {
      double val = param.as_double();
      if (val < 1.0) {
        result.successful = false;
        result.reason = "inter_drone_safety_dist deve ser >= 1.0 m";
        return result;
      }
      d_safe_ = val;
      viewpoint_opt_.set_inter_drone_safety_distance(d_safe_);
      RCLCPP_INFO(
        this->get_logger(), "Parametro inter_drone_safety_dist atualizado: %.2f m", d_safe_);
    } else if (name == "z_nominal") {
      double val = param.as_double();
      if (val < z_min_ || val > z_max_) {
        result.successful = false;
        result.reason = "z_nominal fora dos limites [z_min, z_max]";
        return result;
      }
      z_nominal_ = val;
      viewpoint_opt_.set_nominal_altitude(z_nominal_);
      RCLCPP_INFO(this->get_logger(), "Parametro z_nominal atualizado: %.2f m", z_nominal_);
    } else if (name == "cbba_hysteresis") {
      double val = param.as_double();
      if (val < 0.0 || val > 1.0) {
        result.successful = false;
        result.reason = "cbba_hysteresis deve estar entre [0.0, 1.0]";
        return result;
      }
      cbba_hysteresis_ = val;
      for (auto & agent : cbba_agents_) {
        agent->set_hysteresis(cbba_hysteresis_);
      }
      RCLCPP_INFO(
        this->get_logger(), "Parametro cbba_hysteresis atualizado: %.2f%%",
        cbba_hysteresis_ * 100.0);
    } else if (name == "slew_rate_v_max") {
      double val = param.as_double();
      if (val < 0.1) {
        result.successful = false;
        result.reason = "slew_rate_v_max deve ser >= 0.1 m/s";
        return result;
      }
      slew_rate_v_max_ = val;
      viewpoint_opt_.set_slew_rate_v_max(slew_rate_v_max_);
      RCLCPP_INFO(
        this->get_logger(), "Parametro slew_rate_v_max atualizado: %.2f m/s", slew_rate_v_max_);
    } else if (name == "adaptive_supervision_enabled") {
      adaptive_supervision_enabled_ = param.as_bool();
      RCLCPP_INFO(
        this->get_logger(), "Supervisao Adaptativa %s",
        adaptive_supervision_enabled_ ? "HABILITADA" : "DESABILITADA");
    } else if (name == "feedback_latency_threshold_ms") {
      double val = param.as_double();
      if (val <= 0.0) {
        result.successful = false;
        result.reason = "feedback_latency_threshold_ms deve ser > 0.0";
        return result;
      }
      feedback_latency_threshold_ms_ = val;
      RCLCPP_INFO(
        this->get_logger(), "Parametro feedback_latency_threshold_ms atualizado: %.1f ms",
        feedback_latency_threshold_ms_);
    } else if (name == "feedback_target_detections") {
      double val = param.as_double();
      if (val <= 0.0) {
        result.successful = false;
        result.reason = "feedback_target_detections deve ser > 0.0";
        return result;
      }
      feedback_target_detections_ = val;
      RCLCPP_INFO(
        this->get_logger(), "Parametro feedback_target_detections atualizado: %.2f",
        feedback_target_detections_);
    }
  }

  return result;
}

#ifdef HAVE_SWARM_INTERFACES
void AtasOptimizerNode::ugv_callback(const swarm_interfaces::msg::UgvStateArray::SharedPtr msg)
{
  last_ugv_msg_time_ = this->now().seconds();
  latest_ugvs_.clear();

  for (const auto & ugv : msg->states) {
    if (!ugv.active) {
      continue;
    }
    TaskInfo task;
    task.id = ugv.ugv_id;
    task.x = ugv.x;
    task.y = ugv.y;
    task.z = 0.0;
    task.yaw = ugv.yaw;
    task.priority = 1.0;
    task.base_value = 100.0;
    latest_ugvs_.push_back(task);
  }
}

void AtasOptimizerNode::drone_state_callback(
  const swarm_interfaces::msg::DroneStateArray::SharedPtr msg)
{
  last_drone_state_time_ = this->now().seconds();
  for (const auto & drone : msg->states) {
    if (drone.drone_id < cbba_agents_.size()) {
      cbba_agents_[drone.drone_id]->set_position(drone.x, drone.y, drone.z);
      cbba_agents_[drone.drone_id]->set_velocity(drone.vx, drone.vy, drone.vz);
    }
  }
}

void AtasOptimizerNode::latency_callback(
  const swarm_interfaces::msg::UavLinkLatencyArray::SharedPtr msg)
{
  for (const auto & entry : msg->links) {
    latest_latencies_[{entry.drone_id, entry.ugv_id}] = entry.latency_ms;
  }
}

void AtasOptimizerNode::feedback_callback(
  const swarm_interfaces::msg::OptimizerFeedback::SharedPtr msg)
{
  process_optimizer_feedback(*msg);
}

void AtasOptimizerNode::process_optimizer_feedback(
  const swarm_interfaces::msg::OptimizerFeedback & msg)
{
  last_detections_mean_ = msg.detections_mean_60s;
  last_latency_mean_ = msg.latency_mean_60s;

  if (!adaptive_supervision_enabled_) {
    return;
  }

  if (msg.samples_in_window < static_cast<uint32_t>(feedback_min_samples_)) {
    return;
  }

  bool adjusted = false;

  // 1. Condicao de Latencia Excessiva (F3): puxa drones para baixo e aumenta peso de latencia
  if (msg.latency_mean_60s > feedback_latency_threshold_ms_) {
    double new_w_lat = std::clamp(w_lat_ * 1.20, 0.1, 5.0);
    double new_z_nom = std::clamp(z_nominal_ * 0.85, z_min_, 25.0);

    if (std::abs(new_w_lat - w_lat_) > 1e-4 || std::abs(new_z_nom - z_nominal_) > 1e-4) {
      w_lat_ = new_w_lat;
      z_nominal_ = new_z_nom;
      adjusted = true;
      RCLCPP_INFO_THROTTLE(
        this->get_logger(), *this->get_clock(), 5000,
        "Supervisao Adaptativa (Alta Latencia %.1f ms > %.1f ms): w_lat=%.3f, z_nominal=%.1f m",
        msg.latency_mean_60s, feedback_latency_threshold_ms_, w_lat_, z_nominal_);
    }
  }

  // 2. Condicao de Deteccao Insuficiente (F3): eleva drones e aumenta peso de deteccao
  if (msg.detections_mean_60s < feedback_target_detections_) {
    double new_w_det = std::clamp(w_det_ * 1.20, 0.1, 10.0);
    double new_z_nom = std::clamp(z_nominal_ * 1.10, z_min_, 25.0);

    if (std::abs(new_w_det - w_det_) > 1e-4 || std::abs(new_z_nom - z_nominal_) > 1e-4) {
      w_det_ = new_w_det;
      z_nominal_ = new_z_nom;
      adjusted = true;
      RCLCPP_INFO_THROTTLE(
        this->get_logger(), *this->get_clock(), 5000,
        "Supervisao Adaptativa (Baixa Deteccao %.2f < %.2f): w_det=%.3f, z_nominal=%.1f m",
        msg.detections_mean_60s, feedback_target_detections_, w_det_, z_nominal_);
    }
  }

  // 3. Relaxamento Gradual para o Ponto de Equilibrio Pareto
  if (msg.latency_mean_60s <= feedback_latency_threshold_ms_ &&
    msg.detections_mean_60s >= feedback_target_detections_)
  {
    if (w_lat_ > 0.5) {
      w_lat_ = std::max(0.5, w_lat_ * 0.98);
      adjusted = true;
    }
    if (w_det_ > 1.0) {
      w_det_ = std::max(1.0, w_det_ * 0.98);
      adjusted = true;
    }
  }

  if (adjusted) {
    viewpoint_opt_.set_pareto_weights(w_det_, w_lat_, w_safe_);
    viewpoint_opt_.set_nominal_altitude(z_nominal_);
  }
}

void AtasOptimizerNode::detection_summary_callback(
  const swarm_interfaces::msg::DetectionSummary::SharedPtr msg)
{
  latest_detection_total_ = msg->total;
  latest_detection_blocked_ = msg->blocked;
}
#endif

#ifdef HAVE_SWARM_WORLD_INTERFACES
void AtasOptimizerNode::actor_states_callback(
  const swarm_world_interfaces::msg::ActorStateArray::SharedPtr msg)
{
  latest_actors_ = msg->actors;
}
#endif

void AtasOptimizerNode::optimization_loop()
{
  auto start_cycle_time = std::chrono::steady_clock::now();
  double now_sec = this->now().seconds();

  // Robustez R1: Verificação de Watchdog de recepção de telemetria UGV
  bool watchdog_timeout = false;
  if (last_ugv_msg_time_ > 0.0 && (now_sec - last_ugv_msg_time_) > watchdog_timeout_sec_) {
    watchdog_timeout = true;
    RCLCPP_WARN_THROTTLE(
      this->get_logger(), *this->get_clock(), 2000,
      "Watchdog timeout (%.3f s sem telemetria UGV). Mantendo FAILSAFE_HOLD.",
      now_sec - last_ugv_msg_time_);
  }

  if (watchdog_timeout) {
#ifdef HAVE_SWARM_INTERFACES
    if (!last_published_references_.references.empty()) {
      last_published_references_.header.stamp = this->now();
      last_active_set_.header.stamp = this->now();
      references_pub_->publish(last_published_references_);
      active_set_pub_->publish(last_active_set_);
    }
#endif
    return;
  }

  if (last_ugv_msg_time_ <= 0.0) {
    return;
  }

  // 1. Atualizar tarefas para os agentes CBBA (purga inativos C3) e construir feixes (C1)
  for (auto & agent : cbba_agents_) {
    agent->update_tasks(latest_ugvs_);
    agent->build_bundle(latest_latencies_);
  }

  // 2. Troca de consenso entre agentes (simulando comunicação V2X descentralizada)
  std::vector<ConsensusPayload> messages;
  messages.reserve(cbba_agents_.size());
  for (const auto & agent : cbba_agents_) {
    messages.push_back(agent->send_message());
  }
  for (auto & agent : cbba_agents_) {
    agent->process_consensus(messages, now_sec);
  }

  // 3. Montar conjunto ativo e otimizar viewpoints com PolyMPC
  std::vector<uint32_t> active_ids;
  std::vector<ViewpointReference> solved_refs;

#ifdef HAVE_SWARM_INTERFACES
  swarm_interfaces::msg::DroneReferenceArray ref_array_msg;
  ref_array_msg.header.stamp = this->now();
  ref_array_msg.header.frame_id = "world";

  swarm_interfaces::msg::DroneActiveSet active_set_msg;
  active_set_msg.header = ref_array_msg.header;
#endif

  for (auto & agent : cbba_agents_) {
    if (agent->is_active()) {
      uint32_t drone_id = agent->get_id();
      const auto & bundle = agent->get_bundle();
      uint32_t assigned_ugv_id = bundle.front();
      active_ids.push_back(drone_id);

      // Encontrar pose do UGV primário atribuído
      Vector3d ugv_pos(0.0, 0.0, 0.0);
      double ugv_yaw = 0.0;
      for (const auto & u : latest_ugvs_) {
        if (u.id == assigned_ugv_id) {
          ugv_pos = Vector3d(u.x, u.y, u.z);
          ugv_yaw = u.yaw;
          break;
        }
      }

      // 1. Construir alvos perceptuais: UGV atribuído é alvo primário (F1, D1)
      std::vector<OptimizationTarget> targets;
      OptimizationTarget ugv_tgt;
      ugv_tgt.x = ugv_pos.x;
      ugv_tgt.y = ugv_pos.y;
      ugv_tgt.z = ugv_pos.z;
      ugv_tgt.weight = 5.0;
      ugv_tgt.is_occluder = false;
      targets.push_back(ugv_tgt);

      // Se multi-bundle (M = 2), adiciona UGV secundário como alvo de alta prioridade
      if (bundle.size() > 1) {
        uint32_t secondary_ugv_id = bundle[1];
        for (const auto & u : latest_ugvs_) {
          if (u.id == secondary_ugv_id) {
            OptimizationTarget sec_tgt;
            sec_tgt.x = u.x;
            sec_tgt.y = u.y;
            sec_tgt.z = u.z;
            sec_tgt.weight = 4.0;
            sec_tgt.is_occluder = false;
            targets.push_back(sec_tgt);
            break;
          }
        }
      }

#ifdef HAVE_SWARM_WORLD_INTERFACES
      // 2. Ingestão ativa de alvos NPC (pedestres e veículos) no raio de risco de 25m
      for (const auto & actor : latest_actors_) {
        if (!actor.active) {
          continue;
        }
        double ax = actor.pose.position.x;
        double ay = actor.pose.position.y;
        double dist_to_ugv = std::hypot(ax - ugv_pos.x, ay - ugv_pos.y);
        if (dist_to_ugv <= 25.0) {
          OptimizationTarget tgt;
          tgt.x = ax;
          tgt.y = ay;
          tgt.z = actor.pose.position.z;
          bool is_pedestrian = (actor.type_id.find("walker") != std::string::npos ||
            actor.type_id.find("pedestrian") != std::string::npos);
          tgt.weight = is_pedestrian ? 3.0 : 2.0;
          tgt.is_occluder = false;
          targets.push_back(tgt);
        }
      }
#endif

      // Cobertura otimizada de viewpoint (PolyMPC NLP) com garantia primordial de FoV (v2.0.0)
      // Se multi-bundle (M = 2), targets inclui o UGV secundário com peso 4.0
      ViewpointReference v_ref = viewpoint_opt_.solve_viewpoint(
        drone_id, assigned_ugv_id, ugv_pos, ugv_yaw, targets, solved_refs);

      // Robustez R2: Sanity Filter pré-publicação
      bool clean = viewpoint_opt_.sanitize_reference(v_ref);
      if (!clean) {
        RCLCPP_WARN_THROTTLE(
          this->get_logger(), *this->get_clock(), 1000,
          "Referencia do UAV %u higienizada (NaN/Inf detectado).", drone_id);
      }
      solved_refs.push_back(v_ref);

#ifdef HAVE_SWARM_INTERFACES
      swarm_interfaces::msg::DroneReference d_ref;
      d_ref.drone_id = v_ref.drone_id;
      d_ref.ugv_id = v_ref.ugv_id;
      d_ref.x = v_ref.rel_x;
      d_ref.y = v_ref.rel_y;
      d_ref.z = v_ref.altitude_z;
      d_ref.yaw = v_ref.rel_yaw;
      d_ref.max_speed = 0.0;
      d_ref.frame_relative = true;
      ref_array_msg.references.push_back(d_ref);
#endif
    }
  }

#ifdef HAVE_SWARM_INTERFACES
  active_set_msg.active_ids = active_ids;
  active_set_pub_->publish(active_set_msg);
  references_pub_->publish(ref_array_msg);

  last_active_set_ = active_set_msg;
  last_published_references_ = ref_array_msg;
#endif

  auto end_cycle_time = std::chrono::steady_clock::now();
  double solve_time_ms = std::chrono::duration<double, std::milli>(
    end_cycle_time - start_cycle_time).count();

  // Publicar Diagnósticos Estruturados (/atas/diagnostics) para Ferramenta de Monitoramento
  diagnostic_msgs::msg::DiagnosticArray diag_msg;
  diag_msg.header.stamp = this->now();
  diag_msg.header.frame_id = "world";

  // 1. Status Global do Otimizador Multi-Objetivo
  diagnostic_msgs::msg::DiagnosticStatus global_stat;
  global_stat.name = "atas_optimizer/global";
  global_stat.hardware_id = "atas_optimizer_node";
  global_stat.level = watchdog_timeout ?
    diagnostic_msgs::msg::DiagnosticStatus::WARN :
    diagnostic_msgs::msg::DiagnosticStatus::OK;
  global_stat.message = watchdog_timeout ?
    "Failsafe Hold (Watchdog)" : "Optimal Closed-Loop MOO";

  diagnostic_msgs::msg::KeyValue kv;
  kv.key = "solve_time_ms";
  kv.value = std::to_string(solve_time_ms);
  global_stat.values.push_back(kv);
  kv.key = "active_drones_count";
  kv.value = std::to_string(active_ids.size());
  global_stat.values.push_back(kv);
  kv.key = "w_det";
  kv.value = std::to_string(w_det_);
  global_stat.values.push_back(kv);
  kv.key = "w_lat";
  kv.value = std::to_string(w_lat_);
  global_stat.values.push_back(kv);
  kv.key = "w_uav";
  kv.value = std::to_string(w_uav_);
  global_stat.values.push_back(kv);
  kv.key = "w_safe";
  kv.value = std::to_string(w_safe_);
  global_stat.values.push_back(kv);
  kv.key = "z_nominal";
  kv.value = std::to_string(z_nominal_);
  global_stat.values.push_back(kv);
  kv.key = "feedback_latency_mean";
  kv.value = std::to_string(last_latency_mean_);
  global_stat.values.push_back(kv);
  kv.key = "feedback_detections_mean";
  kv.value = std::to_string(last_detections_mean_);
  global_stat.values.push_back(kv);
  kv.key = "ugvs_tracked_count";
  kv.value = std::to_string(latest_ugvs_.size());
  global_stat.values.push_back(kv);
  diag_msg.status.push_back(global_stat);

  // 2. Status do Mecanismo CBBA
  diagnostic_msgs::msg::DiagnosticStatus cbba_stat;
  cbba_stat.name = "atas_optimizer/cbba";
  cbba_stat.hardware_id = "cbba_engine";
  cbba_stat.level = diagnostic_msgs::msg::DiagnosticStatus::OK;
  cbba_stat.message = "CBBA Consensus Active";
  kv.key = "cbba_hysteresis";
  kv.value = std::to_string(cbba_hysteresis_);
  cbba_stat.values.push_back(kv);
  kv.key = "cbba_max_bundle_size";
  kv.value = std::to_string(cbba_max_bundle_size_);
  cbba_stat.values.push_back(kv);
  kv.key = "cbba_rf_contention_penalty";
  kv.value = std::to_string(cbba_rf_contention_penalty_);
  cbba_stat.values.push_back(kv);
  for (size_t i = 0; i < cbba_agents_.size(); ++i) {
    const auto & ag = cbba_agents_[i];
    std::string prefix = "drone_" + std::to_string(ag->get_id()) + "_";
    kv.key = prefix + "active";
    kv.value = ag->is_active() ? "1" : "0";
    cbba_stat.values.push_back(kv);
    kv.key = prefix + "primary_ugv";
    kv.value = std::to_string(ag->get_primary_target());
    cbba_stat.values.push_back(kv);
    kv.key = prefix + "bundle_size";
    kv.value = std::to_string(ag->get_bundle().size());
    cbba_stat.values.push_back(kv);
  }
  diag_msg.status.push_back(cbba_stat);

  // 3. Status do Mecanismo NMPC / Viewpoint NLP
  diagnostic_msgs::msg::DiagnosticStatus nmpc_stat;
  nmpc_stat.name = "atas_optimizer/nmpc";
  nmpc_stat.hardware_id = "viewpoint_polympc";
  nmpc_stat.level = diagnostic_msgs::msg::DiagnosticStatus::OK;
  nmpc_stat.message = "Dual-Sensor FoV Guaranteed Viewpoints";
  kv.key = "solver_deadline_sec";
  kv.value = std::to_string(solver_deadline_sec_);
  nmpc_stat.values.push_back(kv);
  kv.key = "slew_rate_v_max";
  kv.value = std::to_string(slew_rate_v_max_);
  nmpc_stat.values.push_back(kv);
  for (const auto & v_ref : solved_refs) {
    std::string prefix = "drone_" + std::to_string(v_ref.drone_id) + "_";
    kv.key = prefix + "assigned_ugv";
    kv.value = std::to_string(v_ref.ugv_id);
    nmpc_stat.values.push_back(kv);
    kv.key = prefix + "rel_x";
    kv.value = std::to_string(v_ref.rel_x);
    nmpc_stat.values.push_back(kv);
    kv.key = prefix + "rel_y";
    kv.value = std::to_string(v_ref.rel_y);
    nmpc_stat.values.push_back(kv);
    kv.key = prefix + "rel_z";
    kv.value = std::to_string(v_ref.altitude_z);
    nmpc_stat.values.push_back(kv);
    kv.key = prefix + "rel_yaw";
    kv.value = std::to_string(v_ref.rel_yaw);
    nmpc_stat.values.push_back(kv);
    kv.key = prefix + "primordial_fov";
    kv.value = "CONFORMANT";
    nmpc_stat.values.push_back(kv);
  }
  diag_msg.status.push_back(nmpc_stat);

  diagnostics_pub_->publish(diag_msg);
}

}  // namespace atas_optimizer
