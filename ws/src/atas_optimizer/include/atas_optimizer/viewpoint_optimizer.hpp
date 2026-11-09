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

#ifndef ATAS_OPTIMIZER__VIEWPOINT_OPTIMIZER_HPP_
#define ATAS_OPTIMIZER__VIEWPOINT_OPTIMIZER_HPP_

#include <vector>
#include <array>
#include <map>
#include <cstdint>
#include <cmath>

namespace atas_optimizer
{

/**
 * @struct Vector3d
 * @brief Vetor tridimensional simples e sem dependências externas obrigatórias no header.
 */
struct Vector3d
{
  double x{0.0};
  double y{0.0};
  double z{0.0};

  Vector3d() = default;
  Vector3d(double x_in, double y_in, double z_in)
  : x(x_in), y(y_in), z(z_in) {}
};

/**
 * @struct ViewpointReference
 * @brief Pose de referência otimizada para um UAV ativo, relativa ao UGV atribuído.
 */
struct ViewpointReference
{
  uint32_t drone_id{0};
  uint32_t ugv_id{0};
  double rel_x{0.0};        ///< dx relativo ao body frame do UGV [m]
  double rel_y{0.0};        ///< dy relativo ao body frame do UGV [m]
  double altitude_z{15.0};  ///< Altitude absoluta z [m], intervalo [2.5, 35.0]
  double rel_yaw{0.0};      ///< yaw relativo ao UGV [rad]
  double pitch{0.0};        ///< pitch acoplado da câmera solidária [rad] (D2)
  double max_speed{0.0};    ///< 0.0 = limite padrão do simulador
  bool frame_relative{true};
};

/**
 * @struct OptimizationTarget
 * @brief Alvo ou obstáculo a ser considerado no cálculo de visibilidade/FoV.
 */
struct OptimizationTarget
{
  double x{0.0};
  double y{0.0};
  double z{0.0};
  double weight{1.0};
  bool is_occluder{false};
};

/**
 * @struct LidarConfig
 * @brief Parâmetros do sensor LiDAR 3D montado no UAV (Setor Esférico Anisotrópico).
 */
struct LidarConfig
{
  double range_m{100.0};                     ///< Alcance máximo de detecção [m]
  double horizontal_fov_rad{2.09439510239};  ///< Abertura horizontal de 120° [rad]
  double lower_fov_rad{-0.5235987756};      ///< Limite inferior de elevação (-30°) [rad]
  double upper_fov_rad{0.1745329252};       ///< Limite superior de elevação (+10°) [rad]
};

/**
 * @struct CameraConfig
 * @brief Parâmetros da Câmera RGB montada no UAV (Frustum Perspectivo com Pitch Solidário).
 */
struct CameraConfig
{
  double range_m{40.0};                      ///< Alcance máximo de detecção [m]
  double horizontal_fov_rad{1.57079632679};  ///< Abertura horizontal de 90° [rad]
  double vertical_fov_rad{1.02477749};       ///< Abertura vertical de ~58.72° (16:9) [rad]
  uint32_t width_px{1280};                   ///< Resolução horizontal
  uint32_t height_px{720};                   ///< Resolução vertical
};

/**
 * @struct BuildingOccluder
 * @brief Caixa delimitadora 3D de um edifício (Town10) para teste de oclusão LoS (F1).
 */
struct BuildingOccluder
{
  uint32_t id{0};
  double min_x{0.0};
  double max_x{0.0};
  double min_y{0.0};
  double max_y{0.0};
  double height{10.0};
};

/**
 * @class ViewpointOptimizer
 * @brief Otimizador contínuo não linear de viewpoints inspirado na arquitetura PolyMPC.
 * Resolve a pose ótima relativa para maximizar detecção de FoV e minimizar oclusão e latência.
 */
class ViewpointOptimizer {
public:
  ViewpointOptimizer();

  /// Configura limites e parâmetros de segurança
  void set_altitude_bounds(double z_min, double z_max);
  void set_nominal_altitude(double z_nominal);
  void set_max_radius(double max_radius);
  void set_inter_drone_safety_distance(double d_safe);
  void set_pareto_weights(double w_det, double w_lat, double w_safe);
  void set_slew_rate_v_max(double v_max);
  void set_solver_deadline(double deadline_sec);

