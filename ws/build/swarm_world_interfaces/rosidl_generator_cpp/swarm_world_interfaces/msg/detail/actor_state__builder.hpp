// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/ActorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_state.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/actor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_ActorState_control_source
{
public:
  explicit Init_ActorState_control_source(::swarm_world_interfaces::msg::ActorState & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::ActorState control_source(::swarm_world_interfaces::msg::ActorState::_control_source_type arg)
  {
    msg_.control_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

class Init_ActorState_active
{
public:
  explicit Init_ActorState_active(::swarm_world_interfaces::msg::ActorState & msg)
  : msg_(msg)
  {}
  Init_ActorState_control_source active(::swarm_world_interfaces::msg::ActorState::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_ActorState_control_source(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

class Init_ActorState_bounding_box_extent
{
public:
  explicit Init_ActorState_bounding_box_extent(::swarm_world_interfaces::msg::ActorState & msg)
  : msg_(msg)
  {}
  Init_ActorState_active bounding_box_extent(::swarm_world_interfaces::msg::ActorState::_bounding_box_extent_type arg)
  {
    msg_.bounding_box_extent = std::move(arg);
    return Init_ActorState_active(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

class Init_ActorState_acceleration
{
public:
  explicit Init_ActorState_acceleration(::swarm_world_interfaces::msg::ActorState & msg)
  : msg_(msg)
  {}
  Init_ActorState_bounding_box_extent acceleration(::swarm_world_interfaces::msg::ActorState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ActorState_bounding_box_extent(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

class Init_ActorState_twist
{
public:
  explicit Init_ActorState_twist(::swarm_world_interfaces::msg::ActorState & msg)
  : msg_(msg)
  {}
  Init_ActorState_acceleration twist(::swarm_world_interfaces::msg::ActorState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_ActorState_acceleration(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

class Init_ActorState_pose
{
public:
  explicit Init_ActorState_pose(::swarm_world_interfaces::msg::ActorState & msg)
  : msg_(msg)
  {}
  Init_ActorState_twist pose(::swarm_world_interfaces::msg::ActorState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ActorState_twist(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

class Init_ActorState_role_name
{
public:
  explicit Init_ActorState_role_name(::swarm_world_interfaces::msg::ActorState & msg)
  : msg_(msg)
  {}
  Init_ActorState_pose role_name(::swarm_world_interfaces::msg::ActorState::_role_name_type arg)
  {
    msg_.role_name = std::move(arg);
    return Init_ActorState_pose(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

class Init_ActorState_type_id
{
public:
  explicit Init_ActorState_type_id(::swarm_world_interfaces::msg::ActorState & msg)
  : msg_(msg)
  {}
  Init_ActorState_role_name type_id(::swarm_world_interfaces::msg::ActorState::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_ActorState_role_name(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

class Init_ActorState_actor_id
{
public:
  Init_ActorState_actor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorState_type_id actor_id(::swarm_world_interfaces::msg::ActorState::_actor_id_type arg)
  {
    msg_.actor_id = std::move(arg);
    return Init_ActorState_type_id(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::ActorState>()
{
  return swarm_world_interfaces::msg::builder::Init_ActorState_actor_id();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__BUILDER_HPP_
