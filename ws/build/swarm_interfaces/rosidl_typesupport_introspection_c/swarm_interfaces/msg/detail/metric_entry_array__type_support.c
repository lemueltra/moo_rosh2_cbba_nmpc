// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_interfaces:msg/MetricEntryArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_interfaces/msg/detail/metric_entry_array__rosidl_typesupport_introspection_c.h"
#include "swarm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_interfaces/msg/detail/metric_entry_array__functions.h"
#include "swarm_interfaces/msg/detail/metric_entry_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `params_hash`
#include "rosidl_runtime_c/string_functions.h"
// Member `entries`
#include "swarm_interfaces/msg/metric_entry.h"
// Member `entries`
#include "swarm_interfaces/msg/detail/metric_entry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_interfaces__msg__MetricEntryArray__init(message_memory);
}

void swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_fini_function(void * message_memory)
{
  swarm_interfaces__msg__MetricEntryArray__fini(message_memory);
}

size_t swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__size_function__MetricEntryArray__entries(
  const void * untyped_member)
{
  const swarm_interfaces__msg__MetricEntry__Sequence * member =
    (const swarm_interfaces__msg__MetricEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__get_const_function__MetricEntryArray__entries(
  const void * untyped_member, size_t index)
{
  const swarm_interfaces__msg__MetricEntry__Sequence * member =
    (const swarm_interfaces__msg__MetricEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__get_function__MetricEntryArray__entries(
  void * untyped_member, size_t index)
{
  swarm_interfaces__msg__MetricEntry__Sequence * member =
    (swarm_interfaces__msg__MetricEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__fetch_function__MetricEntryArray__entries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const swarm_interfaces__msg__MetricEntry * item =
    ((const swarm_interfaces__msg__MetricEntry *)
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__get_const_function__MetricEntryArray__entries(untyped_member, index));
  swarm_interfaces__msg__MetricEntry * value =
    (swarm_interfaces__msg__MetricEntry *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__assign_function__MetricEntryArray__entries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  swarm_interfaces__msg__MetricEntry * item =
    ((swarm_interfaces__msg__MetricEntry *)
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__get_function__MetricEntryArray__entries(untyped_member, index));
  const swarm_interfaces__msg__MetricEntry * value =
    (const swarm_interfaces__msg__MetricEntry *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__resize_function__MetricEntryArray__entries(
  void * untyped_member, size_t size)
{
  swarm_interfaces__msg__MetricEntry__Sequence * member =
    (swarm_interfaces__msg__MetricEntry__Sequence *)(untyped_member);
  swarm_interfaces__msg__MetricEntry__Sequence__fini(member);
  return swarm_interfaces__msg__MetricEntry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__MetricEntryArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_based",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__MetricEntryArray, model_based),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params_hash",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__MetricEntryArray, params_hash),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "window_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__MetricEntryArray, window_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warming_up",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__MetricEntryArray, warming_up),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_frames_in_window",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__MetricEntryArray, n_frames_in_window),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "entries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__MetricEntryArray, entries),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__size_function__MetricEntryArray__entries,  // size() function pointer
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__get_const_function__MetricEntryArray__entries,  // get_const(index) function pointer
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__get_function__MetricEntryArray__entries,  // get(index) function pointer
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__fetch_function__MetricEntryArray__entries,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__assign_function__MetricEntryArray__entries,  // assign(index, value) function pointer
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__resize_function__MetricEntryArray__entries  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_members = {
  "swarm_interfaces__msg",  // message namespace
  "MetricEntryArray",  // message name
  7,  // number of fields
  sizeof(swarm_interfaces__msg__MetricEntryArray),
  false,  // has_any_key_member_
  swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_member_array,  // message members
  swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_type_support_handle = {
  0,
  &swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__MetricEntryArray__get_type_hash,
  &swarm_interfaces__msg__MetricEntryArray__get_type_description,
  &swarm_interfaces__msg__MetricEntryArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_interfaces, msg, MetricEntryArray)() {
  swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_interfaces, msg, MetricEntry)();
  if (!swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_type_support_handle.typesupport_identifier) {
    swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_interfaces__msg__MetricEntryArray__rosidl_typesupport_introspection_c__MetricEntryArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
