// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_world_interfaces:msg/WeatherPreset.idl
// generated code does not contain a copyright notice

#include "swarm_world_interfaces/msg/detail/weather_preset__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__msg__WeatherPreset__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0xab, 0x95, 0xdf, 0xb5, 0xc3, 0x6f, 0xc2,
      0x66, 0x60, 0x31, 0x06, 0x57, 0x47, 0xbb, 0x57,
      0x3f, 0x8e, 0x07, 0x04, 0x2f, 0x9f, 0x05, 0x60,
      0xe8, 0xe9, 0x44, 0x07, 0x01, 0x9c, 0x26, 0x84,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char swarm_world_interfaces__msg__WeatherPreset__TYPE_NAME[] = "swarm_world_interfaces/msg/WeatherPreset";

// Define type names, field names, and default values
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__preset_name[] = "preset_name";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__cloudiness[] = "cloudiness";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__precipitation[] = "precipitation";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__precipitation_deposits[] = "precipitation_deposits";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__wind_intensity[] = "wind_intensity";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__sun_azimuth_angle[] = "sun_azimuth_angle";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__sun_altitude_angle[] = "sun_altitude_angle";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__fog_density[] = "fog_density";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__fog_distance[] = "fog_distance";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__fog_falloff[] = "fog_falloff";
static char swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__wetness[] = "wetness";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__msg__WeatherPreset__FIELDS[] = {
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__preset_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__cloudiness, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__precipitation, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__precipitation_deposits, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__wind_intensity, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__sun_azimuth_angle, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__sun_altitude_angle, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__fog_density, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__fog_distance, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__fog_falloff, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__msg__WeatherPreset__FIELD_NAME__wetness, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__msg__WeatherPreset__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__msg__WeatherPreset__TYPE_NAME, 40, 40},
      {swarm_world_interfaces__msg__WeatherPreset__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Atmospheric and environmental condition parameters\n"
  "string preset_name\n"
  "float32 cloudiness\n"
  "float32 precipitation\n"
  "float32 precipitation_deposits\n"
  "float32 wind_intensity\n"
  "float32 sun_azimuth_angle\n"
  "float32 sun_altitude_angle\n"
  "float32 fog_density\n"
  "float32 fog_distance\n"
  "float32 fog_falloff\n"
  "float32 wetness";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__msg__WeatherPreset__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__msg__WeatherPreset__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 297, 297},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__msg__WeatherPreset__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__msg__WeatherPreset__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
