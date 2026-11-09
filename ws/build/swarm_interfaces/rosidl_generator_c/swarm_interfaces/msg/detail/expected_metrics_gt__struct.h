// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/expected_metrics_gt.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__STRUCT_H_

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
// Member 'confusion_pairs'
#include "rosidl_runtime_c/string.h"
// Member 'ap_per_class'
// Member 'aph_per_class'
// Member 'f1_max_per_class'
// Member 'optimal_conf_per_class'
// Member 'ratio_tp_per_class'
// Member 'ratio_fp_per_class'
// Member 'ratio_fn_per_class'
// Member 'err_dist_mean_per_class'
// Member 'err_dist_rms_per_class'
// Member 'err_yaw_mean_per_class'
// Member 'err_yaw_std_per_class'
// Member 'err_vel_mean_per_class'
// Member 'motp_per_class'
// Member 'mota_per_class'
// Member 'id_switch_per_class'
// Member 'corner_mean_per_class'
// Member 'corner_p95_per_class'
// Member 'flip_rate_per_class'
// Member 'nsurf_mean_per_class'
// Member 'confusion_values'
// Member 'cw_map_per_class'
// Member 'fn_span_mean_per_class'
// Member 'err_ate_per_class'
// Member 'err_aoe_per_class'
// Member 'err_ase_per_class'
// Member 'err_ave_per_class'
// Member 'n_gt_per_class'
// Member 'expected_tp_per_class'
// Member 'expected_fp_per_class'
// Member 'expected_fn_per_class'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ExpectedMetricsGt in the package swarm_interfaces.
/**
  * Structured expected perception metrics WITH Ground Truth (G01-G20)
 */
typedef struct swarm_interfaces__msg__ExpectedMetricsGt
{
  std_msgs__msg__Header header;
  bool model_based;
  rosidl_runtime_c__String params_hash;
  double window_sec;
  bool warming_up;
  uint32_t n_frames_in_window;
  /// G01 / G02 / G03 - AP, APH, F1
  double map;
  double maph;
  rosidl_runtime_c__String__Sequence classes;
  rosidl_runtime_c__double__Sequence ap_per_class;
  rosidl_runtime_c__double__Sequence aph_per_class;
  rosidl_runtime_c__double__Sequence f1_max_per_class;
  rosidl_runtime_c__double__Sequence optimal_conf_per_class;
  /// G04 - Analyzer Ratios
  rosidl_runtime_c__double__Sequence ratio_tp_per_class;
  rosidl_runtime_c__double__Sequence ratio_fp_per_class;
  rosidl_runtime_c__double__Sequence ratio_fn_per_class;
  /// G05 - Error Statistics (GT - Est)
  rosidl_runtime_c__double__Sequence err_dist_mean_per_class;
  rosidl_runtime_c__double__Sequence err_dist_rms_per_class;
  rosidl_runtime_c__double__Sequence err_yaw_mean_per_class;
  rosidl_runtime_c__double__Sequence err_yaw_std_per_class;
  rosidl_runtime_c__double__Sequence err_vel_mean_per_class;
  /// G06 - MOTP
  rosidl_runtime_c__double__Sequence motp_per_class;
  /// G07 - CLEAR MOTA & ID Switches
  rosidl_runtime_c__double__Sequence mota_per_class;
  rosidl_runtime_c__double__Sequence id_switch_per_class;
  /// G08 - Trajectory Prediction
  double pred_ade;
  double pred_fde;
  double pred_miss_rate;
  /// G09 - BEV Corner Dispersion
  rosidl_runtime_c__double__Sequence corner_mean_per_class;
  rosidl_runtime_c__double__Sequence corner_p95_per_class;
  /// G10 - Heading Flip Rate
  rosidl_runtime_c__double__Sequence flip_rate_per_class;
  double mflip_rate;
  /// G11 - Nearest Surface Footprint Distance
  rosidl_runtime_c__double__Sequence nsurf_mean_per_class;
  /// G12 - Expected Calibration Error
  double ece;
  double ece_macro;
  /// G13 - Confident Error Rate
  double confident_error_rate;
  double confident_errors_per_frame;
  /// G14 - Class Confusion Matrix
  rosidl_runtime_c__String__Sequence confusion_pairs;
  rosidl_runtime_c__double__Sequence confusion_values;
  /// G15 & G16 - Critical Reachability & Collision Weighted AP
  double critical_fp;
  double critical_fn;
  double cw_map;
  rosidl_runtime_c__double__Sequence cw_map_per_class;
  /// G17 - Consecutive FN Duration Span
  rosidl_runtime_c__double__Sequence fn_span_mean_per_class;
  /// G18 - Frame Pass Rates
  double pass_rate_num_tp;
  double pass_rate_num_gt_tp;
  double pass_rate_metrics_score;
  /// G19 - nuScenes Errors
  rosidl_runtime_c__double__Sequence err_ate_per_class;
  rosidl_runtime_c__double__Sequence err_aoe_per_class;
  rosidl_runtime_c__double__Sequence err_ase_per_class;
  rosidl_runtime_c__double__Sequence err_ave_per_class;
  /// G20 - Stratified Base Counts
  uint32_t n_gt_total;
  double expected_tp_total;
  double expected_fp_total;
  double expected_fn_total;
  rosidl_runtime_c__uint32__Sequence n_gt_per_class;
  rosidl_runtime_c__double__Sequence expected_tp_per_class;
  rosidl_runtime_c__double__Sequence expected_fp_per_class;
  rosidl_runtime_c__double__Sequence expected_fn_per_class;
} swarm_interfaces__msg__ExpectedMetricsGt;

// Struct for a sequence of swarm_interfaces__msg__ExpectedMetricsGt.
typedef struct swarm_interfaces__msg__ExpectedMetricsGt__Sequence
{
  swarm_interfaces__msg__ExpectedMetricsGt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__ExpectedMetricsGt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__STRUCT_H_
