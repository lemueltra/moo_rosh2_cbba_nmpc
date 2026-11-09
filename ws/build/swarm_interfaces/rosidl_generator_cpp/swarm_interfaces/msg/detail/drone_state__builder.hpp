// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DroneState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_state.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/drone_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneState_vz
{
public:
  explicit Init_DroneState_vz(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DroneState vz(::swarm_interfaces::msg::DroneState::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_z
{
public:
  explicit Init_DroneState_z(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_vz z(::swarm_interfaces::msg::DroneState::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_DroneState_vz(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_yaw_rate
{
public:
  explicit Init_DroneState_yaw_rate(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_z yaw_rate(::swarm_interfaces::msg::DroneState::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_DroneState_z(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_vy
{
public:
  explicit Init_DroneState_vy(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_yaw_rate vy(::swarm_interfaces::msg::DroneState::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_DroneState_yaw_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_vx
{
public:
  explicit Init_DroneState_vx(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_vy vx(::swarm_interfaces::msg::DroneState::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_DroneState_vy(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_yaw
{
public:
  explicit Init_DroneState_yaw(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_vx yaw(::swarm_interfaces::msg::DroneState::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_DroneState_vx(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_y
{
public:
  explicit Init_DroneState_y(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_yaw y(::swarm_interfaces::msg::DroneState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DroneState_yaw(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_x
{
public:
  explicit Init_DroneState_x(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_y x(::swarm_interfaces::msg::DroneState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DroneState_y(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_active
{
public:
  explicit Init_DroneState_active(::swarm_interfaces::msg::DroneState & msg)
  : msg_(msg)
  {}
  Init_DroneState_x active(::swarm_interfaces::msg::DroneState::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_DroneState_x(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

class Init_DroneState_drone_id
{
public:
  Init_DroneState_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneState_active drone_id(::swarm_interfaces::msg::DroneState::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_DroneState_active(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DroneState>()
{
  return swarm_interfaces::msg::builder::Init_DroneState_drone_id();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE__BUILDER_HPP_
