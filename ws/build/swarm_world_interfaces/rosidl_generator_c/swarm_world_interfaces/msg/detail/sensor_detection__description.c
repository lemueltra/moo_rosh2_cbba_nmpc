// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_world_interfaces:msg/SensorDetection.idl
// generated code does not contain a copyright notice

#include "swarm_world_interfaces/msg/detail/sensor_detection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__msg__SensorDetection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0xc3, 0x97, 0xf9, 0xbc, 0xb9, 0xce, 0xcb,
      0xe3, 0x99, 0x39, 0x93, 0x3e, 0x2c, 0xa4, 0xed,
      0x29, 0xe7, 0x3b, 0xdb, 0x75, 0x82, 0xad, 0xfc,
      0x99, 0x76, 0x0b, 0x19, 0x4a, 0x31, 0x83, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char swarm_world_interfaces__msg__SensorDetection__TYPE_NAME[] = "swarm_world_interfaces/msg/SensorDetection";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__actor_id[] = "actor_id";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__class_name[] = "class_name";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__bbox_pose_world[] = "bbox_pose_world";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__bbox_extent[] = "bbox_extent";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__range[] = "range";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__azimuth[] = "azimuth";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__elevation[] = "elevation";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__occluded[] = "occluded";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__partially_occluded[] = "partially_occluded";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__occlusion_ratio[] = "occlusion_ratio";
static char swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__aim_point[] = "aim_point";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__msg__SensorDetection__FIELDS[] = {
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__actor_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__class_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__bbox_pose_world, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__bbox_extent, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__azimuth, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__elevation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__occluded, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__partially_occluded, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__occlusion_ratio, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__SensorDetection__FIELD_NAME__aim_point, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_world_interfaces__msg__SensorDetection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__msg__SensorDetection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__msg__SensorDetection__TYPE_NAME, 42, 42},
      {swarm_world_interfaces__msg__SensorDetection__FIELDS, 11, 11},
    },
    {swarm_world_interfaces__msg__SensorDetection__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Single target detection from a sensor FoV evaluation\n"
  "uint32 actor_id\n"
  "string class_name\n"
  "geometry_msgs/Pose bbox_pose_world\n"
  "geometry_msgs/Vector3 bbox_extent\n"
  "float64 range\n"
  "float64 azimuth\n"
  "float64 elevation\n"
  "bool occluded\n"
  "# True when part of the outline is visible and part is blocked (detected, but not in\n"
  "# full). occluded == true means nothing of it is visible, yet it is inside the FoV.\n"
  "bool partially_occluded\n"
  "# Continuous fraction of target outline samples in FoV that are occluded [0.0, 1.0].\n"
  "# 0.0 = completely free, 1.0 = completely occluded.\n"
  "float64 occlusion_ratio\n"
  "# Point of the target that range/azimuth/elevation refer to: the nearest visible point\n"
  "# of its outline. Draw the detection ray to this point, not to the bbox centre (the\n"
  "# centre of a building is inside the building).\n"
  "geometry_msgs/Point aim_point";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__msg__SensorDetection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__msg__SensorDetection__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 823, 823},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__msg__SensorDetection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__msg__SensorDetection__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
