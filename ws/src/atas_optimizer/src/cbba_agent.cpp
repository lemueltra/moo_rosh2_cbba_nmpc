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

#include "atas_optimizer/cbba_agent.hpp"
#include <limits>
#include <cmath>

namespace atas_optimizer
{

CbbaAgent::CbbaAgent(uint32_t agent_id, uint32_t max_bundle_size)
: agent_id_(agent_id), max_bundle_size_(max_bundle_size) {}

void CbbaAgent::set_position(double x, double y, double z)
{
  pos_x_ = x;
  pos_y_ = y;
  pos_z_ = z;
}

void CbbaAgent::set_velocity(double vx, double vy, double vz)
{
  vel_x_ = vx;
  vel_y_ = vy;
  vel_z_ = vz;
}

void CbbaAgent::get_velocity(double & vx, double & vy, double & vz) const
{
  vx = vel_x_;
  vy = vel_y_;
  vz = vel_z_;
}

bool CbbaAgent::is_task_confirmed(uint32_t task_id) const
{
  return std::find(confirmed_tasks_.begin(), confirmed_tasks_.end(), task_id) !=
         confirmed_tasks_.end();
}

void CbbaAgent::set_hysteresis(double hysteresis)
{
  hysteresis_ = std::max(0.0, hysteresis);
}

void CbbaAgent::set_max_bundle_size(uint32_t size)
{
  max_bundle_size_ = std::max(1u, size);
}

void CbbaAgent::set_lambda_dist(double lambda_dist)
{
  lambda_dist_ = std::max(0.0, lambda_dist);
}

void CbbaAgent::set_rf_contention_penalty(double penalty)
{
  rf_contention_penalty_ = std::max(0.0, penalty);
}

void CbbaAgent::update_tasks(const std::vector<TaskInfo> & tasks)
{
  tasks_ = tasks;
  if (y_.size() != tasks_.size()) {
    y_.assign(tasks_.size(), 0.0);
    z_.assign(tasks_.size(), -1);
  }

  // Correção C3: Purga do feixe qualquer tarefa que não esteja mais na lista de tarefas ativas
  auto it = std::remove_if(bundle_.begin(), bundle_.end(), [this](uint32_t task_id) {
        for (const auto & t : tasks_) {
          if (t.id == task_id) {
            return false;
          }
        }
        return true;
  });
  bundle_.erase(it, bundle_.end());

  auto it_conf = std::remove_if(
    confirmed_tasks_.begin(), confirmed_tasks_.end(), [this](uint32_t task_id) {
      for (const auto & t : tasks_) {
        if (t.id == task_id) {
          return false;
        }
      }
      return true;
    });
  confirmed_tasks_.erase(it_conf, confirmed_tasks_.end());
}

double CbbaAgent::compute_bid_score(const TaskInfo & task, double latency_ms) const
{
  return compute_bid_score(0, task, latency_ms, pos_x_, pos_y_, pos_z_);
}

double CbbaAgent::compute_bid_score(
  size_t task_idx,
  const TaskInfo & task,
  double latency_ms,
  double from_x,
  double from_y,
  double from_z) const
{
  // Distância 3D da origem do segmento até a tarefa alvo
  double dist = std::sqrt(std::pow(from_x - task.x, 2) +
                          std::pow(from_y - task.y, 2) +
                          std::pow(from_z - task.z, 2));

  // Score multiobjetivo: Recompensa perceptual com decaimento exponencial
  double w_latency = 0.5;

  // Penalidade de Contenção RF (D5): penaliza conglomeração no mesmo UGV
  // degradando a latência efetiva de comunicação do enlace
  double effective_latency = latency_ms;
  if (task_idx < z_.size() && z_[task_idx] >= 0 &&
    z_[task_idx] != static_cast<int32_t>(agent_id_))
  {
    effective_latency *= rf_contention_penalty_;
  }

  double perceptual_reward = task.base_value * task.priority * std::exp(-lambda_dist_ * dist);
  double latency_penalty = w_latency * effective_latency;

  double score = perceptual_reward - latency_penalty;
  return std::max(0.01, score);
}

void CbbaAgent::build_bundle(
  const std::map<std::pair<uint32_t, uint32_t>, double> & latency_map)
{
  std::map<uint32_t, double> task_latencies;
  for (const auto & t : tasks_) {
    auto it = latency_map.find({agent_id_, t.id});
    if (it != latency_map.end()) {
      task_latencies[t.id] = it->second;
    }
  }
  build_bundle(task_latencies);
}

void CbbaAgent::build_bundle(const std::map<uint32_t, double> & latency_estimates)
{
  if (tasks_.empty()) {return;}

  while (bundle_.size() < max_bundle_size_) {
    double best_bid = 0.0;
    int32_t best_task_idx = -1;

    // Determinar ponto de partida para o cálculo marginal de rota (M2 Multi-Bundle)
    double from_x = pos_x_;
    double from_y = pos_y_;
    double from_z = pos_z_;

    if (!bundle_.empty()) {
      // Ponto de partida é a última tarefa já acumulada no feixe
      uint32_t last_task_id = bundle_.back();
      for (const auto & t : tasks_) {
        if (t.id == last_task_id) {
          from_x = t.x;
          from_y = t.y;
          from_z = t.z;
          break;
        }
      }
    }

    for (size_t j = 0; j < tasks_.size(); ++j) {
      // Se a tarefa já está no nosso feixe, ignore
      if (std::find(bundle_.begin(), bundle_.end(), tasks_[j].id) != bundle_.end()) {
        continue;
      }

      double lat = 10.0;  // Padrão 10 ms se não houver telemetria
      auto it = latency_estimates.find(tasks_[j].id);
      if (it != latency_estimates.end()) {
        lat = it->second;
      }

      double bid = compute_bid_score(j, tasks_[j], lat, from_x, from_y, from_z);

      // Verificação de superação do lance atual conhecido com Histerese (D4)
      // Se a tarefa já pertence a outro agente, o lance precisa superar por (1 + hysteresis)
      double threshold = y_[j];
      if (z_[j] >= 0 && z_[j] != static_cast<int32_t>(agent_id_)) {
        threshold = y_[j] * (1.0 + hysteresis_);
      }

      if (bid > threshold) {
        if (bid > best_bid) {
          best_bid = bid;
          best_task_idx = static_cast<int32_t>(j);
        }
      }
    }

    if (best_task_idx >= 0) {
      bundle_.push_back(tasks_[best_task_idx].id);
      y_[best_task_idx] = best_bid;
      z_[best_task_idx] = static_cast<int32_t>(agent_id_);
    } else {
      break;  // Não há tarefas válidas com lance superior
    }
  }
}

void CbbaAgent::process_consensus(
  const std::vector<ConsensusPayload> & incoming_messages,
  double current_time)
{
  s_[agent_id_] = current_time;

  for (const auto & msg : incoming_messages) {
    if (msg.sender_id == agent_id_) {continue;}
    resolve_conflict(msg.sender_id, msg, current_time);
  }

  // Ao término do consenso, as tarefas retidas no feixe tornam-se confirmadas
  confirmed_tasks_ = bundle_;
}

void CbbaAgent::resolve_conflict(
  uint32_t sender_id, const ConsensusPayload & msg,
  double current_time)
{
  const double EPS = 1e-6;
  size_t n_tasks = std::min(tasks_.size(), msg.y.size());

  for (size_t j = 0; j < n_tasks; ++j) {
    int32_t z_k = msg.z[j];     // Vencedor segundo o remetente k
    double y_k = msg.y[j];      // Lance segundo o remetente k
    int32_t z_i = z_[j];        // Meu vencedor conhecido
    double y_i = y_[j];         // Meu lance conhecido

    // Regra canônica de consenso CBBA (Choi et al., 2009 / CBAAL) com Histerese Anti-Chattering
    if (z_k == static_cast<int32_t>(sender_id)) {
      if (z_i == static_cast<int32_t>(agent_id_)) {
        // Remetente k tenta tomar uma tarefa que eu atualmente detenho.
        // Histerese D4: aplica-se quando a tarefa já estava confirmada em ciclo anterior
        bool is_confirmed = is_task_confirmed(tasks_[j].id);
        double req_factor = is_confirmed ? (1.0 + hysteresis_) : 1.0;
        bool can_tie_break = (!is_confirmed) && (std::abs(y_k - y_i) <= EPS) &&
          (static_cast<int32_t>(sender_id) < z_i);

        if (y_k > y_i * req_factor + EPS) {
          z_[j] = z_k;
          y_[j] = y_k;
        } else if (can_tie_break) {
          // Desempate canônico por menor ID apenas no leilão inicial não confirmado
          z_[j] = z_k;
          y_[j] = y_k;
        }
      } else if (z_i == static_cast<int32_t>(sender_id)) {
        z_[j] = z_k;
        y_[j] = y_k;
      } else if (z_i >= 0) {
        double s_k_zi = 0.0;
        auto it = msg.s.find(static_cast<uint32_t>(z_i));
        if (it != msg.s.end()) {s_k_zi = it->second;}

        double s_i_zi = s_[static_cast<uint32_t>(z_i)];
        if (s_k_zi > s_i_zi) {
          z_[j] = z_k;
          y_[j] = y_k;
        } else if (y_k > y_i + EPS) {
          z_[j] = z_k;
          y_[j] = y_k;
        }
      } else {  // z_i == -1
        z_[j] = z_k;
        y_[j] = y_k;
      }
    } else if (z_k == static_cast<int32_t>(agent_id_)) {
      if (z_i == static_cast<int32_t>(agent_id_)) {
        // Confirmação do meu próprio lance
      } else {
        z_[j] = -1;
        y_[j] = 0.0;
      }
    } else if (z_k >= 0) {
      double s_k_zk = 0.0;
      auto it = msg.s.find(static_cast<uint32_t>(z_k));
      if (it != msg.s.end()) {s_k_zk = it->second;}

      double s_i_zk = s_[static_cast<uint32_t>(z_k)];
      if (s_k_zk > s_i_zk && y_k > y_i + EPS) {
        z_[j] = z_k;
        y_[j] = y_k;
      }
    }
  }

  // Regra canônica de liberação em cascata CBBA (Choi et al., 2009):
  // Se perdemos a tarefa b_m, todas as tarefas posteriores b_k (k >= m) do bundle são liberadas
  int drop_idx = -1;
  for (size_t i = 0; i < bundle_.size(); ++i) {
    uint32_t t_id = bundle_[i];
    for (size_t j = 0; j < tasks_.size(); ++j) {
      if (tasks_[j].id == t_id && z_[j] != static_cast<int32_t>(agent_id_)) {
        drop_idx = static_cast<int>(i);
        break;
      }
    }
    if (drop_idx >= 0) {break;}
  }

  if (drop_idx >= 0) {
    for (size_t i = static_cast<size_t>(drop_idx); i < bundle_.size(); ++i) {
      uint32_t t_id = bundle_[i];
      for (size_t j = 0; j < tasks_.size(); ++j) {
        if (tasks_[j].id == t_id && z_[j] == static_cast<int32_t>(agent_id_)) {
          z_[j] = -1;
          y_[j] = 0.0;
        }
      }
    }
    bundle_.erase(bundle_.begin() + drop_idx, bundle_.end());
  }

  // Registrar timestamp do remetente
  s_[sender_id] = current_time;
}

ConsensusPayload CbbaAgent::send_message() const
{
  ConsensusPayload payload;
  payload.sender_id = agent_id_;
  payload.y = y_;
  payload.z = z_;
  payload.s = s_;
  return payload;
}

}  // namespace atas_optimizer
