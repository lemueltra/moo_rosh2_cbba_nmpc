// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from swarm_interfaces:msg/DroneCommandArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "swarm_interfaces/msg/detail/drone_command_array__functions.h"
#include "swarm_interfaces/msg/detail/drone_command_array__struct.hpp"
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

void DroneCommandArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) swarm_interfaces::msg::DroneCommandArray(_init);
}

void DroneCommandArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<swarm_interfaces::msg::DroneCommandArray *>(message_memory);
  typed_message->~DroneCommandArray();
}

size_t size_function__DroneCommandArray__commands(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<swarm_interfaces::msg::DroneCommand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DroneCommandArray__commands(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<swarm_interfaces::msg::DroneCommand> *>(untyped_member);
  return &member[index];
}

void * get_function__DroneCommandArray__commands(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<swarm_interfaces::msg::DroneCommand> *>(untyped_member);
  return &member[index];
}

void fetch_function__DroneCommandArray__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const swarm_interfaces::msg::DroneCommand *>(
    get_const_function__DroneCommandArray__commands(untyped_member, index));
  auto & value = *reinterpret_cast<swarm_interfaces::msg::DroneCommand *>(untyped_value);
  value = item;
}

void assign_function__DroneCommandArray__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<swarm_interfaces::msg::DroneCommand *>(
    get_function__DroneCommandArray__commands(untyped_member, index));
  const auto & value = *reinterpret_cast<const swarm_interfaces::msg::DroneCommand *>(untyped_value);
  item = value;
}

void resize_function__DroneCommandArray__commands(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<swarm_interfaces::msg::DroneCommand> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DroneCommandArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::DroneCommandArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commands",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<swarm_interfaces::msg::DroneCommand>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::DroneCommandArray, commands),  // bytes offset in struct
    nullptr,  // default value
    size_function__DroneCommandArray__commands,  // size() function pointer
    get_const_function__DroneCommandArray__commands,  // get_const(index) function pointer
    get_function__DroneCommandArray__commands,  // get(index) function pointer
    fetch_function__DroneCommandArray__commands,  // fetch(index, &value) function pointer
    assign_function__DroneCommandArray__commands,  // assign(index, value) function pointer
    resize_function__DroneCommandArray__commands  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DroneCommandArray_message_members = {
  "swarm_interfaces::msg",  // message namespace
  "DroneCommandArray",  // message name
  2,  // number of fields
  sizeof(swarm_interfaces::msg::DroneCommandArray),
  false,  // has_any_key_member_
  DroneCommandArray_message_member_array,  // message members
  DroneCommandArray_init_function,  // function to initialize message memory (memory has to be allocated)
  DroneCommandArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DroneCommandArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DroneCommandArray_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__DroneCommandArray__get_type_hash,
  &swarm_interfaces__msg__DroneCommandArray__get_type_description,
  &swarm_interfaces__msg__DroneCommandArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace swarm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_interfaces::msg::DroneCommandArray>()
{
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::DroneCommandArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_interfaces, msg, DroneCommandArray)() {
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::DroneCommandArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
