// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_world_interfaces:srv/AttachSensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_world_interfaces/srv/detail/attach_sensor__rosidl_typesupport_introspection_c.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_world_interfaces/srv/detail/attach_sensor__functions.h"
#include "swarm_world_interfaces/srv/detail/attach_sensor__struct.h"


// Include directives for member types
// Member `sensor`
#include "swarm_world_interfaces/msg/sensor_definition.h"
// Member `sensor`
#include "swarm_world_interfaces/msg/detail/sensor_definition__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__srv__AttachSensor_Request__init(message_memory);
}

void swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_fini_function(void * message_memory)
{
  swarm_world_interfaces__srv__AttachSensor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_member_array[1] = {
  {
    "sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__AttachSensor_Request, sensor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_members = {
  "swarm_world_interfaces__srv",  // message namespace
  "AttachSensor_Request",  // message name
  1,  // number of fields
  sizeof(swarm_world_interfaces__srv__AttachSensor_Request),
  false,  // has_any_key_member_
  swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_member_array,  // message members
  swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_type_support_handle = {
  0,
  &swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__AttachSensor_Request__get_type_hash,
  &swarm_world_interfaces__srv__AttachSensor_Request__get_type_description,
  &swarm_world_interfaces__srv__AttachSensor_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Request)() {
  swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, msg, SensorDefinition)();
  if (!swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__struct.h"


// Include directives for member types
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__srv__AttachSensor_Response__init(message_memory);
}

void swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_fini_function(void * message_memory)
{
  swarm_world_interfaces__srv__AttachSensor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__AttachSensor_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__AttachSensor_Response, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__AttachSensor_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_members = {
  "swarm_world_interfaces__srv",  // message namespace
  "AttachSensor_Response",  // message name
  3,  // number of fields
  sizeof(swarm_world_interfaces__srv__AttachSensor_Response),
  false,  // has_any_key_member_
  swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_member_array,  // message members
  swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_type_support_handle = {
  0,
  &swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__AttachSensor_Response__get_type_hash,
  &swarm_world_interfaces__srv__AttachSensor_Response__get_type_description,
  &swarm_world_interfaces__srv__AttachSensor_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Response)() {
  if (!swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "swarm_world_interfaces/srv/attach_sensor.h"
// Member `request`
// Member `response`
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__srv__AttachSensor_Event__init(message_memory);
}

void swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_fini_function(void * message_memory)
{
  swarm_world_interfaces__srv__AttachSensor_Event__fini(message_memory);
}

size_t swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__size_function__AttachSensor_Event__request(
  const void * untyped_member)
{
  const swarm_world_interfaces__srv__AttachSensor_Request__Sequence * member =
    (const swarm_world_interfaces__srv__AttachSensor_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_const_function__AttachSensor_Event__request(
  const void * untyped_member, size_t index)
{
  const swarm_world_interfaces__srv__AttachSensor_Request__Sequence * member =
    (const swarm_world_interfaces__srv__AttachSensor_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_function__AttachSensor_Event__request(
  void * untyped_member, size_t index)
{
  swarm_world_interfaces__srv__AttachSensor_Request__Sequence * member =
    (swarm_world_interfaces__srv__AttachSensor_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__fetch_function__AttachSensor_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const swarm_world_interfaces__srv__AttachSensor_Request * item =
    ((const swarm_world_interfaces__srv__AttachSensor_Request *)
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_const_function__AttachSensor_Event__request(untyped_member, index));
  swarm_world_interfaces__srv__AttachSensor_Request * value =
    (swarm_world_interfaces__srv__AttachSensor_Request *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__assign_function__AttachSensor_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  swarm_world_interfaces__srv__AttachSensor_Request * item =
    ((swarm_world_interfaces__srv__AttachSensor_Request *)
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_function__AttachSensor_Event__request(untyped_member, index));
  const swarm_world_interfaces__srv__AttachSensor_Request * value =
    (const swarm_world_interfaces__srv__AttachSensor_Request *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__resize_function__AttachSensor_Event__request(
  void * untyped_member, size_t size)
{
  swarm_world_interfaces__srv__AttachSensor_Request__Sequence * member =
    (swarm_world_interfaces__srv__AttachSensor_Request__Sequence *)(untyped_member);
  swarm_world_interfaces__srv__AttachSensor_Request__Sequence__fini(member);
  return swarm_world_interfaces__srv__AttachSensor_Request__Sequence__init(member, size);
}

size_t swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__size_function__AttachSensor_Event__response(
  const void * untyped_member)
{
  const swarm_world_interfaces__srv__AttachSensor_Response__Sequence * member =
    (const swarm_world_interfaces__srv__AttachSensor_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_const_function__AttachSensor_Event__response(
  const void * untyped_member, size_t index)
{
  const swarm_world_interfaces__srv__AttachSensor_Response__Sequence * member =
    (const swarm_world_interfaces__srv__AttachSensor_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_function__AttachSensor_Event__response(
  void * untyped_member, size_t index)
{
  swarm_world_interfaces__srv__AttachSensor_Response__Sequence * member =
    (swarm_world_interfaces__srv__AttachSensor_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__fetch_function__AttachSensor_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const swarm_world_interfaces__srv__AttachSensor_Response * item =
    ((const swarm_world_interfaces__srv__AttachSensor_Response *)
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_const_function__AttachSensor_Event__response(untyped_member, index));
  swarm_world_interfaces__srv__AttachSensor_Response * value =
    (swarm_world_interfaces__srv__AttachSensor_Response *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__assign_function__AttachSensor_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  swarm_world_interfaces__srv__AttachSensor_Response * item =
    ((swarm_world_interfaces__srv__AttachSensor_Response *)
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_function__AttachSensor_Event__response(untyped_member, index));
  const swarm_world_interfaces__srv__AttachSensor_Response * value =
    (const swarm_world_interfaces__srv__AttachSensor_Response *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__resize_function__AttachSensor_Event__response(
  void * untyped_member, size_t size)
{
  swarm_world_interfaces__srv__AttachSensor_Response__Sequence * member =
    (swarm_world_interfaces__srv__AttachSensor_Response__Sequence *)(untyped_member);
  swarm_world_interfaces__srv__AttachSensor_Response__Sequence__fini(member);
  return swarm_world_interfaces__srv__AttachSensor_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__AttachSensor_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(swarm_world_interfaces__srv__AttachSensor_Event, request),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__size_function__AttachSensor_Event__request,  // size() function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_const_function__AttachSensor_Event__request,  // get_const(index) function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_function__AttachSensor_Event__request,  // get(index) function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__fetch_function__AttachSensor_Event__request,  // fetch(index, &value) function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__assign_function__AttachSensor_Event__request,  // assign(index, value) function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__resize_function__AttachSensor_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(swarm_world_interfaces__srv__AttachSensor_Event, response),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__size_function__AttachSensor_Event__response,  // size() function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_const_function__AttachSensor_Event__response,  // get_const(index) function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__get_function__AttachSensor_Event__response,  // get(index) function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__fetch_function__AttachSensor_Event__response,  // fetch(index, &value) function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__assign_function__AttachSensor_Event__response,  // assign(index, value) function pointer
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__resize_function__AttachSensor_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_members = {
  "swarm_world_interfaces__srv",  // message namespace
  "AttachSensor_Event",  // message name
  3,  // number of fields
  sizeof(swarm_world_interfaces__srv__AttachSensor_Event),
  false,  // has_any_key_member_
  swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_member_array,  // message members
  swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_type_support_handle = {
  0,
  &swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__AttachSensor_Event__get_type_hash,
  &swarm_world_interfaces__srv__AttachSensor_Event__get_type_description,
  &swarm_world_interfaces__srv__AttachSensor_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Event)() {
  swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Request)();
  swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Response)();
  if (!swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_service_members = {
  "swarm_world_interfaces__srv",  // service namespace
  "AttachSensor",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_Request_message_type_support_handle,
  NULL,  // response message
  // swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_Response_message_type_support_handle
  NULL  // event_message
  // swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_Response_message_type_support_handle
};


static rosidl_service_type_support_t swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_service_type_support_handle = {
  0,
  &swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_service_members,
  get_service_typesupport_handle_function,
  &swarm_world_interfaces__srv__AttachSensor_Request__rosidl_typesupport_introspection_c__AttachSensor_Request_message_type_support_handle,
  &swarm_world_interfaces__srv__AttachSensor_Response__rosidl_typesupport_introspection_c__AttachSensor_Response_message_type_support_handle,
  &swarm_world_interfaces__srv__AttachSensor_Event__rosidl_typesupport_introspection_c__AttachSensor_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    swarm_world_interfaces,
    srv,
    AttachSensor
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    swarm_world_interfaces,
    srv,
    AttachSensor
  ),
  &swarm_world_interfaces__srv__AttachSensor__get_type_hash,
  &swarm_world_interfaces__srv__AttachSensor__get_type_description,
  &swarm_world_interfaces__srv__AttachSensor__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor)(void) {
  if (!swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_service_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Event)()->data;
  }

  return &swarm_world_interfaces__srv__detail__attach_sensor__rosidl_typesupport_introspection_c__AttachSensor_service_type_support_handle;
}
