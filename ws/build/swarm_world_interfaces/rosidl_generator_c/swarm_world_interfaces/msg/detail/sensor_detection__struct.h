// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/SensorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_detection.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"
// Member 'bbox_pose_world'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'bbox_extent'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'aim_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/SensorDetection in the package swarm_world_interfaces.
/**
  * Single target detection from a sensor FoV evaluation
 */
typedef struct swarm_world_interfaces__msg__SensorDetection
{
  uint32_t actor_id;
  rosidl_runtime_c__String class_name;
  geometry_msgs__msg__Pose bbox_pose_world;
  geometry_msgs__msg__Vector3 bbox_extent;
  double range;
  double azimuth;
  double elevation;
  bool occluded;
  /// True when part of the outline is visible and part is blocked (detected, but not in
  /// full). occluded == true means nothing of it is visible, yet it is inside the FoV.
  bool partially_occluded;
  /// Continuous fraction of target outline samples in FoV that are occluded [0.0, 1.0].
  /// 0.0 = completely free, 1.0 = completely occluded.
  double occlusion_ratio;
  /// Point of the target that range/azimuth/elevation refer to: the nearest visible point
  /// of its outline. Draw the detection ray to this point, not to the bbox centre (the
  /// centre of a building is inside the building).
  geometry_msgs__msg__Point aim_point;
} swarm_world_interfaces__msg__SensorDetection;

// Struct for a sequence of swarm_world_interfaces__msg__SensorDetection.
typedef struct swarm_world_interfaces__msg__SensorDetection__Sequence
{
  swarm_world_interfaces__msg__SensorDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__SensorDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__STRUCT_H_
