// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/SensorDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_definition.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'type_id'
// Member 'attribute_keys'
// Member 'attribute_values'
#include "rosidl_runtime_c/string.h"
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.h"

/// Struct defined in msg/SensorDefinition in the package swarm_world_interfaces.
/**
  * Definition for attaching a sensor (LiDAR, Radar, Camera) to an actor
 */
typedef struct swarm_world_interfaces__msg__SensorDefinition
{
  uint32_t sensor_id;
  rosidl_runtime_c__String type_id;
  uint32_t parent_actor_id;
  geometry_msgs__msg__Transform transform;
  rosidl_runtime_c__String__Sequence attribute_keys;
  rosidl_runtime_c__String__Sequence attribute_values;
} swarm_world_interfaces__msg__SensorDefinition;

// Struct for a sequence of swarm_world_interfaces__msg__SensorDefinition.
typedef struct swarm_world_interfaces__msg__SensorDefinition__Sequence
{
  swarm_world_interfaces__msg__SensorDefinition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__SensorDefinition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__STRUCT_H_
