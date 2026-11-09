// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/UgvState.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/ugv_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__UgvState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0xc1, 0x10, 0x61, 0xda, 0x5f, 0x82, 0xc8,
      0xfe, 0x9c, 0xd4, 0xa7, 0x57, 0xcd, 0x4f, 0x11,
      0xc8, 0x5a, 0x53, 0x28, 0x0b, 0x27, 0x63, 0x2e,
      0x02, 0xaa, 0xc6, 0x9d, 0x9e, 0x37, 0x93, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_interfaces__msg__UgvState__TYPE_NAME[] = "swarm_interfaces/msg/UgvState";

// Define type names, field names, and default values
static char swarm_interfaces__msg__UgvState__FIELD_NAME__ugv_id[] = "ugv_id";
static char swarm_interfaces__msg__UgvState__FIELD_NAME__active[] = "active";
static char swarm_interfaces__msg__UgvState__FIELD_NAME__x[] = "x";
static char swarm_interfaces__msg__UgvState__FIELD_NAME__y[] = "y";
static char swarm_interfaces__msg__UgvState__FIELD_NAME__yaw[] = "yaw";
static char swarm_interfaces__msg__UgvState__FIELD_NAME__v[] = "v";
static char swarm_interfaces__msg__UgvState__FIELD_NAME__route_length_m[] = "route_length_m";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__UgvState__FIELDS[] = {
  {
    {swarm_interfaces__msg__UgvState__FIELD_NAME__ugv_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvState__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvState__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvState__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvState__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvState__FIELD_NAME__v, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UgvState__FIELD_NAME__route_length_m, 14, 14},
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
swarm_interfaces__msg__UgvState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__UgvState__TYPE_NAME, 29, 29},
      {swarm_interfaces__msg__UgvState__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# State of one UGV of the pooled fleet (frame 'map', SI units)\n"
  "uint32 ugv_id\n"
  "bool active\n"
  "float64 x\n"
  "float64 y\n"
  "float64 yaw\n"
  "float64 v          # longitudinal speed [m/s]\n"
  "float64 route_length_m";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__UgvState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__UgvState__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 190, 190},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__UgvState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__UgvState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
