// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DroneReferenceArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_reference_array.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE_ARRAY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE_ARRAY__STRUCT_H_

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
// Member 'references'
#include "swarm_interfaces/msg/detail/drone_reference__struct.h"

/// Struct defined in msg/DroneReferenceArray in the package swarm_interfaces.
/**
  * Array of references for active drones
 */
typedef struct swarm_interfaces__msg__DroneReferenceArray
{
  std_msgs__msg__Header header;
  swarm_interfaces__msg__DroneReference__Sequence references;
} swarm_interfaces__msg__DroneReferenceArray;

// Struct for a sequence of swarm_interfaces__msg__DroneReferenceArray.
typedef struct swarm_interfaces__msg__DroneReferenceArray__Sequence
{
  swarm_interfaces__msg__DroneReferenceArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DroneReferenceArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE_ARRAY__STRUCT_H_
