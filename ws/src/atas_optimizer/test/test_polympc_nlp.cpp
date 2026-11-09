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
#include <vector>

#include "atas_optimizer/viewpoint_optimizer.hpp"

TEST(PolyMpNlpTest, CoupledSolidaryCameraPitchAngle)
{
  atas_optimizer::ViewpointOptimizer opt;
  opt.set_altitude_bounds(2.5, 35.0);
  opt.set_nominal_altitude(15.0);

  atas_optimizer::Vector3d ugv_pos{0.0, 0.0, 0.0};
  std::vector<atas_optimizer::OptimizationTarget> targets;
  std::vector<atas_optimizer::ViewpointReference> other_drones;

  auto ref = opt.solve_viewpoint(0, 1, ugv_pos, 0.0, targets, other_drones);

  // Pitch deve satisfazer arctan(z / r)
  double r = std::hypot(ref.rel_x, ref.rel_y);
  double expected_pitch = std::atan2(ref.altitude_z, std::max(0.1, r));

  EXPECT_NEAR(ref.pitch, expected_pitch, 1e-4);
  EXPECT_GT(ref.pitch, 0.1);
  EXPECT_LT(ref.pitch, M_PI_2);

  // Teste em altitude modificada
  opt.set_nominal_altitude(25.0);
  auto ref_high = opt.solve_viewpoint(0, 1, ugv_pos, 0.0, targets, other_drones);
  double r_high = std::hypot(ref_high.rel_x, ref_high.rel_y);
  double expected_pitch_high = std::atan2(ref_high.altitude_z, std::max(0.1, r_high));

  EXPECT_NEAR(ref_high.pitch, expected_pitch_high, 1e-4);
  EXPECT_GT(ref_high.pitch, ref.pitch);
}

TEST(PolyMpNlpTest, SlewRateLimiterBoundsPositionAndYawStep)
{
  atas_optimizer::ViewpointOptimizer opt;
  opt.set_slew_rate_v_max(5.0);  // 5.0 m/s

  uint32_t drone_id = 1;
  atas_optimizer::ViewpointReference prev_ref;
  prev_ref.drone_id = drone_id;
  prev_ref.ugv_id = 1;
  prev_ref.rel_x = 12.0;
  prev_ref.rel_y = 0.0;
  prev_ref.altitude_z = 15.0;
  prev_ref.rel_yaw = M_PI;
  prev_ref.pitch = 0.5;

  opt.set_previous_reference(drone_id, prev_ref);

  // Alvo distante: salto de 10m em y em dt = 0.2s
  atas_optimizer::ViewpointReference target_ref = prev_ref;
  target_ref.rel_x = 12.0;
  target_ref.rel_y = 10.0;
  target_ref.altitude_z = 15.0;
  target_ref.rel_yaw = M_PI - 1.0;

  double dt = 0.2;
  auto limited_ref = opt.apply_slew_rate_limiter(drone_id, target_ref, dt);

  // Deslocamento 3D máximo permitido: v_max * dt = 5.0 * 0.2 = 1.0 m
  double max_step = 5.0 * dt;
  double dx = limited_ref.rel_x - prev_ref.rel_x;
  double dy = limited_ref.rel_y - prev_ref.rel_y;
  double dz = limited_ref.altitude_z - prev_ref.altitude_z;
  double dist_step = std::sqrt(dx * dx + dy * dy + dz * dz);

  EXPECT_LE(dist_step, max_step + 1e-5);
  EXPECT_GT(dist_step, 0.99);

  // Variação angular máxima permitida: omega_max * dt = 3.5 * 0.2 = 0.70 rad
  double yaw_diff = std::abs(limited_ref.rel_yaw - prev_ref.rel_yaw);
  while (yaw_diff > M_PI) {yaw_diff -= 2.0 * M_PI;}
  yaw_diff = std::abs(yaw_diff);
  EXPECT_LE(yaw_diff, (3.5 * dt) + 1e-4);

  // Reset de estado prévio
  opt.reset_previous_references();
  auto direct_ref = opt.apply_slew_rate_limiter(drone_id, target_ref, dt);
  EXPECT_DOUBLE_EQ(direct_ref.rel_x, target_ref.rel_x);
}

