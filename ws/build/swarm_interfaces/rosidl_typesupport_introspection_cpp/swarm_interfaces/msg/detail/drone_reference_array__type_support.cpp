// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from swarm_interfaces:msg/DroneReferenceArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "swarm_interfaces/msg/detail/drone_reference_array__functions.h"
#include "swarm_interfaces/msg/detail/drone_reference_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace swarm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DroneReferenceArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) swarm_interfaces::msg::DroneReferenceArray(_init);
}

void DroneReferenceArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<swarm_interfaces::msg::DroneReferenceArray *>(message_memory);
  typed_message->~DroneReferenceArray();
}

size_t size_function__DroneReferenceArray__references(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<swarm_interfaces::msg::DroneReference> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DroneReferenceArray__references(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<swarm_interfaces::msg::DroneReference> *>(untyped_member);
  return &member[index];
}

void * get_function__DroneReferenceArray__references(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<swarm_interfaces::msg::DroneReference> *>(untyped_member);
  return &member[index];
}

void fetch_function__DroneReferenceArray__references(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const swarm_interfaces::msg::DroneReference *>(
    get_const_function__DroneReferenceArray__references(untyped_member, index));
  auto & value = *reinterpret_cast<swarm_interfaces::msg::DroneReference *>(untyped_value);
  value = item;
}

void assign_function__DroneReferenceArray__references(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<swarm_interfaces::msg::DroneReference *>(
    get_function__DroneReferenceArray__references(untyped_member, index));
  const auto & value = *reinterpret_cast<const swarm_interfaces::msg::DroneReference *>(untyped_value);
  item = value;
}

void resize_function__DroneReferenceArray__references(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<swarm_interfaces::msg::DroneReference> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DroneReferenceArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::DroneReferenceArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "references",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<swarm_interfaces::msg::DroneReference>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::DroneReferenceArray, references),  // bytes offset in struct
    nullptr,  // default value
    size_function__DroneReferenceArray__references,  // size() function pointer
    get_const_function__DroneReferenceArray__references,  // get_const(index) function pointer
    get_function__DroneReferenceArray__references,  // get(index) function pointer
    fetch_function__DroneReferenceArray__references,  // fetch(index, &value) function pointer
    assign_function__DroneReferenceArray__references,  // assign(index, value) function pointer
    resize_function__DroneReferenceArray__references  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DroneReferenceArray_message_members = {
  "swarm_interfaces::msg",  // message namespace
  "DroneReferenceArray",  // message name
  2,  // number of fields
  sizeof(swarm_interfaces::msg::DroneReferenceArray),
  false,  // has_any_key_member_
  DroneReferenceArray_message_member_array,  // message members
  DroneReferenceArray_init_function,  // function to initialize message memory (memory has to be allocated)
  DroneReferenceArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DroneReferenceArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DroneReferenceArray_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__DroneReferenceArray__get_type_hash,
  &swarm_interfaces__msg__DroneReferenceArray__get_type_description,
  &swarm_interfaces__msg__DroneReferenceArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace swarm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_interfaces::msg::DroneReferenceArray>()
{
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::DroneReferenceArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_interfaces, msg, DroneReferenceArray)() {
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::DroneReferenceArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
