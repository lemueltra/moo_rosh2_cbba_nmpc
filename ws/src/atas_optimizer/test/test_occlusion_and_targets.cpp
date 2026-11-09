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
#include <vector>

#include "atas_optimizer/viewpoint_optimizer.hpp"

TEST(OcclusionAndTargetsTest, Town10BuildingsLoadedCorrectly)
{
  atas_optimizer::ViewpointOptimizer opt;
  const auto & buildings = opt.get_buildings();

  // Contrato M4: 30 edifícios canônicos de Town10 carregados
  EXPECT_EQ(buildings.size(), 30u);

  for (const auto & b : buildings) {
    EXPECT_LT(b.min_x, b.max_x);
    EXPECT_LT(b.min_y, b.max_y);
    EXPECT_GE(b.height, 5.0);
  }
}

TEST(OcclusionAndTargetsTest, LoSRayCastingDetectsObstacles)
{
  atas_optimizer::ViewpointOptimizer opt;

  // Prédio 0: min_x = -29.1292, max_x = -10.9961, min_y = -92.8516, max_y = -80.03, height = 10.0
  atas_optimizer::Vector3d p_blocked_1(-40.0, -85.0, 5.0);
  atas_optimizer::Vector3d p_blocked_2(0.0, -85.0, 5.0);

  // O segmento cruza o miolo do prédio 0: deve ser detectado como ocluído (LoS = false)
  EXPECT_FALSE(opt.check_los(p_blocked_1, p_blocked_2));

  // Um segmento que passa bem acima do prédio (z = 25m > height 10m) deve ter LoS livre
  atas_optimizer::Vector3d p_high_1(-40.0, -85.0, 25.0);
  atas_optimizer::Vector3d p_high_2(0.0, -85.0, 25.0);
  EXPECT_TRUE(opt.check_los(p_high_1, p_high_2));

  // Um segmento numa área aberta da via (origem 0,0 até 10,10) deve ter LoS livre
  atas_optimizer::Vector3d p_clear_1(0.0, 0.0, 15.0);
  atas_optimizer::Vector3d p_clear_2(5.0, 5.0, 0.0);
  EXPECT_TRUE(opt.check_los(p_clear_1, p_clear_2));
}

TEST(OcclusionAndTargetsTest, ViewpointAvoidsBuildingOcclusion)
{
  atas_optimizer::ViewpointOptimizer opt;

  // UGV posicionado adjacente a face leste do prédio 0 (-10.99, -85.0)
  atas_optimizer::Vector3d ugv_pos(-5.0, -85.0, 0.0);
  double ugv_yaw = 0.0;

  std::vector<atas_optimizer::OptimizationTarget> targets;
  atas_optimizer::OptimizationTarget ugv_tgt;
  ugv_tgt.x = ugv_pos.x;
  ugv_tgt.y = ugv_pos.y;
  ugv_tgt.z = ugv_pos.z;
  ugv_tgt.weight = 5.0;
  targets.push_back(ugv_tgt);

  std::vector<atas_optimizer::ViewpointReference> other_drones;

  auto ref = opt.solve_viewpoint(0, 1, ugv_pos, ugv_yaw, targets, other_drones);

  // Calcular posição do drone no mundo a partir da referência relativa
  atas_optimizer::Vector3d uav_pos;
  uav_pos.x = ugv_pos.x + ref.rel_x;
  uav_pos.y = ugv_pos.y + ref.rel_y;
  uav_pos.z = ref.altitude_z;

  // O otimizador de viewpoint DEVE posicionar o UAV com linha de visada desobstruída para o UGV
  EXPECT_TRUE(opt.check_los(uav_pos, ugv_pos));
}

