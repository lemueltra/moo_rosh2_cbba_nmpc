// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from swarm_world_interfaces:msg/SensorDetectionArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "swarm_world_interfaces/msg/detail/sensor_detection_array__functions.h"
#include "swarm_world_interfaces/msg/detail/sensor_detection_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace swarm_world_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorDetectionArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) swarm_world_interfaces::msg::SensorDetectionArray(_init);
}

void SensorDetectionArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<swarm_world_interfaces::msg::SensorDetectionArray *>(message_memory);
  typed_message->~SensorDetectionArray();
}

size_t size_function__SensorDetectionArray__detections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<swarm_world_interfaces::msg::SensorDetection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorDetectionArray__detections(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<swarm_world_interfaces::msg::SensorDetection> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorDetectionArray__detections(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<swarm_world_interfaces::msg::SensorDetection> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorDetectionArray__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const swarm_world_interfaces::msg::SensorDetection *>(
    get_const_function__SensorDetectionArray__detections(untyped_member, index));
  auto & value = *reinterpret_cast<swarm_world_interfaces::msg::SensorDetection *>(untyped_value);
  value = item;
}

void assign_function__SensorDetectionArray__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<swarm_world_interfaces::msg::SensorDetection *>(
    get_function__SensorDetectionArray__detections(untyped_member, index));
  const auto & value = *reinterpret_cast<const swarm_world_interfaces::msg::SensorDetection *>(untyped_value);
  item = value;
}

void resize_function__SensorDetectionArray__detections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<swarm_world_interfaces::msg::SensorDetection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorDetectionArray_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, sensor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parent_actor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, parent_actor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, sensor_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, range),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "horizontal_fov_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, horizontal_fov_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "upper_fov_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, upper_fov_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lower_fov_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, lower_fov_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<swarm_world_interfaces::msg::SensorDetection>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::SensorDetectionArray, detections),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorDetectionArray__detections,  // size() function pointer
    get_const_function__SensorDetectionArray__detections,  // get_const(index) function pointer
    get_function__SensorDetectionArray__detections,  // get(index) function pointer
    fetch_function__SensorDetectionArray__detections,  // fetch(index, &value) function pointer
    assign_function__SensorDetectionArray__detections,  // assign(index, value) function pointer
    resize_function__SensorDetectionArray__detections  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorDetectionArray_message_members = {
  "swarm_world_interfaces::msg",  // message namespace
  "SensorDetectionArray",  // message name
  9,  // number of fields
  sizeof(swarm_world_interfaces::msg::SensorDetectionArray),
  false,  // has_any_key_member_
  SensorDetectionArray_message_member_array,  // message members
  SensorDetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorDetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorDetectionArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorDetectionArray_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__SensorDetectionArray__get_type_hash,
  &swarm_world_interfaces__msg__SensorDetectionArray__get_type_description,
  &swarm_world_interfaces__msg__SensorDetectionArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace swarm_world_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::msg::SensorDetectionArray>()
{
  return &::swarm_world_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorDetectionArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, msg, SensorDetectionArray)() {
  return &::swarm_world_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorDetectionArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
