// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/SensorDetectionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_detection_array.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sensor_type'
#include "rosidl_runtime_c/string.h"
// Member 'detections'
#include "swarm_world_interfaces/msg/detail/sensor_detection__struct.h"

/// Struct defined in msg/SensorDetectionArray in the package swarm_world_interfaces.
/**
  * Array of detections from a sensor FoV evaluation
 */
typedef struct swarm_world_interfaces__msg__SensorDetectionArray
{
  std_msgs__msg__Header header;
  uint32_t sensor_id;
  uint32_t parent_actor_id;
  /// The sensor volume these detections were computed with, so an operator (or a checker)
  /// never has to guess it: 'lidar', 'camera' or 'radar' plus the real numbers.
  rosidl_runtime_c__String sensor_type;
  double range;
  double horizontal_fov_deg;
  double upper_fov_deg;
  double lower_fov_deg;
  swarm_world_interfaces__msg__SensorDetection__Sequence detections;
} swarm_world_interfaces__msg__SensorDetectionArray;

// Struct for a sequence of swarm_world_interfaces__msg__SensorDetectionArray.
typedef struct swarm_world_interfaces__msg__SensorDetectionArray__Sequence
{
  swarm_world_interfaces__msg__SensorDetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__SensorDetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__STRUCT_H_
