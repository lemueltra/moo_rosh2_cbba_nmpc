// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DroneReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_reference.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/drone_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneReference_frame_relative
{
public:
  explicit Init_DroneReference_frame_relative(::swarm_interfaces::msg::DroneReference & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DroneReference frame_relative(::swarm_interfaces::msg::DroneReference::_frame_relative_type arg)
  {
    msg_.frame_relative = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReference msg_;
};

class Init_DroneReference_ugv_id
{
public:
  explicit Init_DroneReference_ugv_id(::swarm_interfaces::msg::DroneReference & msg)
  : msg_(msg)
  {}
  Init_DroneReference_frame_relative ugv_id(::swarm_interfaces::msg::DroneReference::_ugv_id_type arg)
  {
    msg_.ugv_id = std::move(arg);
    return Init_DroneReference_frame_relative(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReference msg_;
};

class Init_DroneReference_z
{
public:
  explicit Init_DroneReference_z(::swarm_interfaces::msg::DroneReference & msg)
  : msg_(msg)
  {}
  Init_DroneReference_ugv_id z(::swarm_interfaces::msg::DroneReference::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_DroneReference_ugv_id(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReference msg_;
};

class Init_DroneReference_max_speed
{
public:
  explicit Init_DroneReference_max_speed(::swarm_interfaces::msg::DroneReference & msg)
  : msg_(msg)
  {}
  Init_DroneReference_z max_speed(::swarm_interfaces::msg::DroneReference::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return Init_DroneReference_z(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReference msg_;
};

class Init_DroneReference_yaw
{
public:
  explicit Init_DroneReference_yaw(::swarm_interfaces::msg::DroneReference & msg)
  : msg_(msg)
  {}
  Init_DroneReference_max_speed yaw(::swarm_interfaces::msg::DroneReference::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_DroneReference_max_speed(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReference msg_;
};

class Init_DroneReference_y
{
public:
  explicit Init_DroneReference_y(::swarm_interfaces::msg::DroneReference & msg)
  : msg_(msg)
  {}
  Init_DroneReference_yaw y(::swarm_interfaces::msg::DroneReference::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DroneReference_yaw(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReference msg_;
};

class Init_DroneReference_x
{
public:
  explicit Init_DroneReference_x(::swarm_interfaces::msg::DroneReference & msg)
  : msg_(msg)
  {}
  Init_DroneReference_y x(::swarm_interfaces::msg::DroneReference::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DroneReference_y(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReference msg_;
};

class Init_DroneReference_drone_id
{
public:
  Init_DroneReference_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneReference_x drone_id(::swarm_interfaces::msg::DroneReference::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_DroneReference_x(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DroneReference>()
{
  return swarm_interfaces::msg::builder::Init_DroneReference_drone_id();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__BUILDER_HPP_