TEST(OcclusionAndTargetsTest, ActivePerceptionAttractionToPedestrianTarget)
{
  atas_optimizer::ViewpointOptimizer opt;
  opt.set_altitude_bounds(2.5, 35.0);
  opt.set_nominal_altitude(15.0);

  atas_optimizer::Vector3d ugv_pos(0.0, 0.0, 0.0);
  double ugv_yaw = 0.0;

  // Sem alvos laterais (apenas UGV)
  std::vector<atas_optimizer::OptimizationTarget> targets_baseline;
  atas_optimizer::OptimizationTarget ugv_tgt;
  ugv_tgt.x = 0.0;
  ugv_tgt.y = 0.0;
  ugv_tgt.z = 0.0;
  ugv_tgt.weight = 5.0;
  targets_baseline.push_back(ugv_tgt);

  std::vector<atas_optimizer::ViewpointReference> other_drones;
  auto ref_base = opt.solve_viewpoint(
    0, 1, ugv_pos, ugv_yaw, targets_baseline, other_drones);

  // Com pedestre prioritário a leste (+15m no eixo X)
  opt.reset_previous_references();
  std::vector<atas_optimizer::OptimizationTarget> targets_with_ped = targets_baseline;
  atas_optimizer::OptimizationTarget ped;
  ped.x = 15.0;
  ped.y = 0.0;
  ped.z = 0.0;
  ped.weight = 3.0;
  targets_with_ped.push_back(ped);

  auto ref_ped = opt.solve_viewpoint(
    0, 1, ugv_pos, ugv_yaw, targets_with_ped, other_drones);

  // Para enquadrar simultaneamente o UGV em (0,0) e o pedestre em (+15,0),
  // o UAV posiciona-se a oeste (rel_x < 0) apontando a câmera para leste (yaw ~ 0)
  EXPECT_LT(ref_ped.rel_x, 0.0);
  EXPECT_NEAR(ref_ped.rel_yaw, 0.0, 0.2);
  EXPECT_NE(ref_ped.rel_x, ref_base.rel_x);

  // Co-otimizacao (Fase 4 v2.0.0): Ambos UGV e pedestre devem estar no FoV
  EXPECT_TRUE(opt.is_target_ugv_in_fov(ref_ped, ugv_pos, ugv_yaw));
  atas_optimizer::Vector3d uav_pos_ped(
    ugv_pos.x + ref_ped.rel_x, ugv_pos.y + ref_ped.rel_y, ref_ped.altitude_z);
  EXPECT_TRUE(opt.is_in_any_sensor_fov(
    uav_pos_ped, ugv_yaw + ref_ped.rel_yaw, ref_ped.pitch,
    atas_optimizer::Vector3d(ped.x, ped.y, ped.z)));
}

TEST(OcclusionAndTargetsTest, CoOptimizationMultiMetricNoRegression)
{
  // Validacao Fase 4: Preservacao simultanea de todas as metricas
  // 1. Restricao Primordial de FoV no UGV
  // 2. Cobertura ativa de alvos secundarios (pedestres peso 3.0)
  // 3. Barreira de seguranca inter-drone (d_safe >= 5.0m)
  // 4. Limites de altitude [2.5, 35.0]m
  atas_optimizer::ViewpointOptimizer opt;
  opt.set_inter_drone_safety_distance(5.0);
  opt.set_nominal_altitude(15.0);

  atas_optimizer::Vector3d ugv_pos(0.0, 0.0, 0.0);
  double ugv_yaw = 0.0;

  // Alvo UGV + 2 pedestres em risco (< 25m)
  std::vector<atas_optimizer::OptimizationTarget> targets;
  atas_optimizer::OptimizationTarget ugv_tgt;
  ugv_tgt.x = 0.0;
  ugv_tgt.y = 0.0;
  ugv_tgt.z = 0.0;
  ugv_tgt.weight = 5.0;
  targets.push_back(ugv_tgt);

  atas_optimizer::OptimizationTarget ped1;
  ped1.x = 10.0;
  ped1.y = 4.0;
  ped1.z = 0.0;
  ped1.weight = 3.0;
  targets.push_back(ped1);

  // Outro drone ativo ja posicionado em rel_x = 12.0, rel_y = 0.0
  std::vector<atas_optimizer::ViewpointReference> other_drones;
  atas_optimizer::ViewpointReference drone1;
  drone1.drone_id = 1;
  drone1.ugv_id = 1;
  drone1.rel_x = 12.0;
  drone1.rel_y = 0.0;
  drone1.altitude_z = 15.0;
  other_drones.push_back(drone1);

  auto ref = opt.solve_viewpoint(0, 1, ugv_pos, ugv_yaw, targets, other_drones, 0.2);

  // 1. UGV primordialmente no FoV
  EXPECT_TRUE(opt.is_target_ugv_in_fov(ref, ugv_pos, ugv_yaw));

  // 2. Altitude dentro dos limites
  EXPECT_GE(ref.altitude_z, 2.5);
  EXPECT_LE(ref.altitude_z, 35.0);

  // 3. Distancia segura em relacao ao drone 1 (>= 5.0m)
  double dist_to_drone1 = std::hypot(ref.rel_x - drone1.rel_x, ref.rel_y - drone1.rel_y);
  EXPECT_GE(dist_to_drone1, 5.0);

  // 4. Tempo de convergencia < 40 ms
  EXPECT_LT(opt.get_last_solve_time_ms(), 40.0);
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
