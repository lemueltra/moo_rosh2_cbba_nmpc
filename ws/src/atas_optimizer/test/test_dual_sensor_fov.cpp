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

#include <gtest/gtest.h>
#include <cmath>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "atas_optimizer/viewpoint_optimizer.hpp"
#include "atas_optimizer/atas_optimizer_node.hpp"

TEST(DualSensorFovTest, LidarFovAzimuthElevationAndRange)
{
  atas_optimizer::ViewpointOptimizer opt;

  atas_optimizer::LidarConfig l_cfg;
  l_cfg.range_m = 100.0;
  l_cfg.horizontal_fov_rad = 120.0 * M_PI / 180.0;  // 120 deg
  l_cfg.lower_fov_rad = -30.0 * M_PI / 180.0;       // -30 deg
  l_cfg.upper_fov_rad = 10.0 * M_PI / 180.0;        // +10 deg
  opt.set_lidar_config(l_cfg);

  atas_optimizer::Vector3d uav_pos(0.0, 0.0, 20.0);
  double uav_yaw = 0.0;  // Apontando para +X

  // 1. Alvo à frente, no solo (dx = 50m, dz = -20m)
  // Distância 3D = sqrt(2500 + 400) = ~53.85m <= 100m
  // Elevação = asin(-20 / 53.85) = -21.8° in [-30°, +10°]
  atas_optimizer::Vector3d tgt_in(50.0, 0.0, 0.0);
  EXPECT_TRUE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_in));

  // 2. Alvo atrás do UAV (dx = -50m) -> fora do azimute [-60°, +60°]
  atas_optimizer::Vector3d tgt_behind(-50.0, 0.0, 0.0);
  EXPECT_FALSE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_behind));

  // 3. Alvo além do alcance máximo (dx = 150m > 100m)
  atas_optimizer::Vector3d tgt_far(150.0, 0.0, 0.0);
  EXPECT_FALSE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_far));

  // 4. Alvo muito íngreme diretamente abaixo (dx = 10m, dz = -30m)
  // Distância 3D = sqrt(100 + 900) = ~31.62m
  // Elevação = asin(-30 / 31.62) = -71.5° < -30° -> Fora do cone vertical inferior
  atas_optimizer::Vector3d tgt_steep(10.0, 0.0, -10.0);
  EXPECT_FALSE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_steep));
}

TEST(DualSensorFovTest, CameraFovAzimuthElevationAndRange)
{
  atas_optimizer::ViewpointOptimizer opt;

  atas_optimizer::CameraConfig c_cfg;
  c_cfg.range_m = 40.0;
  c_cfg.horizontal_fov_rad = 90.0 * M_PI / 180.0;   // 90 deg ([-45°, +45°])
  c_cfg.vertical_fov_rad = 58.7155 * M_PI / 180.0;  // ~58.72 deg
  opt.set_camera_config(c_cfg);

  atas_optimizer::Vector3d uav_pos(0.0, 0.0, 15.0);
  double uav_yaw = 0.0;  // Apontando para +X

  // Alvo no solo em (20, 0, 0)
  // d_2d = 20m, dz = -15m. Ângulo de inclinação ideal = atan2(15, 20) = 0.6435 rad (~36.87°)
  double coupled_pitch = std::atan2(15.0, 20.0);
  atas_optimizer::Vector3d tgt_in(20.0, 0.0, 0.0);

  // 1. Câmera com pitch acoplado apontando para o alvo
  EXPECT_TRUE(opt.is_in_camera_fov(uav_pos, uav_yaw, coupled_pitch, tgt_in));

  // 2. Alvo fora do alcance da câmera (distância 3D > 40m)
  atas_optimizer::Vector3d tgt_far(45.0, 0.0, 0.0);
  EXPECT_FALSE(opt.is_in_camera_fov(uav_pos, uav_yaw, coupled_pitch, tgt_far));

  // 3. Alvo fora da abertura horizontal (dy = 30m, dx = 15m -> atan2(30, 15) = 63.4° > 45°)
  atas_optimizer::Vector3d tgt_wide(15.0, 30.0, 0.0);
  EXPECT_FALSE(opt.is_in_camera_fov(uav_pos, uav_yaw, coupled_pitch, tgt_wide));

  // 4. Câmera apontando na horizontal (pitch = 0.0 rad) -> alvo abaixo fora do V-FoV
  EXPECT_FALSE(opt.is_in_camera_fov(uav_pos, uav_yaw, 0.0, tgt_in));
}

