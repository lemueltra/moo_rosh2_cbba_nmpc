// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UgvState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_state.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/ugv_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UgvState_route_length_m
{
public:
  explicit Init_UgvState_route_length_m(::swarm_interfaces::msg::UgvState & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UgvState route_length_m(::swarm_interfaces::msg::UgvState::_route_length_m_type arg)
  {
    msg_.route_length_m = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvState msg_;
};

class Init_UgvState_v
{
public:
  explicit Init_UgvState_v(::swarm_interfaces::msg::UgvState & msg)
  : msg_(msg)
  {}
  Init_UgvState_route_length_m v(::swarm_interfaces::msg::UgvState::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_UgvState_route_length_m(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvState msg_;
};

class Init_UgvState_yaw
{
public:
  explicit Init_UgvState_yaw(::swarm_interfaces::msg::UgvState & msg)
  : msg_(msg)
  {}
  Init_UgvState_v yaw(::swarm_interfaces::msg::UgvState::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_UgvState_v(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvState msg_;
};

class Init_UgvState_y
{
public:
  explicit Init_UgvState_y(::swarm_interfaces::msg::UgvState & msg)
  : msg_(msg)
  {}
  Init_UgvState_yaw y(::swarm_interfaces::msg::UgvState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_UgvState_yaw(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvState msg_;
};

class Init_UgvState_x
{
public:
  explicit Init_UgvState_x(::swarm_interfaces::msg::UgvState & msg)
  : msg_(msg)
  {}
  Init_UgvState_y x(::swarm_interfaces::msg::UgvState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_UgvState_y(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvState msg_;
};

class Init_UgvState_active
{
public:
  explicit Init_UgvState_active(::swarm_interfaces::msg::UgvState & msg)
  : msg_(msg)
  {}
  Init_UgvState_x active(::swarm_interfaces::msg::UgvState::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_UgvState_x(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvState msg_;
};

class Init_UgvState_ugv_id
{
public:
  Init_UgvState_ugv_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UgvState_active ugv_id(::swarm_interfaces::msg::UgvState::_ugv_id_type arg)
  {
    msg_.ugv_id = std::move(arg);
    return Init_UgvState_active(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UgvState>()
{
  return swarm_interfaces::msg::builder::Init_UgvState_ugv_id();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__BUILDER_HPP_
