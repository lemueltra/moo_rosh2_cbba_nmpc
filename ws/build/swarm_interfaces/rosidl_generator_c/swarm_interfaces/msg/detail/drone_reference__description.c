// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/DroneReference.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/drone_reference__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__DroneReference__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x85, 0xd9, 0xe7, 0x71, 0xd6, 0x22, 0x10,
      0x89, 0x6a, 0x3d, 0x31, 0x59, 0xf8, 0x07, 0xce,
      0x15, 0xa1, 0x9a, 0xef, 0x31, 0x02, 0x13, 0x93,
      0xee, 0x3f, 0xf7, 0x95, 0x72, 0xb4, 0x69, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_interfaces__msg__DroneReference__TYPE_NAME[] = "swarm_interfaces/msg/DroneReference";

// Define type names, field names, and default values
static char swarm_interfaces__msg__DroneReference__FIELD_NAME__drone_id[] = "drone_id";
static char swarm_interfaces__msg__DroneReference__FIELD_NAME__x[] = "x";
static char swarm_interfaces__msg__DroneReference__FIELD_NAME__y[] = "y";
static char swarm_interfaces__msg__DroneReference__FIELD_NAME__yaw[] = "yaw";
static char swarm_interfaces__msg__DroneReference__FIELD_NAME__max_speed[] = "max_speed";
static char swarm_interfaces__msg__DroneReference__FIELD_NAME__z[] = "z";
static char swarm_interfaces__msg__DroneReference__FIELD_NAME__ugv_id[] = "ugv_id";
static char swarm_interfaces__msg__DroneReference__FIELD_NAME__frame_relative[] = "frame_relative";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__DroneReference__FIELDS[] = {
  {
    {swarm_interfaces__msg__DroneReference__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneReference__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneReference__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneReference__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneReference__FIELD_NAME__max_speed, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneReference__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneReference__FIELD_NAME__ugv_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneReference__FIELD_NAME__frame_relative, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_interfaces__msg__DroneReference__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__DroneReference__TYPE_NAME, 35, 35},
      {swarm_interfaces__msg__DroneReference__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Reference pose and maximum speed for a single active drone\n"
  "uint32 drone_id\n"
  "float64 x\n"
  "float64 y\n"
  "float64 yaw\n"
  "float64 max_speed  # 0 = use default speed limit\n"
  "float64 z                # absolute altitude [m], valid range [2.5, 35.0]\n"
  "uint32 ugv_id            # reference UGV for the relative pose\n"
  "bool frame_relative      # true = (x, y, yaw) are relative to the UGV body frame";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__DroneReference__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__DroneReference__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 376, 376},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__DroneReference__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__DroneReference__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