TEST(DualSensorFovTest, AnySensorFovBooleanUnion)
{
  atas_optimizer::ViewpointOptimizer opt;

  atas_optimizer::LidarConfig l_cfg;
  l_cfg.range_m = 100.0;
  opt.set_lidar_config(l_cfg);

  atas_optimizer::CameraConfig c_cfg;
  c_cfg.range_m = 40.0;
  opt.set_camera_config(c_cfg);

  atas_optimizer::Vector3d uav_pos(0.0, 0.0, 15.0);
  double uav_yaw = 0.0;
  double coupled_pitch = 0.5;

  // Cenário A: Alvo a 60m à frente (fora da câmera, mas dentro do LiDAR)
  atas_optimizer::Vector3d tgt_mid(60.0, 0.0, 0.0);
  EXPECT_FALSE(opt.is_in_camera_fov(uav_pos, uav_yaw, coupled_pitch, tgt_mid));
  EXPECT_TRUE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_mid));
  EXPECT_TRUE(opt.is_in_any_sensor_fov(uav_pos, uav_yaw, coupled_pitch, tgt_mid));

  // Cenário B: Alvo a 30m à frente (dentro de ambos: d=33.5m <= 40m, elev=-26.6° in [-30°, 10°])
  atas_optimizer::Vector3d tgt_both(30.0, 0.0, 0.0);
  double both_pitch = std::atan2(15.0, 30.0);
  EXPECT_TRUE(opt.is_in_camera_fov(uav_pos, uav_yaw, both_pitch, tgt_both));
  EXPECT_TRUE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_both));
  EXPECT_TRUE(opt.is_in_any_sensor_fov(uav_pos, uav_yaw, both_pitch, tgt_both));

  // Cenário C: Alvo a 20m com inclinação de -36.9°
  // Fora do LiDAR que corta em -30°, mas dentro da Câmera inclinada
  atas_optimizer::Vector3d tgt_close(20.0, 0.0, 0.0);
  double close_pitch = std::atan2(15.0, 20.0);
  EXPECT_TRUE(opt.is_in_camera_fov(uav_pos, uav_yaw, close_pitch, tgt_close));
  EXPECT_FALSE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_close));
  EXPECT_TRUE(opt.is_in_any_sensor_fov(uav_pos, uav_yaw, close_pitch, tgt_close));

  // Cenário D: Alvo atrás (fora de ambos)
  atas_optimizer::Vector3d tgt_behind(-20.0, 0.0, 0.0);
  EXPECT_FALSE(opt.is_in_camera_fov(uav_pos, uav_yaw, coupled_pitch, tgt_behind));
  EXPECT_FALSE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_behind));
  EXPECT_FALSE(opt.is_in_any_sensor_fov(uav_pos, uav_yaw, coupled_pitch, tgt_behind));
}

TEST(DualSensorFovTest, BuildingOcclusionBlocksBothSensors)
{
  atas_optimizer::ViewpointOptimizer opt;

  // Cria um edifício de teste entre o drone e o alvo
  atas_optimizer::BuildingOccluder wall;
  wall.id = 999;
  wall.min_x = 10.0;
  wall.max_x = 15.0;
  wall.min_y = -10.0;
  wall.max_y = 10.0;
  wall.height = 25.0;
  opt.set_buildings({wall});

  atas_optimizer::Vector3d uav_pos(0.0, 0.0, 10.0);
  double uav_yaw = 0.0;
  double pitch = 0.5;

  // Alvo do outro lado da parede
  atas_optimizer::Vector3d tgt_occluded(25.0, 0.0, 0.0);

  // Ambas as verificações devem falhar devido à oclusão LoS da parede
  EXPECT_FALSE(opt.check_los(uav_pos, tgt_occluded));
  EXPECT_FALSE(opt.is_in_lidar_fov(uav_pos, uav_yaw, tgt_occluded));
  EXPECT_FALSE(opt.is_in_camera_fov(uav_pos, uav_yaw, pitch, tgt_occluded));
  EXPECT_FALSE(opt.is_in_any_sensor_fov(uav_pos, uav_yaw, pitch, tgt_occluded));
}

TEST(DualSensorFovTest, NodeParametersConfiguration)
{
  if (!rclcpp::ok()) {
    rclcpp::init(0, nullptr);
  }
  rclcpp::NodeOptions options;
  options.append_parameter_override("use_sim_time", false);
  options.append_parameter_override("uav_lidar_range_m", 150.0);
  options.append_parameter_override("uav_camera_range_m", 50.0);

  auto node = std::make_shared<atas_optimizer::AtasOptimizerNode>(options);
  EXPECT_DOUBLE_EQ(node->get_lidar_config().range_m, 150.0);
  EXPECT_DOUBLE_EQ(node->get_camera_config().range_m, 50.0);

  node.reset();
  if (rclcpp::ok()) {
    rclcpp::shutdown();
  }
}

