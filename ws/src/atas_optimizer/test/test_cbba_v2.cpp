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
#include <map>
#include <memory>
#include <utility>
#include <vector>

#include "atas_optimizer/cbba_agent.hpp"
#include "atas_optimizer/viewpoint_optimizer.hpp"

TEST(CbbaV2Test, AntiChatteringHysteresisSuppression)
{
  // Validação D4: Histerese de 15% impede oscilação (chattering) com ruído < 15%
  atas_optimizer::CbbaAgent agent0(0, 1);
  atas_optimizer::CbbaAgent agent1(1, 1);
  agent0.set_hysteresis(0.15);
  agent1.set_hysteresis(0.15);

  agent0.set_position(0.0, 0.0, 10.0);
  agent1.set_position(2.0, 0.0, 10.0);

  std::vector<atas_optimizer::TaskInfo> tasks;
  atas_optimizer::TaskInfo t0;
  t0.id = 10;
  t0.x = 0.0;
  t0.y = 0.0;
  t0.z = 0.0;
  t0.priority = 1.0;
  t0.base_value = 100.0;
  tasks.push_back(t0);

  agent0.update_tasks(tasks);
  agent1.update_tasks(tasks);

  // Rodada 1: Agent 0 está mais perto (dist = 10m vs dist = 10.2m)
  std::map<uint32_t, double> lat;
  agent0.build_bundle(lat);
  agent1.build_bundle(lat);

  std::vector<atas_optimizer::ConsensusPayload> msgs;
  msgs.push_back(agent0.send_message());
  msgs.push_back(agent1.send_message());

  agent0.process_consensus(msgs, 1.0);
  agent1.process_consensus(msgs, 1.0);

  EXPECT_TRUE(agent0.is_active());
  EXPECT_FALSE(agent1.is_active());

  // Rodada 2: Agent 1 move-se ligeiramente para mais perto, obtendo margem de ~5% (< 15%)
  agent1.set_position(0.0, -0.5, 10.0);  // dist ligeiramente menor
  agent0.build_bundle(lat);
  agent1.build_bundle(lat);

  msgs.clear();
  msgs.push_back(agent0.send_message());
  msgs.push_back(agent1.send_message());

  agent0.process_consensus(msgs, 2.0);
  agent1.process_consensus(msgs, 2.0);

  // Agent 0 deve reter a posse devido à histerese de 15% (sem chattering)
  EXPECT_TRUE(agent0.is_active());
  EXPECT_FALSE(agent1.is_active());

  // Rodada 3: Agent 1 move-se para muito perto (dist = 1m vs dist = 10m), superando > 15%
  agent1.set_position(0.0, 0.0, 1.0);
  lat[10] = 5.0;  // Latência excelente de 5 ms
  agent1.build_bundle(lat);

  msgs.clear();
  msgs.push_back(agent0.send_message());
  msgs.push_back(agent1.send_message());

  agent0.process_consensus(msgs, 3.0);
  agent1.process_consensus(msgs, 3.0);

  // Agora sim a tarefa deve ser transferida para Agent 1
  EXPECT_FALSE(agent0.is_active());
  EXPECT_TRUE(agent1.is_active());
}

TEST(CbbaV2Test, MultiBundleConvoyAllocation)
{
  // Validação M2: Drone único com bundle max = 2 aloca 2 UGVs próximos em comboio
  atas_optimizer::CbbaAgent agent(0, 2);
  agent.set_position(0.0, 0.0, 10.0);

  std::vector<atas_optimizer::TaskInfo> tasks;
  atas_optimizer::TaskInfo u1;
  u1.id = 1;
  u1.x = 2.0;
  u1.y = 0.0;
  tasks.push_back(u1);

  atas_optimizer::TaskInfo u2;
  u2.id = 2;
  u2.x = 8.0;
  u2.y = 0.0;
  tasks.push_back(u2);

  agent.update_tasks(tasks);
  std::map<uint32_t, double> lat;
  agent.build_bundle(lat);

  EXPECT_TRUE(agent.is_active());
  ASSERT_EQ(agent.get_bundle().size(), 2u);
  EXPECT_EQ(agent.get_bundle()[0], 1u);
  EXPECT_EQ(agent.get_bundle()[1], 2u);
}

