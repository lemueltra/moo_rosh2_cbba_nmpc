// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from swarm_interfaces:msg/PlannerStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "swarm_interfaces/msg/detail/planner_status__functions.h"
#include "swarm_interfaces/msg/detail/planner_status__struct.hpp"
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

void PlannerStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) swarm_interfaces::msg::PlannerStatus(_init);
}

void PlannerStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<swarm_interfaces::msg::PlannerStatus *>(message_memory);
  typed_message->~PlannerStatus();
}

size_t size_function__PlannerStatus__drones(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<swarm_interfaces::msg::DroneStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlannerStatus__drones(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<swarm_interfaces::msg::DroneStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__PlannerStatus__drones(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<swarm_interfaces::msg::DroneStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlannerStatus__drones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const swarm_interfaces::msg::DroneStatus *>(
    get_const_function__PlannerStatus__drones(untyped_member, index));
  auto & value = *reinterpret_cast<swarm_interfaces::msg::DroneStatus *>(untyped_value);
  value = item;
}

void assign_function__PlannerStatus__drones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<swarm_interfaces::msg::DroneStatus *>(
    get_function__PlannerStatus__drones(untyped_member, index));
  const auto & value = *reinterpret_cast<const swarm_interfaces::msg::DroneStatus *>(untyped_value);
  item = value;
}

void resize_function__PlannerStatus__drones(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<swarm_interfaces::msg::DroneStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlannerStatus_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::PlannerStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drones",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<swarm_interfaces::msg::DroneStatus>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::PlannerStatus, drones),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlannerStatus__drones,  // size() function pointer
    get_const_function__PlannerStatus__drones,  // get_const(index) function pointer
    get_function__PlannerStatus__drones,  // get(index) function pointer
    fetch_function__PlannerStatus__drones,  // fetch(index, &value) function pointer
    assign_function__PlannerStatus__drones,  // assign(index, value) function pointer
    resize_function__PlannerStatus__drones  // resize(index) function pointer
  },
  {
    "cycle_time_us",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::PlannerStatus, cycle_time_us),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cycle_time_max_us",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::PlannerStatus, cycle_time_max_us),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "deadline_misses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::PlannerStatus, deadline_misses),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "clamped_references",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::PlannerStatus, clamped_references),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlannerStatus_message_members = {
  "swarm_interfaces::msg",  // message namespace
  "PlannerStatus",  // message name
  6,  // number of fields
  sizeof(swarm_interfaces::msg::PlannerStatus),
  false,  // has_any_key_member_
  PlannerStatus_message_member_array,  // message members
  PlannerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  PlannerStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlannerStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlannerStatus_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__PlannerStatus__get_type_hash,
  &swarm_interfaces__msg__PlannerStatus__get_type_description,
  &swarm_interfaces__msg__PlannerStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace swarm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_interfaces::msg::PlannerStatus>()
{
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::PlannerStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_interfaces, msg, PlannerStatus)() {
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::PlannerStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
