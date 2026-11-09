// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_world_interfaces:msg/SensorDefinition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_world_interfaces/msg/detail/sensor_definition__rosidl_typesupport_introspection_c.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_world_interfaces/msg/detail/sensor_definition__functions.h"
#include "swarm_world_interfaces/msg/detail/sensor_definition__struct.h"


// Include directives for member types
// Member `type_id`
// Member `attribute_keys`
// Member `attribute_values`
#include "rosidl_runtime_c/string_functions.h"
// Member `transform`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__msg__SensorDefinition__init(message_memory);
}

void swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_fini_function(void * message_memory)
{
  swarm_world_interfaces__msg__SensorDefinition__fini(message_memory);
}

size_t swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__size_function__SensorDefinition__attribute_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_const_function__SensorDefinition__attribute_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_function__SensorDefinition__attribute_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__fetch_function__SensorDefinition__attribute_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_const_function__SensorDefinition__attribute_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__assign_function__SensorDefinition__attribute_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_function__SensorDefinition__attribute_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__resize_function__SensorDefinition__attribute_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__size_function__SensorDefinition__attribute_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_const_function__SensorDefinition__attribute_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_function__SensorDefinition__attribute_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__fetch_function__SensorDefinition__attribute_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_const_function__SensorDefinition__attribute_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__assign_function__SensorDefinition__attribute_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_function__SensorDefinition__attribute_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__resize_function__SensorDefinition__attribute_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_member_array[6] = {
  {
    "sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDefinition, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDefinition, type_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parent_actor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDefinition, parent_actor_id),  // bytes offset in struct
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
    offsetof(swarm_world_interfaces__msg__SensorDefinition, transform),  // bytes offset in struct
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
    offsetof(swarm_world_interfaces__msg__SensorDefinition, attribute_keys),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__size_function__SensorDefinition__attribute_keys,  // size() function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_const_function__SensorDefinition__attribute_keys,  // get_const(index) function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_function__SensorDefinition__attribute_keys,  // get(index) function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__fetch_function__SensorDefinition__attribute_keys,  // fetch(index, &value) function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__assign_function__SensorDefinition__attribute_keys,  // assign(index, value) function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__resize_function__SensorDefinition__attribute_keys  // resize(index) function pointer
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
    offsetof(swarm_world_interfaces__msg__SensorDefinition, attribute_values),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__size_function__SensorDefinition__attribute_values,  // size() function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_const_function__SensorDefinition__attribute_values,  // get_const(index) function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__get_function__SensorDefinition__attribute_values,  // get(index) function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__fetch_function__SensorDefinition__attribute_values,  // fetch(index, &value) function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__assign_function__SensorDefinition__attribute_values,  // assign(index, value) function pointer
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__resize_function__SensorDefinition__attribute_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_members = {
  "swarm_world_interfaces__msg",  // message namespace
  "SensorDefinition",  // message name
  6,  // number of fields
  sizeof(swarm_world_interfaces__msg__SensorDefinition),
  false,  // has_any_key_member_
  swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_member_array,  // message members
  swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_type_support_handle = {
  0,
  &swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__SensorDefinition__get_type_hash,
  &swarm_world_interfaces__msg__SensorDefinition__get_type_description,
  &swarm_world_interfaces__msg__SensorDefinition__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, msg, SensorDefinition)() {
  swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__msg__SensorDefinition__rosidl_typesupport_introspection_c__SensorDefinition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