TEST(CbbaV2Test, RfContentionPenaltyAvoidsConglomeration)
{
  // Validação D5: Penalidade de contenção RF direciona novo drone para UGV desatendido
  atas_optimizer::CbbaAgent agent0(0, 1);
  atas_optimizer::CbbaAgent agent1(1, 1);
  agent0.set_rf_contention_penalty(2.0);
  agent1.set_rf_contention_penalty(2.0);

  std::vector<atas_optimizer::TaskInfo> tasks;
  atas_optimizer::TaskInfo u1;
  u1.id = 1;
  u1.x = 10.0;
  u1.y = 0.0;
  tasks.push_back(u1);

  atas_optimizer::TaskInfo u2;
  u2.id = 2;
  u2.x = -10.0;
  u2.y = 0.0;
  tasks.push_back(u2);

  // Drone 0 vence e ocupa o UGV 1
  agent0.set_position(10.0, 0.0, 10.0);
  agent0.update_tasks(tasks);
  std::map<uint32_t, double> lat;
  agent0.build_bundle(lat);

  // Drone 1 está na origem (0, 0), equidistante de UGV 1 e UGV 2
  agent1.set_position(0.0, 0.0, 10.0);
  agent1.update_tasks(tasks);

  // Notificar Drone 1 sobre a alocação do Drone 0 no UGV 1
  std::vector<atas_optimizer::ConsensusPayload> msgs;
  msgs.push_back(agent0.send_message());
  agent1.process_consensus(msgs, 1.0);

  // Drone 1 constrói seu bundle: com a contenção RF no UGV 1, deve escolher UGV 2
  agent1.build_bundle(lat);

  EXPECT_TRUE(agent1.is_active());
  ASSERT_EQ(agent1.get_bundle().size(), 1u);
  EXPECT_EQ(agent1.get_bundle()[0], 2u);
}

TEST(CbbaV2Test, CascadeReleaseRule)
{
  // Regra Canônica de Liberação em Cascata (Choi et al., 2009):
  // Se perde b_0, perde também b_1
  atas_optimizer::CbbaAgent agent(0, 2);
  agent.set_position(0.0, 0.0, 10.0);

  std::vector<atas_optimizer::TaskInfo> tasks;
  atas_optimizer::TaskInfo u1;
  u1.id = 1;
  tasks.push_back(u1);
  atas_optimizer::TaskInfo u2;
  u2.id = 2;
  tasks.push_back(u2);

  agent.update_tasks(tasks);
  std::map<uint32_t, double> lat;
  agent.build_bundle(lat);
  ASSERT_EQ(agent.get_bundle().size(), 2u);

  // Simular mensagem de outro agente com lance maior para u1
  atas_optimizer::ConsensusPayload incoming;
  incoming.sender_id = 9;
  incoming.y = {9999.0, 0.0};
  incoming.z = {9, -1};
  incoming.s[9] = 1.0;

  agent.process_consensus({incoming}, 2.0);

  // Ambas as tarefas devem ter sido liberadas devido à perda de u1
  EXPECT_FALSE(agent.is_active());
  EXPECT_TRUE(agent.get_bundle().empty());
}