TEST(DualSensorFovTest, TargetUgvInFovEvaluation)
{
  atas_optimizer::ViewpointOptimizer opt;
  atas_optimizer::Vector3d ugv_pos(100.0, 50.0, 0.0);
  double ugv_yaw = M_PI / 4.0;  // 45 graus

  // Referencia nominal: atras do UGV a 12m, altitude 15m, apontando para o UGV
  atas_optimizer::ViewpointReference ref;
  ref.drone_id = 0;
  ref.ugv_id = 0;
  ref.rel_x = 12.0;
  ref.rel_y = 0.0;
  ref.altitude_z = 15.0;
  ref.rel_yaw = M_PI;  // Apontando de volta para (0, 0)
  ref.pitch = std::atan2(15.0, 12.0);

  // 1. UGV deve estar visivel no FoV dual
  EXPECT_TRUE(opt.is_target_ugv_in_fov(ref, ugv_pos, ugv_yaw));

  // 2. Drone com yaw invertido (olhando para o lado oposto do UGV)
  ref.rel_yaw = 0.0;  // Apontando para longe do UGV
  EXPECT_FALSE(opt.is_target_ugv_in_fov(ref, ugv_pos, ugv_yaw));

  // 3. Drone com parede bloqueando o UGV
  ref.rel_yaw = M_PI;
  atas_optimizer::BuildingOccluder wall;
  wall.id = 1;
  // UAV mundo: ugv_pos + R(ugv_yaw) * [12, 0] = (100 + 12*cos(pi/4), 50 + 12*sin(pi/4))
  // Parede no meio
  wall.min_x = 102.0;
  wall.max_x = 106.0;
  wall.min_y = 52.0;
  wall.max_y = 56.0;
  wall.height = 30.0;
  opt.set_buildings({wall});

  EXPECT_FALSE(opt.is_target_ugv_in_fov(ref, ugv_pos, ugv_yaw));
}

TEST(DualSensorFovTest, PrimordialBarrierPenaltyInEvaluateFovCost)
{
  atas_optimizer::ViewpointOptimizer opt;
  atas_optimizer::Vector3d ugv_pos(0.0, 0.0, 0.0);
  double ugv_yaw = 0.0;
  std::vector<atas_optimizer::OptimizationTarget> targets;

  // Pose com UGV em FoV (dx=12, dy=0, z=15, yaw=PI -> olhando para UGV)
  double cost_in_fov = opt.evaluate_fov_cost(12.0, 0.0, 15.0, M_PI, ugv_pos, ugv_yaw, targets);
  EXPECT_LT(cost_in_fov, 100.0);

  // Pose com drone apontando para longe do UGV (yaw=0 -> costas para o UGV)
  double cost_out_of_fov = opt.evaluate_fov_cost(12.0, 0.0, 15.0, 0.0, ugv_pos, ugv_yaw, targets);
  // Barreira primordial deve aplicar custo proibitivo >= 10000.0
  EXPECT_GE(cost_out_of_fov, 10000.0);
}

TEST(DualSensorFovTest, OrbitalFallbackGuaranteesTargetUgvInFov)
{
  atas_optimizer::ViewpointOptimizer opt;
  // Teste 1: Espaco livre puro sem oclusao
  opt.set_buildings({});
  atas_optimizer::Vector3d ugv_pos(25.0, -40.0, 0.0);
  double ugv_yaw = -1.2;

  // Para todos os slots de drones (0 a 3), a formacao analitica deve garantir UGV em FoV
  for (uint32_t drone_id = 0; drone_id < 4; ++drone_id) {
    auto fallback_ref = opt.compute_orbital_fallback(drone_id, 0);
    EXPECT_TRUE(opt.is_target_ugv_in_fov(fallback_ref, ugv_pos, ugv_yaw));
  }

  // Teste 2: Na intersecao aberta de Town10 com os 30 edificios carregados
  opt.load_town10_buildings();
  atas_optimizer::Vector3d open_intersection(0.0, 0.0, 0.0);
  double open_yaw = 0.5;
  for (uint32_t drone_id = 0; drone_id < 4; ++drone_id) {
    auto fallback_ref = opt.compute_orbital_fallback(drone_id, 0);
    EXPECT_TRUE(opt.is_target_ugv_in_fov(fallback_ref, open_intersection, open_yaw));
  }
}

TEST(DualSensorFovTest, ViewpointOptimizationSatisfiesPrimordialConstraint)
{
  atas_optimizer::ViewpointOptimizer opt;
  opt.load_town10_buildings();

  atas_optimizer::Vector3d ugv_pos(0.0, 0.0, 0.0);
  double ugv_yaw = 0.0;

  // Adiciona alguns alvos
  std::vector<atas_optimizer::OptimizationTarget> targets;
  atas_optimizer::OptimizationTarget t1;
  t1.x = 10.0;
  t1.y = 5.0;
  t1.z = 0.0;
  t1.weight = 3.0;
  targets.push_back(t1);

  std::vector<atas_optimizer::ViewpointReference> other_drones;

  for (uint32_t drone_id = 0; drone_id < 3; ++drone_id) {
    auto ref = opt.solve_viewpoint(drone_id, 0, ugv_pos, ugv_yaw, targets, other_drones, 0.2);
    // Pose otima DEVE satisfazer a restricao primordial
    EXPECT_TRUE(opt.is_target_ugv_in_fov(ref, ugv_pos, ugv_yaw));
    other_drones.push_back(ref);
  }
}
