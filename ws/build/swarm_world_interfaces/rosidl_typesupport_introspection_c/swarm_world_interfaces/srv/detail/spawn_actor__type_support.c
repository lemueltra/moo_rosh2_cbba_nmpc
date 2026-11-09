// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_world_interfaces:srv/SpawnActor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_world_interfaces/srv/detail/spawn_actor__rosidl_typesupport_introspection_c.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_world_interfaces/srv/detail/spawn_actor__functions.h"
#include "swarm_world_interfaces/srv/detail/spawn_actor__struct.h"


// Include directives for member types
// Member `type_id`
// Member `role_name`
// Member `attribute_keys`
// Member `attribute_values`
#include "rosidl_runtime_c/string_functions.h"
// Member `transform`
#include "geometry_msgs/msg/pose.h"
// Member `transform`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__srv__SpawnActor_Request__init(message_memory);
}

void swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_fini_function(void * message_memory)
{
  swarm_world_interfaces__srv__SpawnActor_Request__fini(message_memory);
}

size_t swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__size_function__SpawnActor_Request__attribute_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Request__attribute_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_function__SpawnActor_Request__attribute_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnActor_Request__attribute_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Request__attribute_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__assign_function__SpawnActor_Request__attribute_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_function__SpawnActor_Request__attribute_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__resize_function__SpawnActor_Request__attribute_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__size_function__SpawnActor_Request__attribute_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Request__attribute_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_function__SpawnActor_Request__attribute_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnActor_Request__attribute_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Request__attribute_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__assign_function__SpawnActor_Request__attribute_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_function__SpawnActor_Request__attribute_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__resize_function__SpawnActor_Request__attribute_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_member_array[6] = {
  {
    "type_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Request, type_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "role_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Request, role_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Request, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parent_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Request, parent_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attribute_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Request, attribute_keys),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__size_function__SpawnActor_Request__attribute_keys,  // size() function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Request__attribute_keys,  // get_const(index) function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_function__SpawnActor_Request__attribute_keys,  // get(index) function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnActor_Request__attribute_keys,  // fetch(index, &value) function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__assign_function__SpawnActor_Request__attribute_keys,  // assign(index, value) function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__resize_function__SpawnActor_Request__attribute_keys  // resize(index) function pointer
  },
  {
    "attribute_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Request, attribute_values),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__size_function__SpawnActor_Request__attribute_values,  // size() function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Request__attribute_values,  // get_const(index) function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__get_function__SpawnActor_Request__attribute_values,  // get(index) function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnActor_Request__attribute_values,  // fetch(index, &value) function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__assign_function__SpawnActor_Request__attribute_values,  // assign(index, value) function pointer
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__resize_function__SpawnActor_Request__attribute_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_members = {
  "swarm_world_interfaces__srv",  // message namespace
  "SpawnActor_Request",  // message name
  6,  // number of fields
  sizeof(swarm_world_interfaces__srv__SpawnActor_Request),
  false,  // has_any_key_member_
  swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_member_array,  // message members
  swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_type_support_handle = {
  0,
  &swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__SpawnActor_Request__get_type_hash,
  &swarm_world_interfaces__srv__SpawnActor_Request__get_type_description,
  &swarm_world_interfaces__srv__SpawnActor_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Request)() {
  swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__struct.h"


// Include directives for member types
// Member `error_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__srv__SpawnActor_Response__init(message_memory);
}

void swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_fini_function(void * message_memory)
{
  swarm_world_interfaces__srv__SpawnActor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Response, actor_id),  // bytes offset in struct
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
    offsetof(swarm_world_interfaces__srv__SpawnActor_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_members = {
  "swarm_world_interfaces__srv",  // message namespace
  "SpawnActor_Response",  // message name
  3,  // number of fields
  sizeof(swarm_world_interfaces__srv__SpawnActor_Response),
  false,  // has_any_key_member_
  swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_member_array,  // message members
  swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_type_support_handle = {
  0,
  &swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__SpawnActor_Response__get_type_hash,
  &swarm_world_interfaces__srv__SpawnActor_Response__get_type_description,
  &swarm_world_interfaces__srv__SpawnActor_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Response)() {
  if (!swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "swarm_world_interfaces/srv/spawn_actor.h"
// Member `request`
// Member `response`
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__srv__SpawnActor_Event__init(message_memory);
}

void swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_fini_function(void * message_memory)
{
  swarm_world_interfaces__srv__SpawnActor_Event__fini(message_memory);
}

size_t swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__size_function__SpawnActor_Event__request(
  const void * untyped_member)
{
  const swarm_world_interfaces__srv__SpawnActor_Request__Sequence * member =
    (const swarm_world_interfaces__srv__SpawnActor_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Event__request(
  const void * untyped_member, size_t index)
{
  const swarm_world_interfaces__srv__SpawnActor_Request__Sequence * member =
    (const swarm_world_interfaces__srv__SpawnActor_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_function__SpawnActor_Event__request(
  void * untyped_member, size_t index)
{
  swarm_world_interfaces__srv__SpawnActor_Request__Sequence * member =
    (swarm_world_interfaces__srv__SpawnActor_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__fetch_function__SpawnActor_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const swarm_world_interfaces__srv__SpawnActor_Request * item =
    ((const swarm_world_interfaces__srv__SpawnActor_Request *)
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Event__request(untyped_member, index));
  swarm_world_interfaces__srv__SpawnActor_Request * value =
    (swarm_world_interfaces__srv__SpawnActor_Request *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__assign_function__SpawnActor_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  swarm_world_interfaces__srv__SpawnActor_Request * item =
    ((swarm_world_interfaces__srv__SpawnActor_Request *)
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_function__SpawnActor_Event__request(untyped_member, index));
  const swarm_world_interfaces__srv__SpawnActor_Request * value =
    (const swarm_world_interfaces__srv__SpawnActor_Request *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__resize_function__SpawnActor_Event__request(
  void * untyped_member, size_t size)
{
  swarm_world_interfaces__srv__SpawnActor_Request__Sequence * member =
    (swarm_world_interfaces__srv__SpawnActor_Request__Sequence *)(untyped_member);
  swarm_world_interfaces__srv__SpawnActor_Request__Sequence__fini(member);
  return swarm_world_interfaces__srv__SpawnActor_Request__Sequence__init(member, size);
}

size_t swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__size_function__SpawnActor_Event__response(
  const void * untyped_member)
{
  const swarm_world_interfaces__srv__SpawnActor_Response__Sequence * member =
    (const swarm_world_interfaces__srv__SpawnActor_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Event__response(
  const void * untyped_member, size_t index)
{
  const swarm_world_interfaces__srv__SpawnActor_Response__Sequence * member =
    (const swarm_world_interfaces__srv__SpawnActor_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_function__SpawnActor_Event__response(
  void * untyped_member, size_t index)
{
  swarm_world_interfaces__srv__SpawnActor_Response__Sequence * member =
    (swarm_world_interfaces__srv__SpawnActor_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__fetch_function__SpawnActor_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const swarm_world_interfaces__srv__SpawnActor_Response * item =
    ((const swarm_world_interfaces__srv__SpawnActor_Response *)
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Event__response(untyped_member, index));
  swarm_world_interfaces__srv__SpawnActor_Response * value =
    (swarm_world_interfaces__srv__SpawnActor_Response *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__assign_function__SpawnActor_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  swarm_world_interfaces__srv__SpawnActor_Response * item =
    ((swarm_world_interfaces__srv__SpawnActor_Response *)
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_function__SpawnActor_Event__response(untyped_member, index));
  const swarm_world_interfaces__srv__SpawnActor_Response * value =
    (const swarm_world_interfaces__srv__SpawnActor_Response *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__resize_function__SpawnActor_Event__response(
  void * untyped_member, size_t size)
{
  swarm_world_interfaces__srv__SpawnActor_Response__Sequence * member =
    (swarm_world_interfaces__srv__SpawnActor_Response__Sequence *)(untyped_member);
  swarm_world_interfaces__srv__SpawnActor_Response__Sequence__fini(member);
  return swarm_world_interfaces__srv__SpawnActor_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__srv__SpawnActor_Event, info),  // bytes offset in struct
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
    offsetof(swarm_world_interfaces__srv__SpawnActor_Event, request),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__size_function__SpawnActor_Event__request,  // size() function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Event__request,  // get_const(index) function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_function__SpawnActor_Event__request,  // get(index) function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__fetch_function__SpawnActor_Event__request,  // fetch(index, &value) function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__assign_function__SpawnActor_Event__request,  // assign(index, value) function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__resize_function__SpawnActor_Event__request  // resize(index) function pointer
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
    offsetof(swarm_world_interfaces__srv__SpawnActor_Event, response),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__size_function__SpawnActor_Event__response,  // size() function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnActor_Event__response,  // get_const(index) function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__get_function__SpawnActor_Event__response,  // get(index) function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__fetch_function__SpawnActor_Event__response,  // fetch(index, &value) function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__assign_function__SpawnActor_Event__response,  // assign(index, value) function pointer
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__resize_function__SpawnActor_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_members = {
  "swarm_world_interfaces__srv",  // message namespace
  "SpawnActor_Event",  // message name
  3,  // number of fields
  sizeof(swarm_world_interfaces__srv__SpawnActor_Event),
  false,  // has_any_key_member_
  swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_member_array,  // message members
  swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_type_support_handle = {
  0,
  &swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__SpawnActor_Event__get_type_hash,
  &swarm_world_interfaces__srv__SpawnActor_Event__get_type_description,
  &swarm_world_interfaces__srv__SpawnActor_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Event)() {
  swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Request)();
  swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Response)();
  if (!swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_service_members = {
  "swarm_world_interfaces__srv",  // service namespace
  "SpawnActor",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_Request_message_type_support_handle,
  NULL,  // response message
  // swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_Response_message_type_support_handle
  NULL  // event_message
  // swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_Response_message_type_support_handle
};


static rosidl_service_type_support_t swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_service_type_support_handle = {
  0,
  &swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_service_members,
  get_service_typesupport_handle_function,
  &swarm_world_interfaces__srv__SpawnActor_Request__rosidl_typesupport_introspection_c__SpawnActor_Request_message_type_support_handle,
  &swarm_world_interfaces__srv__SpawnActor_Response__rosidl_typesupport_introspection_c__SpawnActor_Response_message_type_support_handle,
  &swarm_world_interfaces__srv__SpawnActor_Event__rosidl_typesupport_introspection_c__SpawnActor_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    swarm_world_interfaces,
    srv,
    SpawnActor
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    swarm_world_interfaces,
    srv,
    SpawnActor
  ),
  &swarm_world_interfaces__srv__SpawnActor__get_type_hash,
  &swarm_world_interfaces__srv__SpawnActor__get_type_description,
  &swarm_world_interfaces__srv__SpawnActor__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor)(void) {
  if (!swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_service_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, SpawnActor_Event)()->data;
  }

  return &swarm_world_interfaces__srv__detail__spawn_actor__rosidl_typesupport_introspection_c__SpawnActor_service_type_support_handle;
}
