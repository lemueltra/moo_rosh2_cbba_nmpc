// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:srv/SetTimeMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/set_time_mode.h"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__STRUCT_H_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TIME_MODE_ASYNC'.
enum
{
  swarm_world_interfaces__srv__SetTimeMode_Request__TIME_MODE_ASYNC = 0
};

/// Constant 'TIME_MODE_SYNC'.
enum
{
  swarm_world_interfaces__srv__SetTimeMode_Request__TIME_MODE_SYNC = 1
};

/// Struct defined in srv/SetTimeMode in the package swarm_world_interfaces.
typedef struct swarm_world_interfaces__srv__SetTimeMode_Request
{
  uint8_t time_mode;
  double fixed_delta_seconds;
  double sync_timeout_sec;
} swarm_world_interfaces__srv__SetTimeMode_Request;

// Struct for a sequence of swarm_world_interfaces__srv__SetTimeMode_Request.
typedef struct swarm_world_interfaces__srv__SetTimeMode_Request__Sequence
{
  swarm_world_interfaces__srv__SetTimeMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__srv__SetTimeMode_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetTimeMode in the package swarm_world_interfaces.
typedef struct swarm_world_interfaces__srv__SetTimeMode_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} swarm_world_interfaces__srv__SetTimeMode_Response;

// Struct for a sequence of swarm_world_interfaces__srv__SetTimeMode_Response.
typedef struct swarm_world_interfaces__srv__SetTimeMode_Response__Sequence
{
  swarm_world_interfaces__srv__SetTimeMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__srv__SetTimeMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  swarm_world_interfaces__srv__SetTimeMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  swarm_world_interfaces__srv__SetTimeMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetTimeMode in the package swarm_world_interfaces.
typedef struct swarm_world_interfaces__srv__SetTimeMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  swarm_world_interfaces__srv__SetTimeMode_Request__Sequence request;
  swarm_world_interfaces__srv__SetTimeMode_Response__Sequence response;
} swarm_world_interfaces__srv__SetTimeMode_Event;

// Struct for a sequence of swarm_world_interfaces__srv__SetTimeMode_Event.
typedef struct swarm_world_interfaces__srv__SetTimeMode_Event__Sequence
{
  swarm_world_interfaces__srv__SetTimeMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__srv__SetTimeMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__STRUCT_H_
