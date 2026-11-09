// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/ActorStateArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_state_array.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/actor_state_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_ActorStateArray_actors
{
public:
  explicit Init_ActorStateArray_actors(::swarm_world_interfaces::msg::ActorStateArray & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::ActorStateArray actors(::swarm_world_interfaces::msg::ActorStateArray::_actors_type arg)
  {
    msg_.actors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorStateArray msg_;
};

class Init_ActorStateArray_header
{
public:
  Init_ActorStateArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorStateArray_actors header(::swarm_world_interfaces::msg::ActorStateArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorStateArray_actors(msg_);
  }

private:
  ::swarm_world_interfaces::msg::ActorStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::ActorStateArray>()
{
  return swarm_world_interfaces::msg::builder::Init_ActorStateArray_header();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__BUILDER_HPP_
