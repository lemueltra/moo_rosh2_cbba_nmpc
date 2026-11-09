// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:srv/DestroyActor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/destroy_actor.h"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__DESTROY_ACTOR__STRUCT_H_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__DESTROY_ACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DestroyActor in the package swarm_world_interfaces.
typedef struct swarm_world_interfaces__srv__DestroyActor_Request
{
  uint32_t actor_id;
} swarm_world_interfaces__srv__DestroyActor_Request;

// Struct for a sequence of swarm_world_interfaces__srv__DestroyActor_Request.
typedef struct swarm_world_interfaces__srv__DestroyActor_Request__Sequence
{
  swarm_world_interfaces__srv__DestroyActor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__srv__DestroyActor_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DestroyActor in the package swarm_world_interfaces.
typedef struct swarm_world_interfaces__srv__DestroyActor_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} swarm_world_interfaces__srv__DestroyActor_Response;

// Struct for a sequence of swarm_world_interfaces__srv__DestroyActor_Response.
typedef struct swarm_world_interfaces__srv__DestroyActor_Response__Sequence
{
  swarm_world_interfaces__srv__DestroyActor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__srv__DestroyActor_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  swarm_world_interfaces__srv__DestroyActor_Event__request__MAX_SIZE = 1
};
// response
enum
{
  swarm_world_interfaces__srv__DestroyActor_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DestroyActor in the package swarm_world_interfaces.
typedef struct swarm_world_interfaces__srv__DestroyActor_Event
{
  service_msgs__msg__ServiceEventInfo info;
  swarm_world_interfaces__srv__DestroyActor_Request__Sequence request;
  swarm_world_interfaces__srv__DestroyActor_Response__Sequence response;
} swarm_world_interfaces__srv__DestroyActor_Event;

// Struct for a sequence of swarm_world_interfaces__srv__DestroyActor_Event.
typedef struct swarm_world_interfaces__srv__DestroyActor_Event__Sequence
{
  swarm_world_interfaces__srv__DestroyActor_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__srv__DestroyActor_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__DESTROY_ACTOR__STRUCT_H_
