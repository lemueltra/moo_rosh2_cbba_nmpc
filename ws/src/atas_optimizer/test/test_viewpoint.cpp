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
#include <chrono>
#include <cmath>
#include <limits>
#include <vector>

#include "atas_optimizer/viewpoint_optimizer.hpp"

TEST(ViewpointOptimizerTest, AltitudeAndRadiusConstraints)
{
  atas_optimizer::ViewpointOptimizer opt;
  opt.set_altitude_bounds(2.5, 35.0);
  opt.set_max_radius(30.0);

  atas_optimizer::Vector3d ugv_pos{0.0, 0.0, 0.0};
  std::vector<atas_optimizer::OptimizationTarget> targets;
  std::vector<atas_optimizer::ViewpointReference> other_drones;

  auto ref = opt.solve_viewpoint(0, 10, ugv_pos, 0.0, targets, other_drones);

  // Verificação de limites de altitude estritos
  EXPECT_GE(ref.altitude_z, 2.5);
  EXPECT_LE(ref.altitude_z, 35.0);

  // Verificação de raio horizontal
  double r = std::sqrt(ref.rel_x * ref.rel_x + ref.rel_y * ref.rel_y);
  EXPECT_LE(r, 30.0 + 1e-3);
  EXPECT_TRUE(ref.frame_relative);
  EXPECT_EQ(ref.ugv_id, 10u);
  EXPECT_EQ(ref.drone_id, 0u);
}

TEST(ViewpointOptimizerTest, MultiDroneRepulsiveSafetyBarrier)
{
  atas_optimizer::ViewpointOptimizer opt;
  opt.set_altitude_bounds(2.5, 35.0);
  opt.set_inter_drone_safety_distance(6.0);

  atas_optimizer::Vector3d ugv_pos{0.0, 0.0, 0.0};
  std::vector<atas_optimizer::OptimizationTarget> targets;

  // Drone 0 na posição padrão
  std::vector<atas_optimizer::ViewpointReference> active_set;
  auto ref0 = opt.solve_viewpoint(0, 1, ugv_pos, 0.0, targets, active_set);
  active_set.push_back(ref0);

  // Drone 1 também atribuído ao mesmo UGV 1
  auto ref1 = opt.solve_viewpoint(1, 1, ugv_pos, 0.0, targets, active_set);

  // A distância horizontal entre os dois drones ativos deve respeitar o raio de segurança
  double dx = ref1.rel_x - ref0.rel_x;
  double dy = ref1.rel_y - ref0.rel_y;
  double dist = std::sqrt(dx * dx + dy * dy);

  EXPECT_GE(dist, 5.0);
}

TEST(ViewpointOptimizerTest, ExecutionTimeBenchmarkUnder50ms)
{
  atas_optimizer::ViewpointOptimizer opt;
  atas_optimizer::Vector3d ugv_pos{100.0, 200.0, 0.0};

  std::vector<atas_optimizer::OptimizationTarget> targets;
  for (int i = 0; i < 50; ++i) {
    atas_optimizer::OptimizationTarget t;
    t.x = 5.0 * std::cos(i);
    t.y = 5.0 * std::sin(i);
    t.z = 0.0;
    t.weight = 1.0;
    targets.push_back(t);
  }

  std::vector<atas_optimizer::ViewpointReference> other_drones;

  auto t_start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < 10; ++i) {
    auto ref = opt.solve_viewpoint(i % 5, 1, ugv_pos, 0.0, targets, other_drones);
    other_drones.push_back(ref);
  }
  auto t_end = std::chrono::high_resolution_clock::now();

  double elapsed_ms = std::chrono::duration<double, std::milli>(t_end - t_start).count();

  // 10 resoluções de viewpoint devem rodar bem abaixo de 50 ms total
  EXPECT_LT(elapsed_ms, 50.0);
}

TEST(ViewpointOptimizerTest, SanityFilterNanInfAndBounds)
{
  atas_optimizer::ViewpointOptimizer opt;
  opt.set_altitude_bounds(2.5, 35.0);
  opt.set_nominal_altitude(15.0);
  opt.set_max_radius(30.0);

  atas_optimizer::ViewpointReference ref;
  ref.drone_id = 1;
  ref.ugv_id = 2;
  ref.rel_x = std::numeric_limits<double>::quiet_NaN();
  ref.rel_y = std::numeric_limits<double>::infinity();
  ref.altitude_z = -10.0;  // abaixo de z_min
  ref.rel_yaw = std::numeric_limits<double>::quiet_NaN();

  // Executar filtro de sanitização R2
  bool is_clean = opt.sanitize_reference(ref);

  EXPECT_FALSE(is_clean);  // Detectou e corrigiu corrupção
  EXPECT_FALSE(std::isnan(ref.rel_x));
  EXPECT_FALSE(std::isinf(ref.rel_y));
  EXPECT_FALSE(std::isnan(ref.rel_yaw));
  EXPECT_EQ(ref.rel_x, 0.0);
  EXPECT_EQ(ref.rel_y, 0.0);
  EXPECT_EQ(ref.rel_yaw, 0.0);
  EXPECT_GE(ref.altitude_z, 2.5);
  EXPECT_LE(ref.altitude_z, 35.0);
  EXPECT_TRUE(ref.frame_relative);

  // Teste de saturação de raio
  ref.rel_x = 40.0;
  ref.rel_y = 30.0;  // Raio = 50.0 > max_radius 30.0
  opt.sanitize_reference(ref);
  double r = std::sqrt(ref.rel_x * ref.rel_x + ref.rel_y * ref.rel_y);
  EXPECT_NEAR(r, 30.0, 1e-4);
}
