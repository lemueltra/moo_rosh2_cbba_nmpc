// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DroneCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_command.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/drone_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneCommand_vz
{
public:
  explicit Init_DroneCommand_vz(::swarm_interfaces::msg::DroneCommand & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DroneCommand vz(::swarm_interfaces::msg::DroneCommand::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneCommand msg_;
};

class Init_DroneCommand_yaw_rate
{
public:
  explicit Init_DroneCommand_yaw_rate(::swarm_interfaces::msg::DroneCommand & msg)
  : msg_(msg)
  {}
  Init_DroneCommand_vz yaw_rate(::swarm_interfaces::msg::DroneCommand::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_DroneCommand_vz(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneCommand msg_;
};

class Init_DroneCommand_vy
{
public:
  explicit Init_DroneCommand_vy(::swarm_interfaces::msg::DroneCommand & msg)
  : msg_(msg)
  {}
  Init_DroneCommand_yaw_rate vy(::swarm_interfaces::msg::DroneCommand::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_DroneCommand_yaw_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneCommand msg_;
};

class Init_DroneCommand_vx
{
public:
  explicit Init_DroneCommand_vx(::swarm_interfaces::msg::DroneCommand & msg)
  : msg_(msg)
  {}
  Init_DroneCommand_vy vx(::swarm_interfaces::msg::DroneCommand::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_DroneCommand_vy(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneCommand msg_;
};

class Init_DroneCommand_active
{
public:
  explicit Init_DroneCommand_active(::swarm_interfaces::msg::DroneCommand & msg)
  : msg_(msg)
  {}
  Init_DroneCommand_vx active(::swarm_interfaces::msg::DroneCommand::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_DroneCommand_vx(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneCommand msg_;
};

class Init_DroneCommand_drone_id
{
public:
  Init_DroneCommand_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneCommand_active drone_id(::swarm_interfaces::msg::DroneCommand::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_DroneCommand_active(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DroneCommand>()
{
  return swarm_interfaces::msg::builder::Init_DroneCommand_drone_id();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__BUILDER_HPP_
