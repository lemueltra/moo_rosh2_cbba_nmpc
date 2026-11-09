// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/DroneState.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/drone_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__DroneState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0xcd, 0x52, 0xb4, 0x09, 0xb8, 0xa5, 0x68,
      0xef, 0x7f, 0xf1, 0x5f, 0x97, 0xbf, 0x44, 0x27,
      0xca, 0x00, 0x35, 0x04, 0xb4, 0x33, 0xcb, 0xde,
      0x1b, 0x84, 0x8e, 0xba, 0xbf, 0x66, 0x54, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_interfaces__msg__DroneState__TYPE_NAME[] = "swarm_interfaces/msg/DroneState";

// Define type names, field names, and default values
static char swarm_interfaces__msg__DroneState__FIELD_NAME__drone_id[] = "drone_id";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__active[] = "active";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__x[] = "x";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__y[] = "y";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__yaw[] = "yaw";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__vx[] = "vx";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__vy[] = "vy";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__yaw_rate[] = "yaw_rate";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__z[] = "z";
static char swarm_interfaces__msg__DroneState__FIELD_NAME__vz[] = "vz";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__DroneState__FIELDS[] = {
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneState__FIELD_NAME__vz, 2, 2},
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
swarm_interfaces__msg__DroneState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__DroneState__TYPE_NAME, 31, 31},
      {swarm_interfaces__msg__DroneState__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Kinematic state of a single drone in world frame 'map' (SI units)\n"
  "uint32 drone_id\n"
  "bool active\n"
  "float64 x\n"
  "float64 y\n"
  "float64 yaw\n"
  "float64 vx\n"
  "float64 vy\n"
  "float64 yaw_rate\n"
  "float64 z\n"
  "float64 vz";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__DroneState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__DroneState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 188, 188},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__DroneState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__DroneState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
