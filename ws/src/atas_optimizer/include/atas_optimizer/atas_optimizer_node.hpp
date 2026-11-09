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

#ifndef ATAS_OPTIMIZER__ATAS_OPTIMIZER_NODE_HPP_
#define ATAS_OPTIMIZER__ATAS_OPTIMIZER_NODE_HPP_

#include <memory>
#include <vector>
#include <map>
#include <string>
#include <utility>

#include "rclcpp/rclcpp.hpp"
#include "rcl_interfaces/msg/set_parameters_result.hpp"
#include "rosgraph_msgs/msg/clock.hpp"
#include "diagnostic_msgs/msg/diagnostic_array.hpp"
#include "diagnostic_msgs/msg/diagnostic_status.hpp"
#include "diagnostic_msgs/msg/key_value.hpp"

#ifdef HAVE_SWARM_INTERFACES
#include "swarm_interfaces/msg/drone_active_set.hpp"
#include "swarm_interfaces/msg/drone_reference.hpp"
#include "swarm_interfaces/msg/drone_reference_array.hpp"
#include "swarm_interfaces/msg/drone_state.hpp"
#include "swarm_interfaces/msg/drone_state_array.hpp"
#include "swarm_interfaces/msg/ugv_state_array.hpp"
#include "swarm_interfaces/msg/uav_link_latency_array.hpp"
#include "swarm_interfaces/msg/optimizer_feedback.hpp"
#include "swarm_interfaces/msg/detection_summary.hpp"
#endif

#ifdef HAVE_SWARM_WORLD_INTERFACES
#include "swarm_world_interfaces/msg/actor_state.hpp"
#include "swarm_world_interfaces/msg/actor_state_array.hpp"
#endif

#include "atas_optimizer/cbba_agent.hpp"
#include "atas_optimizer/viewpoint_optimizer.hpp"

namespace atas_optimizer
{

/**
 * @class AtasOptimizerNode
 * @brief Nó ROS 2 principal de otimização multi-objetivo do enxame ATAS.
 * Executa a seleção de UAVs ativos via CBBA e resolve poses de referência ótimas relativas ao UGV.
 */
class AtasOptimizerNode : public rclcpp::Node {
public:
  explicit AtasOptimizerNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
  virtual ~AtasOptimizerNode() = default;

  // Getters para inspeção e testes
  double get_w_det() const {return w_det_;}
  double get_w_lat() const {return w_lat_;}
  double get_w_safe() const {return w_safe_;}
  double get_z_nominal() const {return z_nominal_;}
  double get_z_min() const {return z_min_;}
  double get_z_max() const {return z_max_;}
  bool is_adaptive_supervision_enabled() const {return adaptive_supervision_enabled_;}
  double get_feedback_latency_threshold() const {return feedback_latency_threshold_ms_;}
  double get_feedback_target_detections() const {return feedback_target_detections_;}
  int get_feedback_min_samples() const {return feedback_min_samples_;}

  // Modelos de Sensores (Fase 1 v2.0.0)
  const LidarConfig & get_lidar_config() const {return viewpoint_opt_.get_lidar_config();}
  const CameraConfig & get_camera_config() const {return viewpoint_opt_.get_camera_config();}

  // Setters para controle e testes
  void set_adaptive_supervision_enabled(bool enabled) {adaptive_supervision_enabled_ = enabled;}
  void set_feedback_latency_threshold(double th) {feedback_latency_threshold_ms_ = th;}
  void set_feedback_target_detections(double td) {feedback_target_detections_ = td;}
  void set_feedback_min_samples(int min_s) {feedback_min_samples_ = min_s;}

#ifdef HAVE_SWARM_INTERFACES
  /// Processa mensagem de feedback de 60s do simulador para adaptação Pareto em malha fechada (F3)
  void process_optimizer_feedback(const swarm_interfaces::msg::OptimizerFeedback & msg);
#endif

private:
  void load_parameters();
  void init_cbba_agents();

