// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x21, 0x9e, 0x53, 0x87, 0x14, 0xd6, 0xa7,
      0x48, 0x45, 0xd9, 0x8b, 0xec, 0x54, 0x54, 0x5b,
      0x4d, 0x5a, 0x60, 0xc5, 0xf8, 0xf8, 0x36, 0x53,
      0x1b, 0x9e, 0x91, 0x03, 0xb6, 0x32, 0x6b, 0x33,
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

static char swarm_interfaces__msg__ExpectedMetricsNoGt__TYPE_NAME[] = "swarm_interfaces/msg/ExpectedMetricsNoGt";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__header[] = "header";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__model_based[] = "model_based";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__params_hash[] = "params_hash";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__window_sec[] = "window_sec";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__warming_up[] = "warming_up";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__n_frames_in_window[] = "n_frames_in_window";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__classes[] = "classes";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__lateral_deviation_mean[] = "lateral_deviation_mean";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__lateral_deviation_min[] = "lateral_deviation_min";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__lateral_deviation_max[] = "lateral_deviation_max";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__yaw_deviation_mean[] = "yaw_deviation_mean";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__yaw_rate_mean[] = "yaw_rate_mean";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__predicted_path_deviation_mean[] = "predicted_path_deviation_mean";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__total_objects_count[] = "total_objects_count";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__average_objects_count[] = "average_objects_count";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__interval_average_objects_count[] = "interval_average_objects_count";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__all_object_count[] = "all_object_count";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__object_count_per_class[] = "object_count_per_class";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__max_distance_per_class[] = "max_distance_per_class";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__meas_to_tracked_latency_ms[] = "meas_to_tracked_latency_ms";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__prediction_latency_ms[] = "prediction_latency_ms";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__total_latency_ms[] = "total_latency_ms";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__cross_confirm_rate[] = "cross_confirm_rate";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__unconfirmed_rate[] = "unconfirmed_rate";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__missed_by_other_rate[] = "missed_by_other_rate";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__class_disagree_rate[] = "class_disagree_rate";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__range_discrepancy_mean[] = "range_discrepancy_mean";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__range_discrepancy_p95[] = "range_discrepancy_p95";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__size_cv_per_class[] = "size_cv_per_class";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__position_jitter_per_class[] = "position_jitter_per_class";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__heading_inversion_rate_per_class[] = "heading_inversion_rate_per_class";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__track_fragments_per_class[] = "track_fragments_per_class";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__track_purity_per_class[] = "track_purity_per_class";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__track_length_per_class[] = "track_length_per_class";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__ece_proxy[] = "ece_proxy";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__unconfirmed_high_conf_rate[] = "unconfirmed_high_conf_rate";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__critical_inconsistency_per_s[] = "critical_inconsistency_per_s";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__sync_offset_ms[] = "sync_offset_ms";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__sensor_health[] = "sensor_health";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__flight_regime_altitude_m[] = "flight_regime_altitude_m";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__flight_regime_speed_mps[] = "flight_regime_speed_mps";
static char swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__flight_regime_climb_rate_mps[] = "flight_regime_climb_rate_mps";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__ExpectedMetricsNoGt__FIELDS[] = {
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__model_based, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__params_hash, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__window_sec, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__warming_up, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__n_frames_in_window, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__classes, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__lateral_deviation_mean, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__lateral_deviation_min, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__lateral_deviation_max, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__yaw_deviation_mean, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__yaw_rate_mean, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__predicted_path_deviation_mean, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__total_objects_count, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__average_objects_count, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__interval_average_objects_count, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__all_object_count, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__object_count_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__max_distance_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__meas_to_tracked_latency_ms, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__prediction_latency_ms, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__total_latency_ms, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__cross_confirm_rate, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__unconfirmed_rate, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__missed_by_other_rate, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__class_disagree_rate, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__range_discrepancy_mean, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__range_discrepancy_p95, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__size_cv_per_class, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__position_jitter_per_class, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__heading_inversion_rate_per_class, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__track_fragments_per_class, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__track_purity_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__track_length_per_class, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__ece_proxy, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__unconfirmed_high_conf_rate, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__critical_inconsistency_per_s, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__sync_offset_ms, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__sensor_health, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__flight_regime_altitude_m, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__flight_regime_speed_mps, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELD_NAME__flight_regime_climb_rate_mps, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_interfaces__msg__ExpectedMetricsNoGt__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__ExpectedMetricsNoGt__TYPE_NAME, 40, 40},
      {swarm_interfaces__msg__ExpectedMetricsNoGt__FIELDS, 42, 42},
    },
    {swarm_interfaces__msg__ExpectedMetricsNoGt__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Structured expected perception metrics WITHOUT Ground Truth (N01-N20)\n"
  "std_msgs/Header header\n"
  "bool model_based\n"
  "string params_hash\n"
  "float64 window_sec\n"
  "bool warming_up\n"
  "uint32 n_frames_in_window\n"
  "\n"
  "# N01 - Lateral Deviation (moving average)\n"
  "string[] classes\n"
  "float64[] lateral_deviation_mean\n"
  "float64[] lateral_deviation_min\n"
  "float64[] lateral_deviation_max\n"
  "\n"
  "# N02 - Yaw Deviation\n"
  "float64[] yaw_deviation_mean\n"
  "\n"
  "# N03 - Yaw Rate (stationary)\n"
  "float64[] yaw_rate_mean\n"
  "\n"
  "# N04 - Predicted Path Deviation\n"
  "float64[] predicted_path_deviation_mean\n"
  "\n"
  "# N05, N06, N07, N08 - Object Counts\n"
  "float64[] total_objects_count\n"
  "float64[] average_objects_count\n"
  "float64[] interval_average_objects_count\n"
  "float64 all_object_count\n"
  "float64[] object_count_per_class\n"
  "\n"
  "# N09 - Expected Maximum Detection Range\n"
  "float64[] max_distance_per_class\n"
  "\n"
  "# N10 - Latencies\n"
  "float64 meas_to_tracked_latency_ms\n"
  "float64 prediction_latency_ms\n"
  "float64 total_latency_ms\n"
  "\n"
  "# N11 - Cross-Sensor Confirmation\n"
  "float64 cross_confirm_rate\n"
  "float64 unconfirmed_rate\n"
  "float64 missed_by_other_rate\n"
  "\n"
  "# N12 - Class Disagreement\n"
  "float64 class_disagree_rate\n"
  "\n"
  "# N13 - Range Discrepancy\n"
  "float64 range_discrepancy_mean\n"
  "float64 range_discrepancy_p95\n"
  "\n"
  "# N14 - Stationary Jitter & Size CV\n"
  "float64[] size_cv_per_class\n"
  "float64[] position_jitter_per_class\n"
  "\n"
  "# N15 - Heading Inversion Rate\n"
  "float64[] heading_inversion_rate_per_class\n"
  "\n"
  "# N16 - Track Quality\n"
  "float64[] track_fragments_per_class\n"
  "float64[] track_purity_per_class\n"
  "float64[] track_length_per_class\n"
  "\n"
  "# N17 - ECE Proxy\n"
  "float64 ece_proxy\n"
  "float64 unconfirmed_high_conf_rate\n"
  "\n"
  "# N18 - Critical Inconsistency\n"
  "float64 critical_inconsistency_per_s\n"
  "\n"
  "# N19 - Sensor Health & Sync\n"
  "float64 sync_offset_ms\n"
  "bool[] sensor_health\n"
  "\n"
  "# N20 - Flight Regime Covariates\n"
  "float64 flight_regime_altitude_m\n"
  "float64 flight_regime_speed_mps\n"
  "float64 flight_regime_climb_rate_mps";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__ExpectedMetricsNoGt__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__ExpectedMetricsNoGt__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1826, 1826},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__ExpectedMetricsNoGt__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
