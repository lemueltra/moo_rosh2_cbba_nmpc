// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/WeatherPreset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/weather_preset.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'preset_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WeatherPreset in the package swarm_world_interfaces.
/**
  * Atmospheric and environmental condition parameters
 */
typedef struct swarm_world_interfaces__msg__WeatherPreset
{
  rosidl_runtime_c__String preset_name;
  float cloudiness;
  float precipitation;
  float precipitation_deposits;
  float wind_intensity;
  float sun_azimuth_angle;
  float sun_altitude_angle;
  float fog_density;
  float fog_distance;
  float fog_falloff;
  float wetness;
} swarm_world_interfaces__msg__WeatherPreset;

// Struct for a sequence of swarm_world_interfaces__msg__WeatherPreset.
typedef struct swarm_world_interfaces__msg__WeatherPreset__Sequence
{
  swarm_world_interfaces__msg__WeatherPreset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__WeatherPreset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__STRUCT_H_
