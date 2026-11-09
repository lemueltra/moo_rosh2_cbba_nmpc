// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__functions.h"
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__struct.hpp"
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

void NpcSpawnSummary_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) swarm_world_interfaces::msg::NpcSpawnSummary(_init);
}

void NpcSpawnSummary_fini_function(void * message_memory)
{
  auto typed_message = static_cast<swarm_world_interfaces::msg::NpcSpawnSummary *>(message_memory);
  typed_message->~NpcSpawnSummary();
}

size_t size_function__NpcSpawnSummary__vehicle_actor_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NpcSpawnSummary__vehicle_actor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__NpcSpawnSummary__vehicle_actor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__NpcSpawnSummary__vehicle_actor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__NpcSpawnSummary__vehicle_actor_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__NpcSpawnSummary__vehicle_actor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__NpcSpawnSummary__vehicle_actor_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__NpcSpawnSummary__vehicle_actor_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NpcSpawnSummary__pedestrian_actor_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NpcSpawnSummary__pedestrian_actor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__NpcSpawnSummary__pedestrian_actor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__NpcSpawnSummary__pedestrian_actor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__NpcSpawnSummary__pedestrian_actor_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__NpcSpawnSummary__pedestrian_actor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__NpcSpawnSummary__pedestrian_actor_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__NpcSpawnSummary__pedestrian_actor_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NpcSpawnSummary__vehicle_types(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NpcSpawnSummary__vehicle_types(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__NpcSpawnSummary__vehicle_types(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__NpcSpawnSummary__vehicle_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__NpcSpawnSummary__vehicle_types(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__NpcSpawnSummary__vehicle_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__NpcSpawnSummary__vehicle_types(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__NpcSpawnSummary__vehicle_types(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NpcSpawnSummary__pedestrian_types(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NpcSpawnSummary__pedestrian_types(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__NpcSpawnSummary__pedestrian_types(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__NpcSpawnSummary__pedestrian_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__NpcSpawnSummary__pedestrian_types(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__NpcSpawnSummary__pedestrian_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__NpcSpawnSummary__pedestrian_types(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__NpcSpawnSummary__pedestrian_types(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NpcSpawnSummary_message_member_array[11] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "seed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, seed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "requested_vehicles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, requested_vehicles),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "requested_pedestrians",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, requested_pedestrians),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "spawned_vehicles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, spawned_vehicles),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "spawned_pedestrians",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, spawned_pedestrians),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_actor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, vehicle_actor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__NpcSpawnSummary__vehicle_actor_ids,  // size() function pointer
    get_const_function__NpcSpawnSummary__vehicle_actor_ids,  // get_const(index) function pointer
    get_function__NpcSpawnSummary__vehicle_actor_ids,  // get(index) function pointer
    fetch_function__NpcSpawnSummary__vehicle_actor_ids,  // fetch(index, &value) function pointer
    assign_function__NpcSpawnSummary__vehicle_actor_ids,  // assign(index, value) function pointer
    resize_function__NpcSpawnSummary__vehicle_actor_ids  // resize(index) function pointer
  },
  {
    "pedestrian_actor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, pedestrian_actor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__NpcSpawnSummary__pedestrian_actor_ids,  // size() function pointer
    get_const_function__NpcSpawnSummary__pedestrian_actor_ids,  // get_const(index) function pointer
    get_function__NpcSpawnSummary__pedestrian_actor_ids,  // get(index) function pointer
    fetch_function__NpcSpawnSummary__pedestrian_actor_ids,  // fetch(index, &value) function pointer
    assign_function__NpcSpawnSummary__pedestrian_actor_ids,  // assign(index, value) function pointer
    resize_function__NpcSpawnSummary__pedestrian_actor_ids  // resize(index) function pointer
  },
  {
    "vehicle_types",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, vehicle_types),  // bytes offset in struct
    nullptr,  // default value
    size_function__NpcSpawnSummary__vehicle_types,  // size() function pointer
    get_const_function__NpcSpawnSummary__vehicle_types,  // get_const(index) function pointer
    get_function__NpcSpawnSummary__vehicle_types,  // get(index) function pointer
    fetch_function__NpcSpawnSummary__vehicle_types,  // fetch(index, &value) function pointer
    assign_function__NpcSpawnSummary__vehicle_types,  // assign(index, value) function pointer
    resize_function__NpcSpawnSummary__vehicle_types  // resize(index) function pointer
  },
  {
    "pedestrian_types",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, pedestrian_types),  // bytes offset in struct
    nullptr,  // default value
    size_function__NpcSpawnSummary__pedestrian_types,  // size() function pointer
    get_const_function__NpcSpawnSummary__pedestrian_types,  // get_const(index) function pointer
    get_function__NpcSpawnSummary__pedestrian_types,  // get(index) function pointer
    fetch_function__NpcSpawnSummary__pedestrian_types,  // fetch(index, &value) function pointer
    assign_function__NpcSpawnSummary__pedestrian_types,  // assign(index, value) function pointer
    resize_function__NpcSpawnSummary__pedestrian_types  // resize(index) function pointer
  },
  {
    "elapsed_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces::msg::NpcSpawnSummary, elapsed_s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NpcSpawnSummary_message_members = {
  "swarm_world_interfaces::msg",  // message namespace
  "NpcSpawnSummary",  // message name
  11,  // number of fields
  sizeof(swarm_world_interfaces::msg::NpcSpawnSummary),
  false,  // has_any_key_member_
  NpcSpawnSummary_message_member_array,  // message members
  NpcSpawnSummary_init_function,  // function to initialize message memory (memory has to be allocated)
  NpcSpawnSummary_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NpcSpawnSummary_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NpcSpawnSummary_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_hash,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_description,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace swarm_world_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::msg::NpcSpawnSummary>()
{
  return &::swarm_world_interfaces::msg::rosidl_typesupport_introspection_cpp::NpcSpawnSummary_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, msg, NpcSpawnSummary)() {
  return &::swarm_world_interfaces::msg::rosidl_typesupport_introspection_cpp::NpcSpawnSummary_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