TEST(PolyMpNlpTest, SolverDeadlineWatchdogTriggersDeterministicFallback)
{
  atas_optimizer::ViewpointOptimizer opt;
  // Configura deadline impossivelmente curto para forçar timeout
  opt.set_solver_deadline(1e-8);  // 10 nanossegundos

  atas_optimizer::Vector3d ugv_pos{0.0, 0.0, 0.0};
  std::vector<atas_optimizer::OptimizationTarget> targets;
  std::vector<atas_optimizer::ViewpointReference> other_drones;

  uint32_t drone_id = 2;
  uint32_t ugv_id = 5;

  auto ref = opt.solve_viewpoint(drone_id, ugv_id, ugv_pos, 0.0, targets, other_drones, 0.2);

  // Watchdog deve ter disparado fallback
  EXPECT_TRUE(opt.was_fallback_triggered());
  EXPECT_EQ(ref.drone_id, drone_id);
  EXPECT_EQ(ref.ugv_id, ugv_id);
  EXPECT_GE(ref.altitude_z, opt.get_z_min());
  EXPECT_LE(ref.altitude_z, opt.get_z_max());

  // Restaura deadline normal (40 ms) e verifica que não dispara fallback
  opt.set_solver_deadline(0.040);
  auto ref_normal = opt.solve_viewpoint(drone_id, ugv_id, ugv_pos, 0.0, targets, other_drones, 0.2);
  EXPECT_FALSE(opt.was_fallback_triggered());
  EXPECT_GE(ref_normal.altitude_z, opt.get_z_min());
}

TEST(PolyMpNlpTest, OrbitalFallbackGeometricSeparation)
{
  atas_optimizer::ViewpointOptimizer opt;

  auto f0 = opt.compute_orbital_fallback(0, 1);
  auto f1 = opt.compute_orbital_fallback(1, 1);
  auto f2 = opt.compute_orbital_fallback(2, 1);

  // Todos devem estar a raio orbital seguro (~12m)
  double r0 = std::hypot(f0.rel_x, f0.rel_y);
  double r1 = std::hypot(f1.rel_x, f1.rel_y);
  double r2 = std::hypot(f2.rel_x, f2.rel_y);

  EXPECT_NEAR(r0, 12.0, 1e-3);
  EXPECT_NEAR(r1, 12.0, 1e-3);
  EXPECT_NEAR(r2, 12.0, 1e-3);

  // Separação mútua entre drones na mesma formação
  double d01 = std::hypot(f1.rel_x - f0.rel_x, f1.rel_y - f0.rel_y);
  double d12 = std::hypot(f2.rel_x - f1.rel_x, f2.rel_y - f1.rel_y);

  EXPECT_GT(d01, 8.0);
  EXPECT_GT(d12, 8.0);
}

TEST(PolyMpNlpTest, NlpConvergenceTimeUnder20msBenchmark)
{
  atas_optimizer::ViewpointOptimizer opt;
  opt.load_town10_buildings();
  opt.set_solver_deadline(0.040);  // 40ms estrito

  atas_optimizer::Vector3d ugv_pos{50.0, 50.0, 0.0};
  std::vector<atas_optimizer::OptimizationTarget> targets;

  // 10 alvos dinâmicos no raio do UGV
  for (int i = 0; i < 10; ++i) {
    atas_optimizer::OptimizationTarget tgt;
    tgt.x = ugv_pos.x + 10.0 * std::cos(i * 0.6);
    tgt.y = ugv_pos.y + 10.0 * std::sin(i * 0.6);
    tgt.z = 1.0;
    tgt.weight = 2.0;
    targets.push_back(tgt);
  }

  std::vector<atas_optimizer::ViewpointReference> other_drones;

  for (int run = 0; run < 30; ++run) {
    auto ref = opt.solve_viewpoint(run % 4, 1, ugv_pos, 0.0, targets, other_drones, 0.2);
    EXPECT_FALSE(opt.was_fallback_triggered());
    EXPECT_LT(opt.get_last_solve_time_ms(), 20.0);
    EXPECT_GE(ref.altitude_z, 2.5);
    EXPECT_LE(ref.altitude_z, 35.0);
    EXPECT_TRUE(opt.is_target_ugv_in_fov(ref, ugv_pos, 0.0));
  }
}