  rcl_interfaces::msg::SetParametersResult parameters_callback(
    const std::vector<rclcpp::Parameter> & parameters);

#ifdef HAVE_SWARM_INTERFACES
  void ugv_callback(const swarm_interfaces::msg::UgvStateArray::SharedPtr msg);
  void drone_state_callback(const swarm_interfaces::msg::DroneStateArray::SharedPtr msg);
  void latency_callback(const swarm_interfaces::msg::UavLinkLatencyArray::SharedPtr msg);
  void feedback_callback(const swarm_interfaces::msg::OptimizerFeedback::SharedPtr msg);
  void detection_summary_callback(const swarm_interfaces::msg::DetectionSummary::SharedPtr msg);
#endif

#ifdef HAVE_SWARM_WORLD_INTERFACES
  void actor_states_callback(
    const swarm_world_interfaces::msg::ActorStateArray::SharedPtr msg);
#endif

  void optimization_loop();

  // Parâmetros de Configuração
  int max_drones_{5};
  double rate_hz_{5.0};
  double z_min_{2.5};
  double z_max_{35.0};
  double z_nominal_{15.0};
  double max_radius_{30.0};
  double d_safe_{5.0};
  double slew_rate_v_max_{5.0};

  double w_det_{1.0};
  double w_lat_{0.5};
  double w_uav_{2.0};
  double w_safe_{10.0};

  double cbba_hysteresis_{0.15};
  int cbba_max_bundle_size_{2};
  double cbba_lambda_dist_{0.02};
  double cbba_rf_contention_penalty_{1.5};

  double solver_deadline_sec_{0.040};
  double watchdog_timeout_sec_{0.500};

  // Supervisão Adaptativa Pareto (F3)
  bool adaptive_supervision_enabled_{true};
  double feedback_latency_threshold_ms_{25.0};
  double feedback_target_detections_{4.0};
  int feedback_min_samples_{10};

  std::vector<double> base_standby_x_{0.0, 5.0, 10.0, 15.0, 20.0};
  std::vector<double> base_standby_y_{0.0, 0.0, 0.0, 0.0, 0.0};
  std::vector<double> base_standby_z_{0.5, 0.5, 0.5, 0.5, 0.5};

  double last_ugv_msg_time_{-1.0};
  double last_drone_state_time_{-1.0};

  ViewpointOptimizer viewpoint_opt_;
  std::vector<std::shared_ptr<CbbaAgent>> cbba_agents_;
  std::vector<TaskInfo> latest_ugvs_;
  std::map<std::pair<uint32_t, uint32_t>, double> latest_latencies_;
  double last_detections_mean_{0.0};
  double last_latency_mean_{0.0};

  rclcpp::TimerBase::SharedPtr timer_;
  OnSetParametersCallbackHandle::SharedPtr param_callback_handle_;

#ifdef HAVE_SWARM_INTERFACES
  rclcpp::Publisher<swarm_interfaces::msg::DroneActiveSet>::SharedPtr active_set_pub_;
  rclcpp::Publisher<swarm_interfaces::msg::DroneReferenceArray>::SharedPtr references_pub_;
  rclcpp::Publisher<diagnostic_msgs::msg::DiagnosticArray>::SharedPtr diagnostics_pub_;
  rclcpp::Subscription<swarm_interfaces::msg::UgvStateArray>::SharedPtr ugv_sub_;
  rclcpp::Subscription<swarm_interfaces::msg::DroneStateArray>::SharedPtr drone_state_sub_;
  rclcpp::Subscription<swarm_interfaces::msg::UavLinkLatencyArray>::SharedPtr latency_sub_;
  rclcpp::Subscription<swarm_interfaces::msg::OptimizerFeedback>::SharedPtr feedback_sub_;
  rclcpp::Subscription<swarm_interfaces::msg::DetectionSummary>::SharedPtr detection_summary_sub_;

  uint32_t latest_detection_total_{0};
  uint32_t latest_detection_blocked_{0};

  swarm_interfaces::msg::DroneActiveSet last_active_set_;
  swarm_interfaces::msg::DroneReferenceArray last_published_references_;
#endif

#ifdef HAVE_SWARM_WORLD_INTERFACES
  rclcpp::Subscription<swarm_world_interfaces::msg::ActorStateArray>::SharedPtr actor_states_sub_;
  std::vector<swarm_world_interfaces::msg::ActorState> latest_actors_;
#endif
};

}  // namespace atas_optimizer

#endif  // ATAS_OPTIMIZER__ATAS_OPTIMIZER_NODE_HPP_
