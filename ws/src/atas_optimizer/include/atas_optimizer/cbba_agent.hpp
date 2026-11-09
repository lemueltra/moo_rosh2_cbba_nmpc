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

#ifndef ATAS_OPTIMIZER__CBBA_AGENT_HPP_
#define ATAS_OPTIMIZER__CBBA_AGENT_HPP_

#include <vector>
#include <map>
#include <string>
#include <utility>
#include <cstdint>
#include <cmath>
#include <algorithm>

namespace atas_optimizer
{

/**
 * @struct TaskInfo
 * @brief Representa uma tarefa ou alvo perceptual no CBBA (UGV ou cluster de interesse).
 */
struct TaskInfo
{
  uint32_t id{0};
  double x{0.0};
  double y{0.0};
  double z{0.0};
  double yaw{0.0};
  double priority{1.0};
  double base_value{100.0};
};

/**
 * @struct ConsensusPayload
 * @brief Mensagem de consenso trocada entre drones (espelho do send_message de CBAAL).
 */
struct ConsensusPayload
{
  uint32_t sender_id{0};
  std::vector<double> y;           ///< Maior lance conhecido para cada tarefa
  std::vector<int32_t> z;          ///< ID do agente vencedor para cada tarefa
  std::map<uint32_t, double> s;    ///< Marcas temporais de atualização
};

/**
 * @class CbbaAgent
 * @brief Agente individual do protocolo CBBA, adaptado da arquitetura CBAAL para C++.
 */
class CbbaAgent {
public:
  explicit CbbaAgent(uint32_t agent_id, uint32_t max_bundle_size = 1);

  void set_position(double x, double y, double z);
  void set_velocity(double vx, double vy, double vz);
  void get_velocity(double & vx, double & vy, double & vz) const;
  void update_tasks(const std::vector<TaskInfo> & tasks);
  void set_hysteresis(double hysteresis);
  void set_max_bundle_size(uint32_t size);
  void set_lambda_dist(double lambda_dist);
  void set_rf_contention_penalty(double penalty);

  double get_hysteresis() const {return hysteresis_;}
  uint32_t get_max_bundle_size() const {return max_bundle_size_;}
  double get_lambda_dist() const {return lambda_dist_;}
  double get_rf_contention_penalty() const {return rf_contention_penalty_;}

  /// Fase 1 do CBBA: Construção do feixe (bundle) e lances locais
  void build_bundle(const std::map<uint32_t, double> & latency_estimates);
  void build_bundle(const std::map<std::pair<uint32_t, uint32_t>, double> & latency_map);

  /// Fase 2 do CBBA: Resolução de conflitos de consenso com mensagens recebidas
  void process_consensus(
    const std::vector<ConsensusPayload> & incoming_messages,
    double current_time);

  /// Exporta o payload de consenso para publicação em tópicos ROS 2
  ConsensusPayload send_message() const;

  /// Retorna as tarefas ativas atribuídas ao agente
  const std::vector<uint32_t> & get_bundle() const {return bundle_;}
  bool is_active() const {return !bundle_.empty();}
  bool has_assigned_target() const {return !bundle_.empty();}
  uint32_t get_primary_target() const {return bundle_.empty() ? 0u : bundle_.front();}
  bool is_task_confirmed(uint32_t task_id) const;

  uint32_t get_id() const {return agent_id_;}

private:
  uint32_t agent_id_;
  uint32_t max_bundle_size_;
  double pos_x_{0.0};
  double pos_y_{0.0};
  double pos_z_{0.0};
  double vel_x_{0.0};
  double vel_y_{0.0};
  double vel_z_{0.0};
  double hysteresis_{0.15};
  double lambda_dist_{0.02};
  double rf_contention_penalty_{1.5};

  std::vector<TaskInfo> tasks_;
  std::vector<uint32_t> bundle_;            ///< Tarefas atribuídas a este drone (b)
  std::vector<uint32_t> confirmed_tasks_;  ///< Tarefas confirmadas após consenso
  std::vector<double> y_;                   ///< Maiores lances conhecidos
  std::vector<int32_t> z_;                  ///< Vencedores conhecidos (-1 se não atribuído)
  std::map<uint32_t, double> s_;            ///< Marcas de tempo locais

  double compute_bid_score(const TaskInfo & task, double latency_ms) const;
  double compute_bid_score(
    size_t task_idx,
    const TaskInfo & task,
    double latency_ms,
    double from_x,
    double from_y,
    double from_z) const;
  void resolve_conflict(uint32_t sender_id, const ConsensusPayload & msg, double current_time);
};

}  // namespace atas_optimizer

#endif  // ATAS_OPTIMIZER__CBBA_AGENT_HPP_
