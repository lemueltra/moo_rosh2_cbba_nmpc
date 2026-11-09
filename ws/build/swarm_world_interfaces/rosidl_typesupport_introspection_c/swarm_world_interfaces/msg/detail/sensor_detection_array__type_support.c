// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_world_interfaces:msg/SensorDetectionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_world_interfaces/msg/detail/sensor_detection_array__rosidl_typesupport_introspection_c.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_world_interfaces/msg/detail/sensor_detection_array__functions.h"
#include "swarm_world_interfaces/msg/detail/sensor_detection_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensor_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `detections`
#include "swarm_world_interfaces/msg/sensor_detection.h"
// Member `detections`
#include "swarm_world_interfaces/msg/detail/sensor_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__msg__SensorDetectionArray__init(message_memory);
}

void swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_fini_function(void * message_memory)
{
  swarm_world_interfaces__msg__SensorDetectionArray__fini(message_memory);
}

size_t swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__size_function__SensorDetectionArray__detections(
  const void * untyped_member)
{
  const swarm_world_interfaces__msg__SensorDetection__Sequence * member =
    (const swarm_world_interfaces__msg__SensorDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__get_const_function__SensorDetectionArray__detections(
  const void * untyped_member, size_t index)
{
  const swarm_world_interfaces__msg__SensorDetection__Sequence * member =
    (const swarm_world_interfaces__msg__SensorDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__get_function__SensorDetectionArray__detections(
  void * untyped_member, size_t index)
{
  swarm_world_interfaces__msg__SensorDetection__Sequence * member =
    (swarm_world_interfaces__msg__SensorDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__fetch_function__SensorDetectionArray__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const swarm_world_interfaces__msg__SensorDetection * item =
    ((const swarm_world_interfaces__msg__SensorDetection *)
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__get_const_function__SensorDetectionArray__detections(untyped_member, index));
  swarm_world_interfaces__msg__SensorDetection * value =
    (swarm_world_interfaces__msg__SensorDetection *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__assign_function__SensorDetectionArray__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  swarm_world_interfaces__msg__SensorDetection * item =
    ((swarm_world_interfaces__msg__SensorDetection *)
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__get_function__SensorDetectionArray__detections(untyped_member, index));
  const swarm_world_interfaces__msg__SensorDetection * value =
    (const swarm_world_interfaces__msg__SensorDetection *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__resize_function__SensorDetectionArray__detections(
  void * untyped_member, size_t size)
{
  swarm_world_interfaces__msg__SensorDetection__Sequence * member =
    (swarm_world_interfaces__msg__SensorDetection__Sequence *)(untyped_member);
  swarm_world_interfaces__msg__SensorDetection__Sequence__fini(member);
  return swarm_world_interfaces__msg__SensorDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, header),  // bytes offset in struct
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
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, sensor_id),  // bytes offset in struct
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
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, parent_actor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, sensor_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horizontal_fov_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, horizontal_fov_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "upper_fov_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, upper_fov_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lower_fov_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, lower_fov_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__SensorDetectionArray, detections),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__size_function__SensorDetectionArray__detections,  // size() function pointer
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__get_const_function__SensorDetectionArray__detections,  // get_const(index) function pointer
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__get_function__SensorDetectionArray__detections,  // get(index) function pointer
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__fetch_function__SensorDetectionArray__detections,  // fetch(index, &value) function pointer
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__assign_function__SensorDetectionArray__detections,  // assign(index, value) function pointer
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__resize_function__SensorDetectionArray__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_members = {
  "swarm_world_interfaces__msg",  // message namespace
  "SensorDetectionArray",  // message name
  9,  // number of fields
  sizeof(swarm_world_interfaces__msg__SensorDetectionArray),
  false,  // has_any_key_member_
  swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_member_array,  // message members
  swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_type_support_handle = {
  0,
  &swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__SensorDetectionArray__get_type_hash,
  &swarm_world_interfaces__msg__SensorDetectionArray__get_type_description,
  &swarm_world_interfaces__msg__SensorDetectionArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, msg, SensorDetectionArray)() {
  swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, msg, SensorDetection)();
  if (!swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__msg__SensorDetectionArray__rosidl_typesupport_introspection_c__SensorDetectionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
