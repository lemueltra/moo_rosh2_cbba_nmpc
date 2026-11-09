// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/MetricEntry.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/metric_entry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__MetricEntry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x3d, 0xb6, 0x51, 0xf4, 0xe5, 0x72, 0xe3,
      0xab, 0x28, 0x0f, 0x0d, 0xd3, 0x44, 0x93, 0x4d,
      0x5f, 0xca, 0x08, 0x49, 0xc3, 0xb4, 0x29, 0x8c,
      0xe0, 0x87, 0x6d, 0xde, 0x52, 0xa1, 0x79, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_interfaces__msg__MetricEntry__TYPE_NAME[] = "swarm_interfaces/msg/MetricEntry";

// Define type names, field names, and default values
static char swarm_interfaces__msg__MetricEntry__FIELD_NAME__name[] = "name";
static char swarm_interfaces__msg__MetricEntry__FIELD_NAME__unit[] = "unit";
static char swarm_interfaces__msg__MetricEntry__FIELD_NAME__value[] = "value";
static char swarm_interfaces__msg__MetricEntry__FIELD_NAME__valid[] = "valid";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__MetricEntry__FIELDS[] = {
  {
    {swarm_interfaces__msg__MetricEntry__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntry__FIELD_NAME__unit, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntry__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntry__FIELD_NAME__valid, 5, 5},
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
swarm_interfaces__msg__MetricEntry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__MetricEntry__TYPE_NAME, 32, 32},
      {swarm_interfaces__msg__MetricEntry__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Single generic metric entry\n"
  "string name\n"
  "string unit\n"
  "float64 value\n"
  "bool valid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__MetricEntry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__MetricEntry__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__MetricEntry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__MetricEntry__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
