// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UavMetric.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_metric.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/UavMetric in the package swarm_interfaces.
/**
  * Every metric the multi-objective optimizer uses, for ONE UAV slot (release 3.2.0).
  *
  * One row of the RViz2 metrics dashboard. Field for field this is what the optimizer
  * reads or produces; see docs/PLANO_PAINEL_METRICAS_RVIZ.md §1.1 for the source of
  * each field and docs/CONTRATO_OTIMIZADOR.md for the contract it belongs to.
 */
typedef struct swarm_interfaces__msg__UavMetric
{
  std_msgs__msg__Header header;
  uint32_t drone_id;
  /// exactly /drones/state.active (objective 3: minimize)
  bool active;
  /// DroneStatus mode: 0 inactive .. 7 plan failed
  uint8_t mode;
  /// Pose in the map frame (the frame every reference is resolved into).
  double x;
  double y;
  double yaw;
  /// altitude: optimization variable, [2.5, 35.0] m
  double z;
  /// Kinematics. speed_3d = |(vx, vy, vz)|, limited to 5.0 m/s.
  double vx;
  double vy;
  double vz;
  double speed_3d;
  double yaw_rate;
  /// Link to the nearest UGV (objective 2). Valid only while the UAV is active AND the
  /// communication layer has a link for it; `has_link` is the validity flag.
  bool has_link;
  uint32_t nearest_ugv_id;
  double ugv_distance_m;
  double latency_ms;
  /// false = non-line-of-sight (NLOS penalty)
  bool los;
  /// Objective 1: how many distinct targets this UAV's own sensors are detecting now
  /// (union over its LiDAR and camera streams), plus how many sensor streams feed it.
  uint32_t detections_now;
  uint32_t sensor_streams;
  /// Execution quality reported by the planner.
  double position_error;
  double yaw_error;
  /// Reference currently applied to this UAV.
  bool has_reference;
  /// true = expressed in the nearest UGV's body frame
  bool reference_relative;
  /// as received from the optimizer
  double reference_z_requested;
  /// after the [2.5, 35.0] saturation
  double reference_z_clamped;
  /// true when the requested z left the operating range
  bool reference_z_clamped_flag;
  /// time since the last reference arrived
  double reference_age_s;
} swarm_interfaces__msg__UavMetric;

// Struct for a sequence of swarm_interfaces__msg__UavMetric.
typedef struct swarm_interfaces__msg__UavMetric__Sequence
{
  swarm_interfaces__msg__UavMetric * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UavMetric__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__STRUCT_H_
