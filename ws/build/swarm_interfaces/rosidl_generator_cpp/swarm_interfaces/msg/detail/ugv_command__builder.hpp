// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UgvCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_command.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/ugv_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UgvCommand_active_cmd
{
public:
  explicit Init_UgvCommand_active_cmd(::swarm_interfaces::msg::UgvCommand & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UgvCommand active_cmd(::swarm_interfaces::msg::UgvCommand::_active_cmd_type arg)
  {
    msg_.active_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommand msg_;
};

class Init_UgvCommand_reverse
{
public:
  explicit Init_UgvCommand_reverse(::swarm_interfaces::msg::UgvCommand & msg)
  : msg_(msg)
  {}
  Init_UgvCommand_active_cmd reverse(::swarm_interfaces::msg::UgvCommand::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_UgvCommand_active_cmd(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommand msg_;
};

class Init_UgvCommand_hand_brake
{
public:
  explicit Init_UgvCommand_hand_brake(::swarm_interfaces::msg::UgvCommand & msg)
  : msg_(msg)
  {}
  Init_UgvCommand_reverse hand_brake(::swarm_interfaces::msg::UgvCommand::_hand_brake_type arg)
  {
    msg_.hand_brake = std::move(arg);
    return Init_UgvCommand_reverse(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommand msg_;
};

class Init_UgvCommand_brake
{
public:
  explicit Init_UgvCommand_brake(::swarm_interfaces::msg::UgvCommand & msg)
  : msg_(msg)
  {}
  Init_UgvCommand_hand_brake brake(::swarm_interfaces::msg::UgvCommand::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_UgvCommand_hand_brake(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommand msg_;
};

class Init_UgvCommand_steer
{
public:
  explicit Init_UgvCommand_steer(::swarm_interfaces::msg::UgvCommand & msg)
  : msg_(msg)
  {}
  Init_UgvCommand_brake steer(::swarm_interfaces::msg::UgvCommand::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return Init_UgvCommand_brake(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommand msg_;
};

class Init_UgvCommand_throttle
{
public:
  explicit Init_UgvCommand_throttle(::swarm_interfaces::msg::UgvCommand & msg)
  : msg_(msg)
  {}
  Init_UgvCommand_steer throttle(::swarm_interfaces::msg::UgvCommand::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_UgvCommand_steer(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommand msg_;
};

class Init_UgvCommand_ugv_id
{
public:
  Init_UgvCommand_ugv_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UgvCommand_throttle ugv_id(::swarm_interfaces::msg::UgvCommand::_ugv_id_type arg)
  {
    msg_.ugv_id = std::move(arg);
    return Init_UgvCommand_throttle(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UgvCommand>()
{
  return swarm_interfaces::msg::builder::Init_UgvCommand_ugv_id();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__BUILDER_HPP_
