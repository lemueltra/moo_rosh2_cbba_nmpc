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

#include "atas_optimizer/viewpoint_optimizer.hpp"
#include <algorithm>
#include <chrono>
#include <cmath>
#include <utility>

namespace atas_optimizer
{

namespace
{

const std::vector<BuildingOccluder> kTown10Buildings = {
  {0u, -29.1292, -10.9961, -92.8516, -80.0300, 10.0},
  {1u, 18.7819, 30.1639, -94.6069, -81.8046, 10.0},
  {2u, -16.8332, 2.1229, 33.4613, 48.1608, 10.0},
  {3u, 62.6442, 79.2807, -5.3571, 4.2323, 10.0},
  {4u, 76.5828, 84.5966, -94.8109, -84.3687, 10.0},
  {5u, 60.6526, 71.5160, -54.1219, -39.4141, 10.0},
  {6u, -79.5685, -64.6607, -105.8958, -97.2829, 10.0},
  {7u, 59.7550, 76.2184, 33.2500, 41.7307, 10.0},
  {8u, -90.6992, -72.9082, 2.1791, 9.0846, 10.0},
  {9u, -96.0406, -87.7672, -91.1456, -81.3150, 10.0},
  {10u, 44.7712, 55.1634, 30.5351, 39.7621, 10.0},
  {11u, -20.6713, -9.6630, -109.7742, -98.4031, 10.0},
  {12u, 26.8427, 36.0162, 39.0269, 46.0971, 10.0},
  {13u, 24.3073, 41.2969, 2.5580, 14.8699, 10.0},
  {14u, -94.6936, -81.2742, -63.3100, -51.2177, 10.0},
  {15u, 59.0758, 73.9622, 12.2062, 24.3133, 10.0},
  {16u, 22.8893, 31.2789, -124.4572, -112.9006, 10.0},
  {17u, -35.7238, -21.1341, 17.5974, 26.7174, 10.0},
  {18u, 15.6736, 29.5574, -49.7007, -35.7692, 10.0},
  {19u, 53.2397, 70.9627, -106.4217, -95.7506, 10.0},
  {20u, -32.4458, -13.0586, -56.4800, -49.9593, 10.0},
  {21u, -77.1966, -60.4584, -83.6661, -74.7800, 10.0},
  {22u, 57.7589, 71.4095, -89.9285, -75.3761, 10.0},
  {23u, -0.6116, 16.6120, -113.8217, -102.1614, 10.0},
  {24u, -32.6988, -18.3856, -124.9805, -113.7459, 10.0},
  {25u, -2.5581, 12.3296, -60.3892, -48.7450, 10.0},
  {26u, 82.2444, 92.2635, -54.3307, -44.5353, 10.0},
  {27u, 77.9817, 90.0557, 22.5519, 29.4730, 10.0},
  {28u, -83.1174, -65.1654, -41.1222, -34.7680, 10.0},
  {29u, -83.9405, -68.3983, 24.8608, 33.4423, 10.0},
};

bool segment_intersects_box(
  const Vector3d & p1, const Vector3d & p2, const BuildingOccluder & box)
{
  double dx = p2.x - p1.x;
  double dy = p2.y - p1.y;
  double dz = p2.z - p1.z;

  double t_min = 0.0;
  double t_max = 1.0;

  // Eixo X
  if (std::abs(dx) < 1e-9) {
    if (p1.x < box.min_x || p1.x > box.max_x) {return false;}
  } else {
    double tx1 = (box.min_x - p1.x) / dx;
    double tx2 = (box.max_x - p1.x) / dx;
    if (tx1 > tx2) {std::swap(tx1, tx2);}
    t_min = std::max(t_min, tx1);
    t_max = std::min(t_max, tx2);
    if (t_min > t_max) {return false;}
  }

  // Eixo Y
  if (std::abs(dy) < 1e-9) {
    if (p1.y < box.min_y || p1.y > box.max_y) {return false;}
  } else {
    double ty1 = (box.min_y - p1.y) / dy;
    double ty2 = (box.max_y - p1.y) / dy;
    if (ty1 > ty2) {std::swap(ty1, ty2);}
    t_min = std::max(t_min, ty1);
    t_max = std::min(t_max, ty2);
    if (t_min > t_max) {return false;}
  }

  // Eixo Z
  if (std::abs(dz) < 1e-9) {
    if (p1.z < 0.0 || p1.z > box.height) {return false;}
  } else {
    double tz1 = (0.0 - p1.z) / dz;
    double tz2 = (box.height - p1.z) / dz;
    if (tz1 > tz2) {std::swap(tz1, tz2);}
    t_min = std::max(t_min, tz1);
    t_max = std::min(t_max, tz2);
    if (t_min > t_max) {return false;}
  }

  return true;
}

}  // namespace

ViewpointOptimizer::ViewpointOptimizer()
{
  load_town10_buildings();
}

void ViewpointOptimizer::load_town10_buildings()
{
  buildings_ = kTown10Buildings;
}

void ViewpointOptimizer::set_buildings(const std::vector<BuildingOccluder> & buildings)
{
  buildings_ = buildings;
}

bool ViewpointOptimizer::check_los(const Vector3d & p1, const Vector3d & p2) const
{
  for (const auto & b : buildings_) {
    if (segment_intersects_box(p1, p2, b)) {
      return false;  // Ocluído pelo edifício
    }
  }
  return true;  // Linha de Visada (LoS) livre
}

bool ViewpointOptimizer::is_in_lidar_fov(
  const Vector3d & uav_pos, double uav_yaw, const Vector3d & target_pos) const
{
  double dx = target_pos.x - uav_pos.x;
  double dy = target_pos.y - uav_pos.y;
  double dz = target_pos.z - uav_pos.z;
  double dist_3d = std::sqrt(dx * dx + dy * dy + dz * dz);

  if (dist_3d < 1e-3 || dist_3d > lidar_config_.range_m) {
    return false;
  }

  // 1. Verificação de azimute no referencial do drone
  double target_azimuth = std::atan2(dy, dx);
  double delta_yaw = target_azimuth - uav_yaw;
  while (delta_yaw > M_PI) {delta_yaw -= 2.0 * M_PI;}
  while (delta_yaw < -M_PI) {delta_yaw += 2.0 * M_PI;}

  double half_h_fov = 0.5 * lidar_config_.horizontal_fov_rad;
  if (std::abs(delta_yaw) > half_h_fov) {
    return false;
  }

  // 2. Verificação de elevação vertical [-30°, +10°]
  double elevation = std::asin(std::clamp(dz / dist_3d, -1.0, 1.0));
  if (elevation < lidar_config_.lower_fov_rad || elevation > lidar_config_.upper_fov_rad) {
    return false;
  }

  // 3. Verificação de Linha de Visada (LoS) contra edifícios 3D
  return check_los(uav_pos, target_pos);
}

bool ViewpointOptimizer::is_in_camera_fov(
  const Vector3d & uav_pos, double uav_yaw, double uav_pitch, const Vector3d & target_pos) const
{
  double dx = target_pos.x - uav_pos.x;
  double dy = target_pos.y - uav_pos.y;
  double dz = target_pos.z - uav_pos.z;
  double dist_3d = std::sqrt(dx * dx + dy * dy + dz * dz);

  if (dist_3d < 1e-3 || dist_3d > camera_config_.range_m) {
    return false;
  }

  // 1. Verificação de azimute no referencial da câmera
  double target_azimuth = std::atan2(dy, dx);
  double delta_yaw = target_azimuth - uav_yaw;
  while (delta_yaw > M_PI) {delta_yaw -= 2.0 * M_PI;}
  while (delta_yaw < -M_PI) {delta_yaw += 2.0 * M_PI;}

  double half_h_fov = 0.5 * camera_config_.horizontal_fov_rad;
  if (std::abs(delta_yaw) > half_h_fov) {
    return false;
  }

  // 2. Verificação de elevação considerando o pitch acoplado da câmera
  double dist_2d = std::hypot(dx, dy);
  double target_down_angle = std::atan2(-dz, std::max(0.01, dist_2d));
  double delta_pitch = target_down_angle - uav_pitch;
  while (delta_pitch > M_PI) {delta_pitch -= 2.0 * M_PI;}
  while (delta_pitch < -M_PI) {delta_pitch += 2.0 * M_PI;}

  double half_v_fov = 0.5 * camera_config_.vertical_fov_rad;
  if (std::abs(delta_pitch) > half_v_fov) {
    return false;
  }

  // 3. Verificação de Linha de Visada (LoS) contra edifícios 3D
  return check_los(uav_pos, target_pos);
}

bool ViewpointOptimizer::is_in_any_sensor_fov(
  const Vector3d & uav_pos, double uav_yaw, double uav_pitch, const Vector3d & target_pos) const
{
  return is_in_lidar_fov(uav_pos, uav_yaw, target_pos) ||
         is_in_camera_fov(uav_pos, uav_yaw, uav_pitch, target_pos);
}

bool ViewpointOptimizer::is_target_ugv_in_fov(
  const ViewpointReference & ref,
  const Vector3d & ugv_pos,
  double ugv_yaw) const
{
  double cos_u = std::cos(ugv_yaw);
  double sin_u = std::sin(ugv_yaw);
  Vector3d uav_pos;
  uav_pos.x = ugv_pos.x + (ref.rel_x * cos_u - ref.rel_y * sin_u);
  uav_pos.y = ugv_pos.y + (ref.rel_x * sin_u + ref.rel_y * cos_u);
  uav_pos.z = ref.altitude_z;

  double drone_world_yaw = ugv_yaw + ref.rel_yaw;
  double drone_pitch = ref.pitch;
  if (std::abs(drone_pitch) < 1e-4) {
    double r = std::hypot(ref.rel_x, ref.rel_y);
    drone_pitch = std::atan2(ref.altitude_z, std::max(0.1, r));
  }

  return is_in_any_sensor_fov(uav_pos, drone_world_yaw, drone_pitch, ugv_pos);
}

void ViewpointOptimizer::set_altitude_bounds(double z_min, double z_max)
{
  z_min_ = std::max(2.5, z_min);
  z_max_ = std::min(35.0, z_max);
}

void ViewpointOptimizer::set_nominal_altitude(double z_nominal)
{
  z_nominal_ = std::clamp(z_nominal, z_min_, z_max_);
}

void ViewpointOptimizer::set_max_radius(double max_radius)
{
  max_radius_ = max_radius;
}

void ViewpointOptimizer::set_inter_drone_safety_distance(double d_safe)
{
  d_safe_ = d_safe;
}

void ViewpointOptimizer::set_pareto_weights(double w_det, double w_lat, double w_safe)
{
  w_det_ = std::max(0.0, w_det);
  w_lat_ = std::max(0.0, w_lat);
  w_safe_ = std::max(0.0, w_safe);
}

void ViewpointOptimizer::set_slew_rate_v_max(double v_max)
{
  slew_rate_v_max_ = std::max(0.1, v_max);
}

void ViewpointOptimizer::set_solver_deadline(double deadline_sec)
{
  solver_deadline_sec_ = std::max(0.0, deadline_sec);
}

ViewpointReference ViewpointOptimizer::compute_orbital_fallback(
  uint32_t drone_id, uint32_t ugv_id) const
{
  ViewpointReference ref;
  ref.drone_id = drone_id;
  ref.ugv_id = ugv_id;
  ref.frame_relative = true;
  ref.max_speed = 0.0;

  double target_radius = 12.0;
  double angle = (drone_id % 4) * (M_PI / 2.0) + (M_PI / 4.0);
  ref.rel_x = target_radius * std::cos(angle);
  ref.rel_y = target_radius * std::sin(angle);
  ref.altitude_z = z_nominal_;
  ref.rel_yaw = std::atan2(-ref.rel_y, -ref.rel_x);
  ref.pitch = std::atan2(ref.altitude_z, std::max(0.1, target_radius));

  sanitize_reference(ref);
  return ref;
}

ViewpointReference ViewpointOptimizer::apply_slew_rate_limiter(
  uint32_t drone_id, const ViewpointReference & target_ref, double dt)
{
  auto it = prev_references_.find(drone_id);
  if (it == prev_references_.end()) {
    prev_references_[drone_id] = target_ref;
    return target_ref;
  }

  const auto & prev = it->second;
  ViewpointReference limited = target_ref;

  double effective_dt = (dt > 1e-4) ? dt : 0.2;
  double max_dp = slew_rate_v_max_ * effective_dt;

  double dx = target_ref.rel_x - prev.rel_x;
  double dy = target_ref.rel_y - prev.rel_y;
  double dz = target_ref.altitude_z - prev.altitude_z;
  double dist_step = std::sqrt(dx * dx + dy * dy + dz * dz);

  if (dist_step > max_dp && dist_step > 1e-9) {
    double scale = max_dp / dist_step;
    dx *= scale;
    dy *= scale;
    dz *= scale;
  }

  limited.rel_x = prev.rel_x + dx;
  limited.rel_y = prev.rel_y + dy;
  limited.altitude_z = prev.altitude_z + dz;

  double max_dyaw = 3.5 * effective_dt;  // 3.5 rad/s (~200 deg/s taxa de guinada ágil)
  double dyaw = target_ref.rel_yaw - prev.rel_yaw;
  while (dyaw > M_PI) {dyaw -= 2.0 * M_PI;}
  while (dyaw < -M_PI) {dyaw += 2.0 * M_PI;}
  limited.rel_yaw = prev.rel_yaw + std::clamp(dyaw, -max_dyaw, +max_dyaw);
  while (limited.rel_yaw > M_PI) {limited.rel_yaw -= 2.0 * M_PI;}
  while (limited.rel_yaw < -M_PI) {limited.rel_yaw += 2.0 * M_PI;}

  // Garantia Primordial no Slew-Rate Limiter (Fase 4/6 v2.0.0):
  // Impede que o atraso de slew de guinada tire o UGV da margem do FoV horizontal (+/- 35°)
  double angle_to_ugv = std::atan2(-limited.rel_y, -limited.rel_x);
  double delta_az = angle_to_ugv - limited.rel_yaw;
  while (delta_az > M_PI) {delta_az -= 2.0 * M_PI;}
  while (delta_az < -M_PI) {delta_az += 2.0 * M_PI;}

  double max_allowed_az = 35.0 * M_PI / 180.0;  // Margem segura dentro dos 45°
  if (std::abs(delta_az) > max_allowed_az) {
    double sign = (delta_az > 0.0) ? 1.0 : -1.0;
    limited.rel_yaw = angle_to_ugv - sign * max_allowed_az;
    while (limited.rel_yaw > M_PI) {limited.rel_yaw -= 2.0 * M_PI;}
    while (limited.rel_yaw < -M_PI) {limited.rel_yaw += 2.0 * M_PI;}
  }

  double r = std::hypot(limited.rel_x, limited.rel_y);
  limited.pitch = std::atan2(limited.altitude_z, std::max(0.1, r));

  sanitize_reference(limited);
  prev_references_[drone_id] = limited;
  return limited;
}

void ViewpointOptimizer::set_previous_reference(
  uint32_t drone_id, const ViewpointReference & ref)
{
  prev_references_[drone_id] = ref;
}

void ViewpointOptimizer::reset_previous_references()
{
  prev_references_.clear();
}

bool ViewpointOptimizer::sanitize_reference(ViewpointReference & ref) const
{
  bool is_clean = true;

  // 1. Verificação de NaN / Inf nas coordenadas (R2)
  if (std::isnan(ref.rel_x) || std::isinf(ref.rel_x)) {
    ref.rel_x = 0.0;
    is_clean = false;
  }
  if (std::isnan(ref.rel_y) || std::isinf(ref.rel_y)) {
    ref.rel_y = 0.0;
    is_clean = false;
  }
  if (std::isnan(ref.altitude_z) || std::isinf(ref.altitude_z)) {
    ref.altitude_z = z_nominal_;
    is_clean = false;
  }
  if (std::isnan(ref.rel_yaw) || std::isinf(ref.rel_yaw)) {
    ref.rel_yaw = 0.0;
    is_clean = false;
  }
  while (ref.rel_yaw > M_PI) {ref.rel_yaw -= 2.0 * M_PI;}
  while (ref.rel_yaw < -M_PI) {ref.rel_yaw += 2.0 * M_PI;}
  if (std::isnan(ref.pitch) || std::isinf(ref.pitch)) {
    ref.pitch = std::atan2(ref.altitude_z, std::max(0.1, std::hypot(ref.rel_x, ref.rel_y)));
    is_clean = false;
  }

  // 2. Limite rígido de altitude [z_min_, z_max_]
  ref.altitude_z = std::clamp(ref.altitude_z, z_min_, z_max_);

  // 3. Limite de raio máximo horizontal
  double r = std::sqrt(ref.rel_x * ref.rel_x + ref.rel_y * ref.rel_y);
  if (r > max_radius_) {
    double scale = max_radius_ / r;
    ref.rel_x *= scale;
    ref.rel_y *= scale;
  }

  // 4. Garantia contratual do frame relativo
  ref.frame_relative = true;
  ref.max_speed = 0.0;

  return is_clean;
}

double ViewpointOptimizer::evaluate_fov_cost(
  double dx, double dy, double z, double yaw,
  const Vector3d & ugv_pos, double ugv_yaw,
  const std::vector<OptimizationTarget> & targets) const
{
  double cos_u = std::cos(ugv_yaw);
  double sin_u = std::sin(ugv_yaw);
  Vector3d uav_pos;
  uav_pos.x = ugv_pos.x + (dx * cos_u - dy * sin_u);
  uav_pos.y = ugv_pos.y + (dx * sin_u + dy * cos_u);
  uav_pos.z = z;

  double total_coverage = 0.0;
  double occlusion_penalty = 0.0;

  double drone_world_yaw = ugv_yaw + yaw;
  double r_horiz = std::hypot(dx, dy);
  double pitch = std::atan2(z, std::max(0.1, r_horiz));

  // 1. Restrição Primordial de FoV (Fase 2 v2.0.0):
  // O UGV alvo DEVE permanecer no FoV de pelo menos um dos sensores (LiDAR ou Câmera)
  // e desobstruído por prédios 3D. Violação gera custo de barreira proibitivo.
  if (!is_in_any_sensor_fov(uav_pos, drone_world_yaw, pitch, ugv_pos)) {
    double delta_dist = std::max(0.0, r_horiz - max_radius_);
    occlusion_penalty += 10000.0 + 1000.0 * delta_dist;
  }

  double fov_half_angle = 45.0 * M_PI / 180.0;  // 90° FOV horizontal
  double max_range = 40.0;                       // Alcance nominal da câmera

  for (const auto & tgt : targets) {
    Vector3d tgt_pos(tgt.x, tgt.y, tgt.z);

    // Teste de pertinência dual e LoS para alvos (Fase 1/2 v2.0.0)
    if (!is_in_any_sensor_fov(uav_pos, drone_world_yaw, pitch, tgt_pos)) {
      if (tgt.weight > 2.0) {
        // Alvo prioritário (pedestre ou UGV) ocluído ou fora de sensor
        occlusion_penalty += 10.0;
      }
      continue;
    }

    double rel_tgt_x = tgt.x - uav_pos.x;
    double rel_tgt_y = tgt.y - uav_pos.y;
    double dist_2d = std::sqrt(rel_tgt_x * rel_tgt_x + rel_tgt_y * rel_tgt_y);

    if (dist_2d > max_range || dist_2d < 1.0) {continue;}

    double angle_to_tgt = std::atan2(rel_tgt_y, rel_tgt_x);
    double angle_diff = std::abs(angle_to_tgt - drone_world_yaw);
    while (angle_diff > M_PI) {angle_diff -= 2.0 * M_PI;}
    angle_diff = std::abs(angle_diff);

    if (angle_diff <= fov_half_angle) {
      double footprint_quality = (z / z_max_) * std::cos(angle_diff) * tgt.weight;
      total_coverage += footprint_quality;
    }
  }

  return occlusion_penalty - total_coverage;
}

ViewpointReference ViewpointOptimizer::solve_viewpoint(
  uint32_t drone_id,
  uint32_t ugv_id,
  const Vector3d & ugv_pos,
  double ugv_yaw,
  const std::vector<OptimizationTarget> & targets,
  const std::vector<ViewpointReference> & other_active_drones,
  double dt)
{
  auto t_start = std::chrono::steady_clock::now();
  last_fallback_triggered_ = false;

  ViewpointReference ref;
  ref.drone_id = drone_id;
  ref.ugv_id = ugv_id;
  ref.frame_relative = true;
  ref.max_speed = 0.0;

  double target_radius = 12.0;
  double opt_z = z_nominal_;

  // Busca inicial pelo melhor quadrante com Linha de Visada (LoS) livre
  double best_cost = 1e9;
  double opt_dx = target_radius;
  double opt_dy = 0.0;
  double opt_yaw = 0.0;

  for (int q = 0; q < 8; ++q) {
    auto t_now = std::chrono::steady_clock::now();
    if (std::chrono::duration<double>(t_now - t_start).count() >= solver_deadline_sec_) {
      last_fallback_triggered_ = true;
      return apply_slew_rate_limiter(drone_id, compute_orbital_fallback(drone_id, ugv_id), dt);
    }

    double cand_angle = q * (M_PI / 4.0) + (drone_id % 4) * (M_PI / 2.0);
    double cand_dx = target_radius * std::cos(cand_angle);
    double cand_dy = target_radius * std::sin(cand_angle);
    double cand_yaw = std::atan2(-cand_dy, -cand_dx);
    double c = evaluate_fov_cost(
      cand_dx, cand_dy, opt_z, cand_yaw, ugv_pos, ugv_yaw, targets);
    if (c < best_cost) {
      best_cost = c;
      opt_dx = cand_dx;
      opt_dy = cand_dy;
      opt_yaw = cand_yaw;
    }
  }

  // Ajuste fino por descida de gradiente simplificada / SQP local
  double lr = 0.5;
  for (int iter = 0; iter < 10; ++iter) {
    auto t_now = std::chrono::steady_clock::now();
    if (std::chrono::duration<double>(t_now - t_start).count() > solver_deadline_sec_) {
      last_fallback_triggered_ = true;
      return apply_slew_rate_limiter(drone_id, compute_orbital_fallback(drone_id, ugv_id), dt);
    }

    opt_yaw = std::atan2(-opt_dy, -opt_dx);
    double cost = w_det_ * evaluate_fov_cost(
      opt_dx, opt_dy, opt_z, opt_yaw, ugv_pos, ugv_yaw, targets);
    double cost_dx = w_det_ * evaluate_fov_cost(
      opt_dx + 0.1, opt_dy, opt_z, opt_yaw, ugv_pos, ugv_yaw, targets);
    double cost_dy = w_det_ * evaluate_fov_cost(
      opt_dx, opt_dy + 0.1, opt_z, opt_yaw, ugv_pos, ugv_yaw, targets);

    double grad_x = (cost_dx - cost) / 0.1;
    double grad_y = (cost_dy - cost) / 0.1;

    // Penalidade de barreira anti-colisão em relação a outros drones
    for (const auto & other : other_active_drones) {
      if (other.drone_id == drone_id || other.ugv_id != ugv_id) {continue;}
      double diff_x = opt_dx - other.rel_x;
      double diff_y = opt_dy - other.rel_y;
      double dist = std::sqrt(diff_x * diff_x + diff_y * diff_y);

      if (dist < d_safe_) {
        double repulsive = w_safe_ * (d_safe_ - dist) / std::max(0.1, dist);
        grad_x -= repulsive * (diff_x / std::max(0.1, dist));
        grad_y -= repulsive * (diff_y / std::max(0.1, dist));
      }
    }

    opt_dx -= lr * grad_x;
    opt_dy -= lr * grad_y;

    // Saturação rígida dentro do raio máximo
    double current_r = std::sqrt(opt_dx * opt_dx + opt_dy * opt_dy);
    if (current_r > max_radius_) {
      opt_dx = (opt_dx / current_r) * max_radius_;
      opt_dy = (opt_dy / current_r) * max_radius_;
    }
  }

  // Clamping de segurança rígido na altitude [2.5, 35.0] m
  ref.altitude_z = std::clamp(opt_z, z_min_, z_max_);
  ref.rel_x = opt_dx;
  ref.rel_y = opt_dy;
  ref.rel_yaw = std::atan2(-opt_dy, -opt_dx);

  // Pitch acoplado da câmera solidária ao chassi (D2)
  double r = std::hypot(ref.rel_x, ref.rel_y);
  ref.pitch = std::atan2(ref.altitude_z, std::max(0.1, r));

  sanitize_reference(ref);

  // Verificação estrita da Restrição Primordial de FoV (Fase 2 v2.0.0):
  // Se a pose resultante violar a visibilidade dual do UGV alvo, aciona o fallback orbital.
  if (!is_target_ugv_in_fov(ref, ugv_pos, ugv_yaw)) {
    last_fallback_triggered_ = true;
    auto fallback_ref = compute_orbital_fallback(drone_id, ugv_id);
    return apply_slew_rate_limiter(drone_id, fallback_ref, dt);
  }

  auto t_end = std::chrono::steady_clock::now();
  last_solve_time_ms_ = std::chrono::duration<double, std::milli>(t_end - t_start).count();

  // Aplicação do limitador de slew-rate para continuidade temporal C0 (M3)
  return apply_slew_rate_limiter(drone_id, ref, dt);
}

}  // namespace atas_optimizer
