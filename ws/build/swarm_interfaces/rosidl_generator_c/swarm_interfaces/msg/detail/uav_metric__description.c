// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/UavMetric.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/uav_metric__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__UavMetric__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0xc4, 0xf8, 0x7c, 0xe7, 0x84, 0x80, 0x4f,
      0x52, 0xcc, 0x2f, 0x3c, 0xea, 0xad, 0xb4, 0x8a,
      0x3b, 0x49, 0x5f, 0xc5, 0xc5, 0xb2, 0xa2, 0x05,
      0xdd, 0x8b, 0xd7, 0xa8, 0x94, 0x06, 0x98, 0x5a,
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

static char swarm_interfaces__msg__UavMetric__TYPE_NAME[] = "swarm_interfaces/msg/UavMetric";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__header[] = "header";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__drone_id[] = "drone_id";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__active[] = "active";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__mode[] = "mode";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__x[] = "x";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__y[] = "y";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__yaw[] = "yaw";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__z[] = "z";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__vx[] = "vx";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__vy[] = "vy";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__vz[] = "vz";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__speed_3d[] = "speed_3d";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__yaw_rate[] = "yaw_rate";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__has_link[] = "has_link";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__nearest_ugv_id[] = "nearest_ugv_id";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__ugv_distance_m[] = "ugv_distance_m";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__latency_ms[] = "latency_ms";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__los[] = "los";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__detections_now[] = "detections_now";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__sensor_streams[] = "sensor_streams";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__position_error[] = "position_error";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__yaw_error[] = "yaw_error";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__has_reference[] = "has_reference";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_relative[] = "reference_relative";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_z_requested[] = "reference_z_requested";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_z_clamped[] = "reference_z_clamped";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_z_clamped_flag[] = "reference_z_clamped_flag";
static char swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_age_s[] = "reference_age_s";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__UavMetric__FIELDS[] = {
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__vz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__speed_3d, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__has_link, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__nearest_ugv_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__ugv_distance_m, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__latency_ms, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__los, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__detections_now, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__sensor_streams, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__position_error, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__yaw_error, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__has_reference, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_relative, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_z_requested, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_z_clamped, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_z_clamped_flag, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavMetric__FIELD_NAME__reference_age_s, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_interfaces__msg__UavMetric__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
swarm_interfaces__msg__UavMetric__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__UavMetric__TYPE_NAME, 30, 30},
      {swarm_interfaces__msg__UavMetric__FIELDS, 28, 28},
    },
    {swarm_interfaces__msg__UavMetric__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Every metric the multi-objective optimizer uses, for ONE UAV slot (release 3.2.0).\n"
  "#\n"
  "# One row of the RViz2 metrics dashboard. Field for field this is what the optimizer\n"
  "# reads or produces; see docs/PLANO_PAINEL_METRICAS_RVIZ.md \\xc2\\xa71.1 for the source of\n"
  "# each field and docs/CONTRATO_OTIMIZADOR.md for the contract it belongs to.\n"
  "std_msgs/Header header\n"
  "\n"
  "uint32 drone_id\n"
  "bool active                  # exactly /drones/state.active (objective 3: minimize)\n"
  "uint8 mode                   # DroneStatus mode: 0 inactive .. 7 plan failed\n"
  "\n"
  "# Pose in the map frame (the frame every reference is resolved into).\n"
  "float64 x\n"
  "float64 y\n"
  "float64 yaw\n"
  "float64 z                    # altitude: optimization variable, [2.5, 35.0] m\n"
  "\n"
  "# Kinematics. speed_3d = |(vx, vy, vz)|, limited to 5.0 m/s.\n"
  "float64 vx\n"
  "float64 vy\n"
  "float64 vz\n"
  "float64 speed_3d\n"
  "float64 yaw_rate\n"
  "\n"
  "# Link to the nearest UGV (objective 2). Valid only while the UAV is active AND the\n"
  "# communication layer has a link for it; `has_link` is the validity flag.\n"
  "bool has_link\n"
  "uint32 nearest_ugv_id\n"
  "float64 ugv_distance_m\n"
  "float64 latency_ms\n"
  "bool los                     # false = non-line-of-sight (NLOS penalty)\n"
  "\n"
  "# Objective 1: how many distinct targets this UAV's own sensors are detecting now\n"
  "# (union over its LiDAR and camera streams), plus how many sensor streams feed it.\n"
  "uint32 detections_now\n"
  "uint32 sensor_streams\n"
  "\n"
  "# Execution quality reported by the planner.\n"
  "float64 position_error\n"
  "float64 yaw_error\n"
  "\n"
  "# Reference currently applied to this UAV.\n"
  "bool has_reference\n"
  "bool reference_relative      # true = expressed in the nearest UGV's body frame\n"
  "float64 reference_z_requested # as received from the optimizer [m]\n"
  "float64 reference_z_clamped   # after the [2.5, 35.0] saturation [m]\n"
  "bool reference_z_clamped_flag # true when the requested z left the operating range\n"
  "float64 reference_age_s       # time since the last reference arrived [s]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__UavMetric__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__UavMetric__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1885, 1885},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__UavMetric__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__UavMetric__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
