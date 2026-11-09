// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_interfaces:msg/MetricEntryArray.idl
// generated code does not contain a copyright notice

#include "swarm_interfaces/msg/detail/metric_entry_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_interfaces
const rosidl_type_hash_t *
swarm_interfaces__msg__MetricEntryArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0xda, 0x90, 0x9a, 0x56, 0x2d, 0x2d, 0xff,
      0x2e, 0xae, 0x98, 0xb5, 0x84, 0x7d, 0x90, 0xe4,
      0xd6, 0x99, 0x90, 0x38, 0x1c, 0x77, 0x14, 0x5a,
      0x8d, 0x00, 0x67, 0x38, 0xff, 0x2b, 0x1f, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "swarm_interfaces/msg/detail/metric_entry__functions.h"
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
static const rosidl_type_hash_t swarm_interfaces__msg__MetricEntry__EXPECTED_HASH = {1, {
    0x15, 0x3d, 0xb6, 0x51, 0xf4, 0xe5, 0x72, 0xe3,
    0xab, 0x28, 0x0f, 0x0d, 0xd3, 0x44, 0x93, 0x4d,
    0x5f, 0xca, 0x08, 0x49, 0xc3, 0xb4, 0x29, 0x8c,
    0xe0, 0x87, 0x6d, 0xde, 0x52, 0xa1, 0x79, 0x56,
  }};
#endif

static char swarm_interfaces__msg__MetricEntryArray__TYPE_NAME[] = "swarm_interfaces/msg/MetricEntryArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char swarm_interfaces__msg__MetricEntry__TYPE_NAME[] = "swarm_interfaces/msg/MetricEntry";

// Define type names, field names, and default values
static char swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__header[] = "header";
static char swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__model_based[] = "model_based";
static char swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__params_hash[] = "params_hash";
static char swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__window_sec[] = "window_sec";
static char swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__warming_up[] = "warming_up";
static char swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__n_frames_in_window[] = "n_frames_in_window";
static char swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__entries[] = "entries";

static rosidl_runtime_c__type_description__Field swarm_interfaces__msg__MetricEntryArray__FIELDS[] = {
  {
    {swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__model_based, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__params_hash, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__window_sec, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__warming_up, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__n_frames_in_window, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntryArray__FIELD_NAME__entries, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {swarm_interfaces__msg__MetricEntry__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_interfaces__msg__MetricEntryArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {swarm_interfaces__msg__MetricEntry__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_interfaces__msg__MetricEntryArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_interfaces__msg__MetricEntryArray__TYPE_NAME, 37, 37},
      {swarm_interfaces__msg__MetricEntryArray__FIELDS, 7, 7},
    },
    {swarm_interfaces__msg__MetricEntryArray__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&swarm_interfaces__msg__MetricEntry__EXPECTED_HASH, swarm_interfaces__msg__MetricEntry__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = swarm_interfaces__msg__MetricEntry__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Array of generic metric entries with metadata\n"
  "std_msgs/Header header\n"
  "bool model_based\n"
  "string params_hash\n"
  "float64 window_sec\n"
  "bool warming_up\n"
  "uint32 n_frames_in_window\n"
  "MetricEntry[] entries";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_interfaces__msg__MetricEntryArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_interfaces__msg__MetricEntryArray__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 190, 190},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_interfaces__msg__MetricEntryArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_interfaces__msg__MetricEntryArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[3] = *swarm_interfaces__msg__MetricEntry__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
