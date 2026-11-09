// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/DroneStateArray.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/drone_state_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__DroneStateArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x13, 0xc4, 0x1b, 0xc5, 0xb7, 0xda, 0xad,
      0xf4, 0x2d, 0x4d, 0xcc, 0xd0, 0x6d, 0x94, 0xe8,
      0xf0, 0x70, 0xa6, 0xd0, 0x64, 0x4a, 0x14, 0x55,
      0xea, 0xcd, 0xc3, 0x68, 0x6c, 0xf1, 0x01, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "swarm_interfaces/msg/detail/drone_state__functions.h"

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
static const rosidl_type_hash_t swarm_interfaces__msg__DroneState__EXPECTED_HASH = {1, {
    0x6b, 0xcd, 0x52, 0xb4, 0x09, 0xb8, 0xa5, 0x68,
    0xef, 0x7f, 0xf1, 0x5f, 0x97, 0xbf, 0x44, 0x27,
    0xca, 0x00, 0x35, 0x04, 0xb4, 0x33, 0xcb, 0xde,
    0x1b, 0x84, 0x8e, 0xba, 0xbf, 0x66, 0x54, 0xc7,
  }};
#endif

static char swarm_interfaces__msg__DroneStateArray__TYPE_NAME[] = "swarm_interfaces/msg/DroneStateArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char swarm_interfaces__msg__DroneState__TYPE_NAME[] = "swarm_interfaces/msg/DroneState";

// Define type names, field names, and default values
static char swarm_interfaces__msg__DroneStateArray__FIELD_NAME__header[] = "header";
static char swarm_interfaces__msg__DroneStateArray__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__DroneStateArray__FIELDS[] = {
  {
    {swarm_interfaces__msg__DroneStateArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneStateArray__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {swarm_interfaces__msg__DroneState__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_interfaces__msg__DroneStateArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_interfaces__msg__DroneStateArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__DroneStateArray__TYPE_NAME, 36, 36},
      {swarm_interfaces__msg__DroneStateArray__FIELDS, 2, 2},
    },
    {swarm_interfaces__msg__DroneStateArray__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&swarm_interfaces__msg__DroneState__EXPECTED_HASH, swarm_interfaces__msg__DroneState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = swarm_interfaces__msg__DroneState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Full kinematic state of all N_max drones\n"
  "std_msgs/Header header\n"
  "DroneState[] states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__DroneStateArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__DroneStateArray__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 86, 86},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__DroneStateArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__DroneStateArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[3] = *swarm_interfaces__msg__DroneState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
