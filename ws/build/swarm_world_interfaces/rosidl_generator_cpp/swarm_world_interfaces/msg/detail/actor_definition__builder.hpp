// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/ActorDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_definition.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/actor_definition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_ActorDefinition_attribute_values
{
public:
  explicit Init_ActorDefinition_attribute_values(::swarm_world_interfaces::msg::ActorDefinition & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::ActorDefinition attribute_values(::swarm_world_interfaces::msg::ActorDefinition::_attribute_values_type arg)
  {
    msg_.attribute_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorDefinition msg_;
};

class Init_ActorDefinition_attribute_keys
{
public:
  explicit Init_ActorDefinition_attribute_keys(::swarm_world_interfaces::msg::ActorDefinition & msg)
  : msg_(msg)
  {}
  Init_ActorDefinition_attribute_values attribute_keys(::swarm_world_interfaces::msg::ActorDefinition::_attribute_keys_type arg)
  {
    msg_.attribute_keys = std::move(arg);
    return Init_ActorDefinition_attribute_values(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorDefinition msg_;
};

class Init_ActorDefinition_parent_id
{
public:
  explicit Init_ActorDefinition_parent_id(::swarm_world_interfaces::msg::ActorDefinition & msg)
  : msg_(msg)
  {}
  Init_ActorDefinition_attribute_keys parent_id(::swarm_world_interfaces::msg::ActorDefinition::_parent_id_type arg)
  {
    msg_.parent_id = std::move(arg);
    return Init_ActorDefinition_attribute_keys(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorDefinition msg_;
};

class Init_ActorDefinition_initial_pose
{
public:
  explicit Init_ActorDefinition_initial_pose(::swarm_world_interfaces::msg::ActorDefinition & msg)
  : msg_(msg)
  {}
  Init_ActorDefinition_parent_id initial_pose(::swarm_world_interfaces::msg::ActorDefinition::_initial_pose_type arg)
  {
    msg_.initial_pose = std::move(arg);
    return Init_ActorDefinition_parent_id(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorDefinition msg_;
};

class Init_ActorDefinition_role_name
{
public:
  explicit Init_ActorDefinition_role_name(::swarm_world_interfaces::msg::ActorDefinition & msg)
  : msg_(msg)
  {}
  Init_ActorDefinition_initial_pose role_name(::swarm_world_interfaces::msg::ActorDefinition::_role_name_type arg)
  {
    msg_.role_name = std::move(arg);
    return Init_ActorDefinition_initial_pose(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorDefinition msg_;
};

class Init_ActorDefinition_type_id
{
public:
  explicit Init_ActorDefinition_type_id(::swarm_world_interfaces::msg::ActorDefinition & msg)
  : msg_(msg)
  {}
  Init_ActorDefinition_role_name type_id(::swarm_world_interfaces::msg::ActorDefinition::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_ActorDefinition_role_name(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorDefinition msg_;
};

class Init_ActorDefinition_actor_id
{
public:
  Init_ActorDefinition_actor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorDefinition_type_id actor_id(::swarm_world_interfaces::msg::ActorDefinition::_actor_id_type arg)
  {
    msg_.actor_id = std::move(arg);
    return Init_ActorDefinition_type_id(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorDefinition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::ActorDefinition>()
{
  return swarm_world_interfaces::msg::builder::Init_ActorDefinition_actor_id();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__BUILDER_HPP_
