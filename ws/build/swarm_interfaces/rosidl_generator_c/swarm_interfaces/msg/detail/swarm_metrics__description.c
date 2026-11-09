// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/swarm_metrics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__SwarmMetrics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x7d, 0x6d, 0xb5, 0xaa, 0xb6, 0x99, 0x60,
      0x4c, 0x73, 0x0a, 0xd9, 0x0c, 0xb6, 0xb9, 0x64,
      0x9b, 0xa0, 0xc8, 0x25, 0x91, 0x0d, 0x00, 0x49,
      0x60, 0xe7, 0xa4, 0xdb, 0x7b, 0x55, 0x6a, 0x49,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "swarm_interfaces/msg/detail/uav_metric__functions.h"

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
static const rosidl_type_hash_t swarm_interfaces__msg__UavMetric__EXPECTED_HASH = {1, {
    0x7c, 0xc4, 0xf8, 0x7c, 0xe7, 0x84, 0x80, 0x4f,
    0x52, 0xcc, 0x2f, 0x3c, 0xea, 0xad, 0xb4, 0x8a,
    0x3b, 0x49, 0x5f, 0xc5, 0xc5, 0xb2, 0xa2, 0x05,
    0xdd, 0x8b, 0xd7, 0xa8, 0x94, 0x06, 0x98, 0x5a,
  }};
#endif

static char swarm_interfaces__msg__SwarmMetrics__TYPE_NAME[] = "swarm_interfaces/msg/SwarmMetrics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char swarm_interfaces__msg__UavMetric__TYPE_NAME[] = "swarm_interfaces/msg/UavMetric";

// Define type names, field names, and default values
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__header[] = "header";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__active_count[] = "active_count";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__active_ids[] = "active_ids";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__detections_mean_60s[] = "detections_mean_60s";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__latency_mean_60s[] = "latency_mean_60s";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__latency_max_60s[] = "latency_max_60s";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__samples_in_window[] = "samples_in_window";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__window_capacity[] = "window_capacity";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__coverage_ratio[] = "coverage_ratio";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__ugv_weighted_coverage[] = "ugv_weighted_coverage";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__redundancy_score[] = "redundancy_score";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__planner_cycle_us[] = "planner_cycle_us";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__planner_deadline_misses[] = "planner_deadline_misses";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__clamped_references[] = "clamped_references";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__clock_hz[] = "clock_hz";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__sim_time_s[] = "sim_time_s";
static char swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__uavs[] = "uavs";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__SwarmMetrics__FIELDS[] = {
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__active_count, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__active_ids, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__detections_mean_60s, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__latency_mean_60s, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__latency_max_60s, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__samples_in_window, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__window_capacity, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__coverage_ratio, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__ugv_weighted_coverage, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__redundancy_score, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__planner_cycle_us, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__planner_deadline_misses, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__clamped_references, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__clock_hz, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__sim_time_s, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__SwarmMetrics__FIELD_NAME__uavs, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {swarm_interfaces__msg__UavMetric__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_interfaces__msg__SwarmMetrics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_interfaces__msg__SwarmMetrics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__SwarmMetrics__TYPE_NAME, 33, 33},
      {swarm_interfaces__msg__SwarmMetrics__FIELDS, 17, 17},
    },
    {swarm_interfaces__msg__SwarmMetrics__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&swarm_interfaces__msg__UavMetric__EXPECTED_HASH, swarm_interfaces__msg__UavMetric__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = swarm_interfaces__msg__UavMetric__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Snapshot of every metric the optimizer uses: aggregate block + one row per UAV slot.\n"
  "# Published by swarm_visualizer's metrics panel (5 Hz) and rendered by RViz2.\n"
  "# Sources are listed in docs/PLANO_PAINEL_METRICAS_RVIZ.md \\xc2\\xa71.2.\n"
  "std_msgs/Header header\n"
  "\n"
  "# --- objective 3 -----------------------------------------------------------------\n"
  "uint32 active_count            # len(active_ids): exact, never averaged\n"
  "uint32[] active_ids\n"
  "\n"
  "# --- objectives 1 and 2, 60 s sliding window (/metrics/optimizer_feedback) --------\n"
  "float64 detections_mean_60s\n"
  "float64 latency_mean_60s\n"
  "float64 latency_max_60s\n"
  "uint32 samples_in_window\n"
  "uint32 window_capacity         # 300 = 60 s x 5 Hz\n"
  "\n"
  "# --- ROI coverage (/coverage/metrics[0..2]) --------------------------------------\n"
  "float64 coverage_ratio\n"
  "float64 ugv_weighted_coverage\n"
  "float64 redundancy_score\n"
  "\n"
  "# --- health ----------------------------------------------------------------------\n"
  "float64 planner_cycle_us\n"
  "uint32 planner_deadline_misses\n"
  "uint32 clamped_references\n"
  "float64 clock_hz               # measured /clock rate\n"
  "float64 sim_time_s\n"
  "\n"
  "# --- per UAV (one entry per slot, active or not) ---------------------------------\n"
  "UavMetric[] uavs";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__SwarmMetrics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__SwarmMetrics__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1174, 1174},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__SwarmMetrics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__SwarmMetrics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[3] = *swarm_interfaces__msg__UavMetric__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
