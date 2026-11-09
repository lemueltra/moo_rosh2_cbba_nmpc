// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/expected_metrics_gt__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__ExpectedMetricsGt__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x5d, 0x88, 0x34, 0xa1, 0x2e, 0x35, 0x26,
      0x6d, 0x2a, 0x16, 0x3d, 0xea, 0x74, 0x5c, 0x17,
      0x1a, 0x2c, 0x35, 0x46, 0xdd, 0x04, 0x68, 0x10,
      0x32, 0xd2, 0xdf, 0x71, 0x58, 0x41, 0xfb, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char swarm_interfaces__msg__ExpectedMetricsGt__TYPE_NAME[] = "swarm_interfaces/msg/ExpectedMetricsGt";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__header[] = "header";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__model_based[] = "model_based";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__params_hash[] = "params_hash";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__window_sec[] = "window_sec";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__warming_up[] = "warming_up";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__n_frames_in_window[] = "n_frames_in_window";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__map[] = "map";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__maph[] = "maph";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__classes[] = "classes";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ap_per_class[] = "ap_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__aph_per_class[] = "aph_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__f1_max_per_class[] = "f1_max_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__optimal_conf_per_class[] = "optimal_conf_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ratio_tp_per_class[] = "ratio_tp_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ratio_fp_per_class[] = "ratio_fp_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ratio_fn_per_class[] = "ratio_fn_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_dist_mean_per_class[] = "err_dist_mean_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_dist_rms_per_class[] = "err_dist_rms_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_yaw_mean_per_class[] = "err_yaw_mean_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_yaw_std_per_class[] = "err_yaw_std_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_vel_mean_per_class[] = "err_vel_mean_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__motp_per_class[] = "motp_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__mota_per_class[] = "mota_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__id_switch_per_class[] = "id_switch_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pred_ade[] = "pred_ade";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pred_fde[] = "pred_fde";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pred_miss_rate[] = "pred_miss_rate";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__corner_mean_per_class[] = "corner_mean_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__corner_p95_per_class[] = "corner_p95_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__flip_rate_per_class[] = "flip_rate_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__mflip_rate[] = "mflip_rate";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__nsurf_mean_per_class[] = "nsurf_mean_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ece[] = "ece";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ece_macro[] = "ece_macro";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__confident_error_rate[] = "confident_error_rate";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__confident_errors_per_frame[] = "confident_errors_per_frame";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__confusion_pairs[] = "confusion_pairs";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__confusion_values[] = "confusion_values";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__critical_fp[] = "critical_fp";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__critical_fn[] = "critical_fn";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__cw_map[] = "cw_map";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__cw_map_per_class[] = "cw_map_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__fn_span_mean_per_class[] = "fn_span_mean_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pass_rate_num_tp[] = "pass_rate_num_tp";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pass_rate_num_gt_tp[] = "pass_rate_num_gt_tp";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pass_rate_metrics_score[] = "pass_rate_metrics_score";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_ate_per_class[] = "err_ate_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_aoe_per_class[] = "err_aoe_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_ase_per_class[] = "err_ase_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_ave_per_class[] = "err_ave_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__n_gt_total[] = "n_gt_total";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_tp_total[] = "expected_tp_total";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_fp_total[] = "expected_fp_total";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_fn_total[] = "expected_fn_total";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__n_gt_per_class[] = "n_gt_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_tp_per_class[] = "expected_tp_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_fp_per_class[] = "expected_fp_per_class";
