// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/drone_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__DroneStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x8f, 0x81, 0xd0, 0xd6, 0x9e, 0xa0, 0xe3,
      0x6a, 0x17, 0x6d, 0x87, 0xa3, 0xed, 0x44, 0xac,
      0xb4, 0xfd, 0x86, 0x58, 0x41, 0xc7, 0xd6, 0x11,
      0xa4, 0x44, 0x72, 0xd5, 0x14, 0x69, 0x11, 0x7a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_interfaces__msg__DroneStatus__TYPE_NAME[] = "swarm_interfaces/msg/DroneStatus";

// Define type names, field names, and default values
static char swarm_interfaces__msg__DroneStatus__FIELD_NAME__drone_id[] = "drone_id";
static char swarm_interfaces__msg__DroneStatus__FIELD_NAME__mode[] = "mode";
static char swarm_interfaces__msg__DroneStatus__FIELD_NAME__position_error[] = "position_error";
static char swarm_interfaces__msg__DroneStatus__FIELD_NAME__yaw_error[] = "yaw_error";
static char swarm_interfaces__msg__DroneStatus__FIELD_NAME__eta[] = "eta";
static char swarm_interfaces__msg__DroneStatus__FIELD_NAME__replan_count[] = "replan_count";
static char swarm_interfaces__msg__DroneStatus__FIELD_NAME__compute_time_us[] = "compute_time_us";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__DroneStatus__FIELDS[] = {
  {
    {swarm_interfaces__msg__DroneStatus__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneStatus__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneStatus__FIELD_NAME__position_error, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneStatus__FIELD_NAME__yaw_error, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneStatus__FIELD_NAME__eta, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneStatus__FIELD_NAME__replan_count, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__DroneStatus__FIELD_NAME__compute_time_us, 15, 15},
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
swarm_interfaces__msg__DroneStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__DroneStatus__TYPE_NAME, 32, 32},
      {swarm_interfaces__msg__DroneStatus__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Status and diagnostics of a single drone in the planner\n"
  "uint32 drone_id\n"
  "uint8 mode\n"
  "float64 position_error\n"
  "float64 yaw_error\n"
  "float64 eta\n"
  "uint32 replan_count\n"
  "float64 compute_time_us\n"
  "\n"
  "# Operational Modes\n"
  "uint8 MODE_INACTIVE=0\n"
  "uint8 MODE_HOLD=1\n"
  "uint8 MODE_PLANNING=2\n"
  "uint8 MODE_TRACKING=3\n"
  "uint8 MODE_REACHED=4\n"
  "uint8 MODE_REFERENCE_STALE=5\n"
  "uint8 MODE_REFERENCE_INVALID=6\n"
  "uint8 MODE_PLAN_FAILED=7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__DroneStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__DroneStatus__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 393, 393},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__DroneStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__DroneStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
