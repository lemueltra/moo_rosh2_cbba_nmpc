// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/UavDetectionCount.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/uav_detection_count__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__UavDetectionCount__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x5e, 0xaf, 0x23, 0xc1, 0xb5, 0x61, 0xa1,
      0x59, 0x23, 0x4b, 0x47, 0x6f, 0x53, 0xda, 0x60,
      0xb6, 0x6f, 0x89, 0x90, 0x72, 0xed, 0xab, 0xa9,
      0xe8, 0xc9, 0x51, 0x34, 0xcf, 0xda, 0xd4, 0xcc,
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

static char swarm_interfaces__msg__UavDetectionCount__TYPE_NAME[] = "swarm_interfaces/msg/UavDetectionCount";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char swarm_interfaces__msg__UavDetectionCount__FIELD_NAME__header[] = "header";
static char swarm_interfaces__msg__UavDetectionCount__FIELD_NAME__drone_id[] = "drone_id";
static char swarm_interfaces__msg__UavDetectionCount__FIELD_NAME__detections_now[] = "detections_now";
static char swarm_interfaces__msg__UavDetectionCount__FIELD_NAME__sensor_streams[] = "sensor_streams";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__UavDetectionCount__FIELDS[] = {
  {
    {swarm_interfaces__msg__UavDetectionCount__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavDetectionCount__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavDetectionCount__FIELD_NAME__detections_now, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavDetectionCount__FIELD_NAME__sensor_streams, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_interfaces__msg__UavDetectionCount__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
swarm_interfaces__msg__UavDetectionCount__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__UavDetectionCount__TYPE_NAME, 38, 38},
      {swarm_interfaces__msg__UavDetectionCount__FIELDS, 4, 4},
    },
    {swarm_interfaces__msg__UavDetectionCount__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# How many distinct targets ONE UAV is detecting right now (release 3.2.0).\n"
  "#\n"
  "# Computed in C++ by swarm_visualizer's marker publisher from the per-sensor streams\n"
  "# (`/sensors/<id>/detections`, grouped by `parent_actor_id`). It exists so the Python\n"
  "# metrics panel does not have to subscribe to ten 50 Hz streams itself: doing that\n"
  "# cost 68 % of a core in deserialisation alone (measured; see MEDICOES M7e).\n"
  "std_msgs/Header header\n"
  "uint32 drone_id\n"
  "uint32 detections_now     # distinct non-occluded actors over the UAV's own sensors\n"
  "uint32 sensor_streams     # how many sensor streams reported within the timeout";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__UavDetectionCount__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__UavDetectionCount__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 612, 612},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__UavDetectionCount__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__UavDetectionCount__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
