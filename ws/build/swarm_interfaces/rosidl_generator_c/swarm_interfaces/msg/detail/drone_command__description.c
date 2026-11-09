// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/DroneCommand.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/drone_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__DroneCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x0c, 0xb5, 0xe8, 0x2b, 0x8b, 0xba, 0xe2,
      0xb1, 0xb6, 0x57, 0x2d, 0x9c, 0xe0, 0xf5, 0xcb,
      0x2f, 0x2f, 0x76, 0xc1, 0x9a, 0x3b, 0x8d, 0x02,
      0x49, 0xa9, 0x2f, 0x0b, 0xc5, 0x34, 0xbb, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_interfaces__msg__DroneCommand__TYPE_NAME[] = "swarm_interfaces/msg/DroneCommand";

// Define type names, field names, and default values
static char swarm_interfaces__msg__DroneCommand__FIELD_NAME__drone_id[] = "drone_id";
static char swarm_interfaces__msg__DroneCommand__FIELD_NAME__active[] = "active";
static char swarm_interfaces__msg__DroneCommand__FIELD_NAME__vx[] = "vx";
static char swarm_interfaces__msg__DroneCommand__FIELD_NAME__vy[] = "vy";
static char swarm_interfaces__msg__DroneCommand__FIELD_NAME__yaw_rate[] = "yaw_rate";
static char swarm_interfaces__msg__DroneCommand__FIELD_NAME__vz[] = "vz";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__DroneCommand__FIELDS[] = {
  {
    {swarm_interfaces__msg__DroneCommand__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneCommand__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneCommand__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneCommand__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneCommand__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneCommand__FIELD_NAME__vz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_interfaces__msg__DroneCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__DroneCommand__TYPE_NAME, 33, 33},
      {swarm_interfaces__msg__DroneCommand__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Actuation velocity command for a single drone in world frame 'map' (SI units)\n"
  "uint32 drone_id\n"
  "bool active\n"
  "float64 vx\n"
  "float64 vy\n"
  "float64 yaw_rate\n"
  "float64 vz";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__DroneCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__DroneCommand__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 158, 158},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__DroneCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__DroneCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
