// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/npc_spawn_summary.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_NpcSpawnSummary_elapsed_s
{
public:
  explicit Init_NpcSpawnSummary_elapsed_s(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::NpcSpawnSummary elapsed_s(::swarm_world_interfaces::msg::NpcSpawnSummary::_elapsed_s_type arg)
  {
    msg_.elapsed_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_pedestrian_types
{
public:
  explicit Init_NpcSpawnSummary_pedestrian_types(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_elapsed_s pedestrian_types(::swarm_world_interfaces::msg::NpcSpawnSummary::_pedestrian_types_type arg)
  {
    msg_.pedestrian_types = std::move(arg);
    return Init_NpcSpawnSummary_elapsed_s(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_vehicle_types
{
public:
  explicit Init_NpcSpawnSummary_vehicle_types(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_pedestrian_types vehicle_types(::swarm_world_interfaces::msg::NpcSpawnSummary::_vehicle_types_type arg)
  {
    msg_.vehicle_types = std::move(arg);
    return Init_NpcSpawnSummary_pedestrian_types(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_pedestrian_actor_ids
{
public:
  explicit Init_NpcSpawnSummary_pedestrian_actor_ids(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_vehicle_types pedestrian_actor_ids(::swarm_world_interfaces::msg::NpcSpawnSummary::_pedestrian_actor_ids_type arg)
  {
    msg_.pedestrian_actor_ids = std::move(arg);
    return Init_NpcSpawnSummary_vehicle_types(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_vehicle_actor_ids
{
public:
  explicit Init_NpcSpawnSummary_vehicle_actor_ids(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_pedestrian_actor_ids vehicle_actor_ids(::swarm_world_interfaces::msg::NpcSpawnSummary::_vehicle_actor_ids_type arg)
  {
    msg_.vehicle_actor_ids = std::move(arg);
    return Init_NpcSpawnSummary_pedestrian_actor_ids(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_spawned_pedestrians
{
public:
  explicit Init_NpcSpawnSummary_spawned_pedestrians(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_vehicle_actor_ids spawned_pedestrians(::swarm_world_interfaces::msg::NpcSpawnSummary::_spawned_pedestrians_type arg)
  {
    msg_.spawned_pedestrians = std::move(arg);
    return Init_NpcSpawnSummary_vehicle_actor_ids(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_spawned_vehicles
{
public:
  explicit Init_NpcSpawnSummary_spawned_vehicles(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_spawned_pedestrians spawned_vehicles(::swarm_world_interfaces::msg::NpcSpawnSummary::_spawned_vehicles_type arg)
  {
    msg_.spawned_vehicles = std::move(arg);
    return Init_NpcSpawnSummary_spawned_pedestrians(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_requested_pedestrians
{
public:
  explicit Init_NpcSpawnSummary_requested_pedestrians(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_spawned_vehicles requested_pedestrians(::swarm_world_interfaces::msg::NpcSpawnSummary::_requested_pedestrians_type arg)
  {
    msg_.requested_pedestrians = std::move(arg);
    return Init_NpcSpawnSummary_spawned_vehicles(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_requested_vehicles
{
public:
  explicit Init_NpcSpawnSummary_requested_vehicles(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_requested_pedestrians requested_vehicles(::swarm_world_interfaces::msg::NpcSpawnSummary::_requested_vehicles_type arg)
  {
    msg_.requested_vehicles = std::move(arg);
    return Init_NpcSpawnSummary_requested_pedestrians(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_seed
{
public:
  explicit Init_NpcSpawnSummary_seed(::swarm_world_interfaces::msg::NpcSpawnSummary & msg)
  : msg_(msg)
  {}
  Init_NpcSpawnSummary_requested_vehicles seed(::swarm_world_interfaces::msg::NpcSpawnSummary::_seed_type arg)
  {
    msg_.seed = std::move(arg);
    return Init_NpcSpawnSummary_requested_vehicles(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

class Init_NpcSpawnSummary_header
{
public:
  Init_NpcSpawnSummary_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NpcSpawnSummary_seed header(::swarm_world_interfaces::msg::NpcSpawnSummary::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NpcSpawnSummary_seed(msg_);
  }

private:
  ::swarm_world_interfaces::msg::NpcSpawnSummary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::NpcSpawnSummary>()
{
  return swarm_world_interfaces::msg::builder::Init_NpcSpawnSummary_header();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__BUILDER_HPP_
