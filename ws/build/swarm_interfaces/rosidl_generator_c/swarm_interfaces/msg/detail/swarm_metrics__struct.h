// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/swarm_metrics.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__STRUCT_H_

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
// Member 'active_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'uavs'
#include "swarm_interfaces/msg/detail/uav_metric__struct.h"

/// Struct defined in msg/SwarmMetrics in the package swarm_interfaces.
/**
  * Snapshot of every metric the optimizer uses: aggregate block + one row per UAV slot.
  * Published by swarm_visualizer's metrics panel (5 Hz) and rendered by RViz2.
  * Sources are listed in docs/PLANO_PAINEL_METRICAS_RVIZ.md §1.2.
 */
typedef struct swarm_interfaces__msg__SwarmMetrics
{
  std_msgs__msg__Header header;
  /// --- objective 3 -----------------------------------------------------------------
  /// len(active_ids): exact, never averaged
  uint32_t active_count;
  rosidl_runtime_c__uint32__Sequence active_ids;
  /// --- objectives 1 and 2, 60 s sliding window (/metrics/optimizer_feedback) --------
  double detections_mean_60s;
  double latency_mean_60s;
  double latency_max_60s;
  uint32_t samples_in_window;
  /// 300 = 60 s x 5 Hz
  uint32_t window_capacity;
  /// --- ROI coverage (/coverage/metrics) --------------------------------------
  double coverage_ratio;
  double ugv_weighted_coverage;
  double redundancy_score;
  /// --- health ----------------------------------------------------------------------
  double planner_cycle_us;
  uint32_t planner_deadline_misses;
  uint32_t clamped_references;
  /// measured /clock rate
  double clock_hz;
  double sim_time_s;
  /// --- per UAV (one entry per slot, active or not) ---------------------------------
  swarm_interfaces__msg__UavMetric__Sequence uavs;
} swarm_interfaces__msg__SwarmMetrics;

// Struct for a sequence of swarm_interfaces__msg__SwarmMetrics.
typedef struct swarm_interfaces__msg__SwarmMetrics__Sequence
{
  swarm_interfaces__msg__SwarmMetrics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__SwarmMetrics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__STRUCT_H_
