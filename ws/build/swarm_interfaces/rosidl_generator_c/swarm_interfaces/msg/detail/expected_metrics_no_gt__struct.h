// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/expected_metrics_no_gt.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__STRUCT_H_

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
// Member 'params_hash'
// Member 'classes'
#include "rosidl_runtime_c/string.h"
// Member 'lateral_deviation_mean'
// Member 'lateral_deviation_min'
// Member 'lateral_deviation_max'
// Member 'yaw_deviation_mean'
// Member 'yaw_rate_mean'
// Member 'predicted_path_deviation_mean'
// Member 'total_objects_count'
// Member 'average_objects_count'
// Member 'interval_average_objects_count'
// Member 'object_count_per_class'
// Member 'max_distance_per_class'
// Member 'size_cv_per_class'
// Member 'position_jitter_per_class'
// Member 'heading_inversion_rate_per_class'
// Member 'track_fragments_per_class'
// Member 'track_purity_per_class'
// Member 'track_length_per_class'
// Member 'sensor_health'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ExpectedMetricsNoGt in the package swarm_interfaces.
/**
  * Structured expected perception metrics WITHOUT Ground Truth (N01-N20)
 */
typedef struct swarm_interfaces__msg__ExpectedMetricsNoGt
{
  std_msgs__msg__Header header;
  bool model_based;
  rosidl_runtime_c__String params_hash;
  double window_sec;
  bool warming_up;
  uint32_t n_frames_in_window;
  /// N01 - Lateral Deviation (moving average)
  rosidl_runtime_c__String__Sequence classes;
  rosidl_runtime_c__double__Sequence lateral_deviation_mean;
  rosidl_runtime_c__double__Sequence lateral_deviation_min;
  rosidl_runtime_c__double__Sequence lateral_deviation_max;
  /// N02 - Yaw Deviation
  rosidl_runtime_c__double__Sequence yaw_deviation_mean;
  /// N03 - Yaw Rate (stationary)
  rosidl_runtime_c__double__Sequence yaw_rate_mean;
  /// N04 - Predicted Path Deviation
  rosidl_runtime_c__double__Sequence predicted_path_deviation_mean;
  /// N05, N06, N07, N08 - Object Counts
  rosidl_runtime_c__double__Sequence total_objects_count;
  rosidl_runtime_c__double__Sequence average_objects_count;
  rosidl_runtime_c__double__Sequence interval_average_objects_count;
  double all_object_count;
  rosidl_runtime_c__double__Sequence object_count_per_class;
  /// N09 - Expected Maximum Detection Range
  rosidl_runtime_c__double__Sequence max_distance_per_class;
  /// N10 - Latencies
  double meas_to_tracked_latency_ms;
  double prediction_latency_ms;
  double total_latency_ms;
  /// N11 - Cross-Sensor Confirmation
  double cross_confirm_rate;
  double unconfirmed_rate;
  double missed_by_other_rate;
  /// N12 - Class Disagreement
  double class_disagree_rate;
  /// N13 - Range Discrepancy
  double range_discrepancy_mean;
  double range_discrepancy_p95;
  /// N14 - Stationary Jitter & Size CV
  rosidl_runtime_c__double__Sequence size_cv_per_class;
  rosidl_runtime_c__double__Sequence position_jitter_per_class;
  /// N15 - Heading Inversion Rate
  rosidl_runtime_c__double__Sequence heading_inversion_rate_per_class;
  /// N16 - Track Quality
  rosidl_runtime_c__double__Sequence track_fragments_per_class;
  rosidl_runtime_c__double__Sequence track_purity_per_class;
  rosidl_runtime_c__double__Sequence track_length_per_class;
  /// N17 - ECE Proxy
  double ece_proxy;
  double unconfirmed_high_conf_rate;
  /// N18 - Critical Inconsistency
  double critical_inconsistency_per_s;
  /// N19 - Sensor Health & Sync
  double sync_offset_ms;
  rosidl_runtime_c__boolean__Sequence sensor_health;
  /// N20 - Flight Regime Covariates
  double flight_regime_altitude_m;
  double flight_regime_speed_mps;
  double flight_regime_climb_rate_mps;
} swarm_interfaces__msg__ExpectedMetricsNoGt;

// Struct for a sequence of swarm_interfaces__msg__ExpectedMetricsNoGt.
typedef struct swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence
{
  swarm_interfaces__msg__ExpectedMetricsNoGt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__STRUCT_H_
