// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/UgvCommand.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/ugv_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__UgvCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x1a, 0xeb, 0xcb, 0xb5, 0xc1, 0x0f, 0x74,
      0xb6, 0x98, 0xae, 0x76, 0x32, 0xa3, 0xda, 0xc8,
      0x0d, 0x0e, 0x4c, 0xf9, 0xe7, 0x30, 0x96, 0x93,
      0x3f, 0xf2, 0x03, 0xa2, 0xb2, 0x4f, 0xb2, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_interfaces__msg__UgvCommand__TYPE_NAME[] = "swarm_interfaces/msg/UgvCommand";

// Define type names, field names, and default values
static char swarm_interfaces__msg__UgvCommand__FIELD_NAME__ugv_id[] = "ugv_id";
static char swarm_interfaces__msg__UgvCommand__FIELD_NAME__throttle[] = "throttle";
static char swarm_interfaces__msg__UgvCommand__FIELD_NAME__steer[] = "steer";
static char swarm_interfaces__msg__UgvCommand__FIELD_NAME__brake[] = "brake";
static char swarm_interfaces__msg__UgvCommand__FIELD_NAME__hand_brake[] = "hand_brake";
static char swarm_interfaces__msg__UgvCommand__FIELD_NAME__reverse[] = "reverse";
static char swarm_interfaces__msg__UgvCommand__FIELD_NAME__active_cmd[] = "active_cmd";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__UgvCommand__FIELDS[] = {
  {
    {swarm_interfaces__msg__UgvCommand__FIELD_NAME__ugv_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvCommand__FIELD_NAME__throttle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvCommand__FIELD_NAME__steer, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvCommand__FIELD_NAME__brake, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvCommand__FIELD_NAME__hand_brake, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvCommand__FIELD_NAME__reverse, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvCommand__FIELD_NAME__active_cmd, 10, 10},
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
swarm_interfaces__msg__UgvCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__UgvCommand__TYPE_NAME, 31, 31},
      {swarm_interfaces__msg__UgvCommand__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Carla-style vehicle control for one UGV\n"
  "uint32 ugv_id\n"
  "float64 throttle    # [0.0, 1.0]\n"
  "float64 steer       # [-1.0, 1.0]\n"
  "float64 brake       # [0.0, 1.0]\n"
  "bool hand_brake\n"
  "bool reverse\n"
  "bool active_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__UgvCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__UgvCommand__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 201, 201},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__UgvCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__UgvCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