  /// Carrega os 30 prédios poligonais canônicos de Town10 (M1)
  void load_town10_buildings();
  void set_buildings(const std::vector<BuildingOccluder> & buildings);
  const std::vector<BuildingOccluder> & get_buildings() const {return buildings_;}

  /// Configuração e modelos dos sensores LiDAR e Câmera (Fase 1 v2.0.0)
  void set_lidar_config(const LidarConfig & config) {lidar_config_ = config;}
  const LidarConfig & get_lidar_config() const {return lidar_config_;}
  void set_camera_config(const CameraConfig & config) {camera_config_ = config;}
  const CameraConfig & get_camera_config() const {return camera_config_;}

  /// Verifica se há Linha de Visada (LoS) livre entre dois pontos 3D
  bool check_los(const Vector3d & p1, const Vector3d & p2) const;

  /// Testes de pertinência geométrica 3D aos volumes de sensores (Fase 1 v2.0.0)
  bool is_in_lidar_fov(
    const Vector3d & uav_pos, double uav_yaw, const Vector3d & target_pos) const;

  bool is_in_camera_fov(
    const Vector3d & uav_pos, double uav_yaw, double uav_pitch, const Vector3d & target_pos) const;

  bool is_in_any_sensor_fov(
    const Vector3d & uav_pos, double uav_yaw, double uav_pitch, const Vector3d & target_pos) const;

  /// Verifica se o UGV alvo está dentro do FoV dual (LiDAR ou Câmera)
  /// e desobstruído por prédios 3D (Fase 2 v2.0.0)
  bool is_target_ugv_in_fov(
    const ViewpointReference & ref,
    const Vector3d & ugv_pos,
    double ugv_yaw = 0.0) const;

  double get_z_min() const {return z_min_;}
  double get_z_max() const {return z_max_;}
  double get_z_nominal() const {return z_nominal_;}
  double get_max_radius() const {return max_radius_;}
  double get_safety_distance() const {return d_safe_;}
  double get_slew_rate_v_max() const {return slew_rate_v_max_;}
  double get_solver_deadline() const {return solver_deadline_sec_;}
  double get_last_solve_time_ms() const {return last_solve_time_ms_;}
  bool was_fallback_triggered() const {return last_fallback_triggered_;}

  /// Gera a formação orbital analítica determinística de fallback (R3)
  ViewpointReference compute_orbital_fallback(uint32_t drone_id, uint32_t ugv_id) const;

  /// Aplica limitador de taxa de variação (Slew-Rate Limiter) preservando continuidade C0 (M3)
  ViewpointReference apply_slew_rate_limiter(
    uint32_t drone_id, const ViewpointReference & target_ref, double dt);

  void set_previous_reference(uint32_t drone_id, const ViewpointReference & ref);
  void reset_previous_references();

  /// Valida e higieniza a pose de referência contra NaNs, Infs e violações de limites (R2)
  bool sanitize_reference(ViewpointReference & ref) const;

  /// Avaliação de custo do cone de visão (FoV dual com barreira primordial e oclusão LoS)
  double evaluate_fov_cost(
    double dx, double dy, double z, double yaw,
    const Vector3d & ugv_pos, double ugv_yaw,
    const std::vector<OptimizationTarget> & targets) const;

  /// Executa a otimização de pose relativa para um drone atribuído a um UGV
  ViewpointReference solve_viewpoint(
    uint32_t drone_id,
    uint32_t ugv_id,
    const Vector3d & ugv_pos,
    double ugv_yaw,
    const std::vector<OptimizationTarget> & targets,
    const std::vector<ViewpointReference> & other_active_drones,
    double dt = 0.2);

private:
  double z_min_{2.5};
  double z_max_{35.0};
  double z_nominal_{15.0};
  double max_radius_{30.0};
  double d_safe_{5.0};
  double slew_rate_v_max_{5.0};
  double solver_deadline_sec_{0.040};
  double w_det_{1.0};
  double w_lat_{0.5};
  double w_safe_{10.0};

  mutable double last_solve_time_ms_{0.0};
  mutable bool last_fallback_triggered_{false};

  std::vector<BuildingOccluder> buildings_;
  std::map<uint32_t, ViewpointReference> prev_references_;

  LidarConfig lidar_config_;
  CameraConfig camera_config_;
};

}  // namespace atas_optimizer

#endif  // ATAS_OPTIMIZER__VIEWPOINT_OPTIMIZER_HPP_