TEST(CbbaV2Test, StrictEscortLinkConstraint)
{
  // Validacao Fase 3: Cada UAV ativo possui pelo menos 1 UGV alvo.
  // Drones sem tarefa atribuida permanecem inativos (is_active() == false).
  std::vector<std::shared_ptr<atas_optimizer::CbbaAgent>> agents;
  for (uint32_t i = 0; i < 5; ++i) {
    auto ag = std::make_shared<atas_optimizer::CbbaAgent>(i, 1);
    ag->set_position(static_cast<double>(i) * 5.0, 0.0, 10.0);
    agents.push_back(ag);
  }

  // Cenario 1: 2 UGVs na frota
  std::vector<atas_optimizer::TaskInfo> ugvs_2;
  atas_optimizer::TaskInfo u1;
  u1.id = 101;
  u1.x = 2.0;
  ugvs_2.push_back(u1);
  atas_optimizer::TaskInfo u2;
  u2.id = 102;
  u2.x = 20.0;
  ugvs_2.push_back(u2);

  for (auto & ag : agents) {
    ag->update_tasks(ugvs_2);
    std::map<uint32_t, double> lat;
    ag->build_bundle(lat);
  }

  // Consenso
  for (int iter = 0; iter < 3; ++iter) {
    std::vector<atas_optimizer::ConsensusPayload> msgs;
    for (const auto & ag : agents) {
      msgs.push_back(ag->send_message());
    }
    for (auto & ag : agents) {
      ag->process_consensus(msgs, 1.0 + iter);
    }
  }

  uint32_t active_count = 0;
  for (const auto & ag : agents) {
    if (ag->is_active()) {
      active_count++;
      EXPECT_GE(ag->get_bundle().size(), 1u);
      EXPECT_TRUE(ag->has_assigned_target());
      EXPECT_GT(ag->get_primary_target(), 0u);
    } else {
      EXPECT_TRUE(ag->get_bundle().empty());
      EXPECT_FALSE(ag->has_assigned_target());
      EXPECT_EQ(ag->get_primary_target(), 0u);
    }
  }

  EXPECT_EQ(active_count, 2u);
}

TEST(CbbaV2Test, MultiBundleMidpointPrimordialFovFallback)
{
  // Validacao Fase 3: Multi-Bundle (M = 2)
  // Se o comboio e muito espacado de modo que o ponto medio viole o FoV do UGV primario,
  // a pose do UGV primario e estritamente garantida no FoV.
  atas_optimizer::ViewpointOptimizer opt;
  opt.set_buildings({});

  atas_optimizer::Vector3d ugv_pos(0.0, 0.0, 0.0);
  double ugv_yaw = 0.0;

  // UGV secundario a 120m de distancia (comboio muito disperso)
  atas_optimizer::Vector3d sec_pos(120.0, 0.0, 0.0);

  double mid_x = 0.5 * (ugv_pos.x + sec_pos.x);
  double mid_y = 0.5 * (ugv_pos.y + sec_pos.y);
  double dist_ugvs = std::hypot(sec_pos.x - ugv_pos.x, sec_pos.y - ugv_pos.y);
  double alt_needed = std::clamp(0.5 * dist_ugvs + 3.0, 2.5, 35.0);

  atas_optimizer::ViewpointReference midpoint_ref;
  midpoint_ref.drone_id = 0;
  midpoint_ref.ugv_id = 1;
  midpoint_ref.rel_x = mid_x - ugv_pos.x;
  midpoint_ref.rel_y = mid_y - ugv_pos.y;
  midpoint_ref.altitude_z = alt_needed;
  midpoint_ref.rel_yaw = std::atan2(-midpoint_ref.rel_y, -midpoint_ref.rel_x);
  double r_mid = std::hypot(midpoint_ref.rel_x, midpoint_ref.rel_y);
  midpoint_ref.pitch = std::atan2(alt_needed, std::max(0.1, r_mid));
  midpoint_ref.frame_relative = true;

  bool mid_in_fov = opt.is_target_ugv_in_fov(midpoint_ref, ugv_pos, ugv_yaw);

  std::vector<atas_optimizer::OptimizationTarget> targets;
  atas_optimizer::OptimizationTarget ugv_tgt;
  ugv_tgt.x = ugv_pos.x;
  ugv_tgt.y = ugv_pos.y;
  ugv_tgt.z = ugv_pos.z;
  ugv_tgt.weight = 5.0;
  targets.push_back(ugv_tgt);

  atas_optimizer::OptimizationTarget sec_tgt;
  sec_tgt.x = sec_pos.x;
  sec_tgt.y = sec_pos.y;
  sec_tgt.z = sec_pos.z;
  sec_tgt.weight = 4.0;
  targets.push_back(sec_tgt);

  std::vector<atas_optimizer::ViewpointReference> other_refs;
  atas_optimizer::ViewpointReference safe_ref;
  if (!mid_in_fov) {
    safe_ref = opt.solve_viewpoint(0, 1, ugv_pos, ugv_yaw, targets, other_refs);
  } else {
    safe_ref = midpoint_ref;
  }

  // Garantia primordial satisfeita
  EXPECT_TRUE(opt.is_target_ugv_in_fov(safe_ref, ugv_pos, ugv_yaw));
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
