// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/UavLinkLatency.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/uav_link_latency__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__UavLinkLatency__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0xf2, 0x31, 0x7a, 0x19, 0x74, 0xab, 0x76,
      0xec, 0x94, 0x0e, 0x48, 0xcf, 0xc9, 0xf7, 0x80,
      0x0f, 0xf9, 0x49, 0x9b, 0x37, 0x92, 0xee, 0x90,
      0xf4, 0xab, 0x47, 0x8e, 0x39, 0x04, 0xd0, 0x2e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_interfaces__msg__UavLinkLatency__TYPE_NAME[] = "swarm_interfaces/msg/UavLinkLatency";

// Define type names, field names, and default values
static char swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__drone_id[] = "drone_id";
static char swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__ugv_id[] = "ugv_id";
static char swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__latency_ms[] = "latency_ms";
static char swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__distance_m[] = "distance_m";
static char swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__los[] = "los";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__UavLinkLatency__FIELDS[] = {
  {
    {swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__ugv_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__latency_ms, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__distance_m, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__UavLinkLatency__FIELD_NAME__los, 3, 3},
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
swarm_interfaces__msg__UavLinkLatency__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__UavLinkLatency__TYPE_NAME, 35, 35},
      {swarm_interfaces__msg__UavLinkLatency__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Communication latency between one active UAV and its nearest UGV\n"
  "uint32 drone_id\n"
  "uint32 ugv_id       # nearest UGV (from /comm/nearest_ugv)\n"
  "float64 latency_ms\n"
  "float64 distance_m\n"
  "bool los            # true = line of sight (no building in between)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__UavLinkLatency__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__UavLinkLatency__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 248, 248},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__UavLinkLatency__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__UavLinkLatency__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
