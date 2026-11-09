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
#include <utility>
#include <vector>
#include "atas_optimizer/cbba_agent.hpp"

TEST(CbbaAgentTest, SingleAgentSingleTask) {
  atas_optimizer::CbbaAgent agent(0, 1);
  agent.set_position(0.0, 0.0, 10.0);

  std::vector<atas_optimizer::TaskInfo> tasks;
  atas_optimizer::TaskInfo t1;
  t1.id = 100;
  t1.x = 5.0;
  t1.y = 5.0;
  t1.z = 0.0;
  t1.priority = 1.0;
  t1.base_value = 100.0;
  tasks.push_back(t1);

  agent.update_tasks(tasks);

  std::map<uint32_t, double> latencies;
  latencies[100] = 5.0;  // 5ms

  agent.build_bundle(latencies);

  EXPECT_TRUE(agent.is_active());
  ASSERT_EQ(agent.get_bundle().size(), 1u);
  EXPECT_EQ(agent.get_bundle()[0], 100u);
}

TEST(CbbaAgentTest, TwoAgentsConflictResolution) {
  atas_optimizer::CbbaAgent agent0(0, 1);
  atas_optimizer::CbbaAgent agent1(1, 1);

  // Agente 0 está mais perto da tarefa
  agent0.set_position(1.0, 1.0, 10.0);
  agent1.set_position(50.0, 50.0, 10.0);

  std::vector<atas_optimizer::TaskInfo> tasks;
  atas_optimizer::TaskInfo t;
  t.id = 1;
  t.x = 0.0;
  t.y = 0.0;
  t.z = 0.0;
  t.priority = 1.0;
  t.base_value = 100.0;
  tasks.push_back(t);

  agent0.update_tasks(tasks);
  agent1.update_tasks(tasks);

  std::map<uint32_t, double> latencies;
  agent0.build_bundle(latencies);
  agent1.build_bundle(latencies);

  // Troca de mensagens de consenso
  std::vector<atas_optimizer::ConsensusPayload> msgs;
  msgs.push_back(agent0.send_message());
  msgs.push_back(agent1.send_message());

  agent0.process_consensus(msgs, 1.0);
  agent1.process_consensus(msgs, 1.0);

  // Agente 0 (mais próximo) deve vencer e manter a tarefa
  EXPECT_TRUE(agent0.is_active());
  // Agente 1 deve perder a tarefa no consenso
  EXPECT_FALSE(agent1.is_active());
}

TEST(CbbaAgentTest, TwoDimensionalLatencyMapLookup) {
  // Correção C1: Validação de bundle com mapa (drone_id, ugv_id)
  atas_optimizer::CbbaAgent agent(2, 1);
  agent.set_position(10.0, 10.0, 15.0);

  std::vector<atas_optimizer::TaskInfo> tasks;
  atas_optimizer::TaskInfo t0;
  t0.id = 5;
  t0.x = 12.0;
  t0.y = 12.0;
  tasks.push_back(t0);

  agent.update_tasks(tasks);

  std::map<std::pair<uint32_t, uint32_t>, double> latency_matrix;
  latency_matrix[{2, 5}] = 3.2;  // drone 2 -> ugv 5

  agent.build_bundle(latency_matrix);

  EXPECT_TRUE(agent.is_active());
  ASSERT_EQ(agent.get_bundle().size(), 1u);
  EXPECT_EQ(agent.get_bundle()[0], 5u);
}

TEST(CbbaAgentTest, PurgeInactiveTasksOnUpdate) {
  // Correção C3: Quando um UGV fica inativo, a tarefa deve ser purgada imediatamente do bundle
  atas_optimizer::CbbaAgent agent(0, 1);
  agent.set_position(0.0, 0.0, 10.0);

  std::vector<atas_optimizer::TaskInfo> initial_tasks;
  atas_optimizer::TaskInfo t1;
  t1.id = 42;
  initial_tasks.push_back(t1);

  agent.update_tasks(initial_tasks);
  std::map<uint32_t, double> latencies;
  agent.build_bundle(latencies);
  EXPECT_TRUE(agent.is_active());

  // UGV 42 agora ficou inativo (não está mais na lista de tarefas ativas)
  std::vector<atas_optimizer::TaskInfo> updated_tasks;
  agent.update_tasks(updated_tasks);

  // O drone deve ter tido sua tarefa purgada e passado para inativo/standby
  EXPECT_FALSE(agent.is_active());
  EXPECT_TRUE(agent.get_bundle().empty());
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