static char swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_fn_per_class[] = "expected_fn_per_class";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__ExpectedMetricsGt__FIELDS[] = {
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__model_based, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__params_hash, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__window_sec, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__warming_up, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__n_frames_in_window, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__map, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__maph, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__classes, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ap_per_class, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__aph_per_class, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__f1_max_per_class, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__optimal_conf_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ratio_tp_per_class, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ratio_fp_per_class, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ratio_fn_per_class, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_dist_mean_per_class, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_dist_rms_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_yaw_mean_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_yaw_std_per_class, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_vel_mean_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__motp_per_class, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__mota_per_class, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__id_switch_per_class, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pred_ade, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pred_fde, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pred_miss_rate, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__corner_mean_per_class, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__corner_p95_per_class, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__flip_rate_per_class, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__mflip_rate, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__nsurf_mean_per_class, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ece, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__ece_macro, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__confident_error_rate, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__confident_errors_per_frame, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__confusion_pairs, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__confusion_values, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__critical_fp, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__critical_fn, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__cw_map, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__cw_map_per_class, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__fn_span_mean_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pass_rate_num_tp, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pass_rate_num_gt_tp, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__pass_rate_metrics_score, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_ate_per_class, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_aoe_per_class, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_ase_per_class, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__err_ave_per_class, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__n_gt_total, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_tp_total, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_fp_total, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_fn_total, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__n_gt_per_class, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_tp_per_class, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_fp_per_class, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsGt__FIELD_NAME__expected_fn_per_class, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_interfaces__msg__ExpectedMetricsGt__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_interfaces__msg__ExpectedMetricsGt__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__ExpectedMetricsGt__TYPE_NAME, 38, 38},
      {swarm_interfaces__msg__ExpectedMetricsGt__FIELDS, 58, 58},
    },
    {swarm_interfaces__msg__ExpectedMetricsGt__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Structured expected perception metrics WITH Ground Truth (G01-G20)\n"
  "std_msgs/Header header\n"
  "bool model_based\n"
  "string params_hash\n"
  "float64 window_sec\n"
  "bool warming_up\n"
  "uint32 n_frames_in_window\n"
  "\n"
  "# G01 / G02 / G03 - AP, APH, F1\n"
  "float64 map\n"
  "float64 maph\n"
  "string[] classes\n"
  "float64[] ap_per_class\n"
  "float64[] aph_per_class\n"
  "float64[] f1_max_per_class\n"
  "float64[] optimal_conf_per_class\n"
  "\n"
  "# G04 - Analyzer Ratios\n"
  "float64[] ratio_tp_per_class\n"
  "float64[] ratio_fp_per_class\n"
  "float64[] ratio_fn_per_class\n"
  "\n"
  "# G05 - Error Statistics (GT - Est)\n"
  "float64[] err_dist_mean_per_class\n"
  "float64[] err_dist_rms_per_class\n"
  "float64[] err_yaw_mean_per_class\n"
  "float64[] err_yaw_std_per_class\n"
  "float64[] err_vel_mean_per_class\n"
  "\n"
  "# G06 - MOTP\n"
  "float64[] motp_per_class\n"
  "\n"
  "# G07 - CLEAR MOTA & ID Switches\n"
  "float64[] mota_per_class\n"
  "float64[] id_switch_per_class\n"
  "\n"
  "# G08 - Trajectory Prediction\n"
  "float64 pred_ade\n"
  "float64 pred_fde\n"
  "float64 pred_miss_rate\n"
  "\n"
  "# G09 - BEV Corner Dispersion\n"
  "float64[] corner_mean_per_class\n"
  "float64[] corner_p95_per_class\n"
  "\n"
  "# G10 - Heading Flip Rate\n"
  "float64[] flip_rate_per_class\n"
  "float64 mflip_rate\n"
  "\n"
  "# G11 - Nearest Surface Footprint Distance\n"
  "float64[] nsurf_mean_per_class\n"
  "\n"
  "# G12 - Expected Calibration Error\n"
  "float64 ece\n"
  "float64 ece_macro\n"
  "\n"
  "# G13 - Confident Error Rate\n"
  "float64 confident_error_rate\n"
  "float64 confident_errors_per_frame\n"
  "\n"
  "# G14 - Class Confusion Matrix\n"
  "string[] confusion_pairs\n"
  "float64[] confusion_values\n"
  "\n"
  "# G15 & G16 - Critical Reachability & Collision Weighted AP\n"
  "float64 critical_fp\n"
  "float64 critical_fn\n"
  "float64 cw_map\n"
  "float64[] cw_map_per_class\n"
  "\n"
  "# G17 - Consecutive FN Duration Span\n"
  "float64[] fn_span_mean_per_class\n"
  "\n"
  "# G18 - Frame Pass Rates\n"
  "float64 pass_rate_num_tp\n"
  "float64 pass_rate_num_gt_tp\n"
  "float64 pass_rate_metrics_score\n"
  "\n"
  "# G19 - nuScenes Errors\n"
  "float64[] err_ate_per_class\n"
  "float64[] err_aoe_per_class\n"
  "float64[] err_ase_per_class\n"
  "float64[] err_ave_per_class\n"
  "\n"
  "# G20 - Stratified Base Counts\n"
  "uint32 n_gt_total\n"
  "float64 expected_tp_total\n"
  "float64 expected_fp_total\n"
  "float64 expected_fn_total\n"
  "uint32[] n_gt_per_class\n"
  "float64[] expected_tp_per_class\n"
  "float64[] expected_fp_per_class\n"
  "float64[] expected_fn_per_class";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__ExpectedMetricsGt__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__ExpectedMetricsGt__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2100, 2100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__ExpectedMetricsGt__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__ExpectedMetricsGt__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
