// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UavMetric.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_metric.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/uav_metric__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UavMetric_reference_age_s
{
public:
  explicit Init_UavMetric_reference_age_s(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UavMetric reference_age_s(::swarm_interfaces::msg::UavMetric::_reference_age_s_type arg)
  {
    msg_.reference_age_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_reference_z_clamped_flag
{
public:
  explicit Init_UavMetric_reference_z_clamped_flag(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_reference_age_s reference_z_clamped_flag(::swarm_interfaces::msg::UavMetric::_reference_z_clamped_flag_type arg)
  {
    msg_.reference_z_clamped_flag = std::move(arg);
    return Init_UavMetric_reference_age_s(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_reference_z_clamped
{
public:
  explicit Init_UavMetric_reference_z_clamped(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_reference_z_clamped_flag reference_z_clamped(::swarm_interfaces::msg::UavMetric::_reference_z_clamped_type arg)
  {
    msg_.reference_z_clamped = std::move(arg);
    return Init_UavMetric_reference_z_clamped_flag(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_reference_z_requested
{
public:
  explicit Init_UavMetric_reference_z_requested(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_reference_z_clamped reference_z_requested(::swarm_interfaces::msg::UavMetric::_reference_z_requested_type arg)
  {
    msg_.reference_z_requested = std::move(arg);
    return Init_UavMetric_reference_z_clamped(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_reference_relative
{
public:
  explicit Init_UavMetric_reference_relative(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_reference_z_requested reference_relative(::swarm_interfaces::msg::UavMetric::_reference_relative_type arg)
  {
    msg_.reference_relative = std::move(arg);
    return Init_UavMetric_reference_z_requested(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_has_reference
{
public:
  explicit Init_UavMetric_has_reference(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_reference_relative has_reference(::swarm_interfaces::msg::UavMetric::_has_reference_type arg)
  {
    msg_.has_reference = std::move(arg);
    return Init_UavMetric_reference_relative(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_yaw_error
{
public:
  explicit Init_UavMetric_yaw_error(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_has_reference yaw_error(::swarm_interfaces::msg::UavMetric::_yaw_error_type arg)
  {
    msg_.yaw_error = std::move(arg);
    return Init_UavMetric_has_reference(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_position_error
{
public:
  explicit Init_UavMetric_position_error(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_yaw_error position_error(::swarm_interfaces::msg::UavMetric::_position_error_type arg)
  {
    msg_.position_error = std::move(arg);
    return Init_UavMetric_yaw_error(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_sensor_streams
{
public:
  explicit Init_UavMetric_sensor_streams(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_position_error sensor_streams(::swarm_interfaces::msg::UavMetric::_sensor_streams_type arg)
  {
    msg_.sensor_streams = std::move(arg);
    return Init_UavMetric_position_error(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_detections_now
{
public:
  explicit Init_UavMetric_detections_now(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_sensor_streams detections_now(::swarm_interfaces::msg::UavMetric::_detections_now_type arg)
  {
    msg_.detections_now = std::move(arg);
    return Init_UavMetric_sensor_streams(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_los
{
public:
  explicit Init_UavMetric_los(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_detections_now los(::swarm_interfaces::msg::UavMetric::_los_type arg)
  {
    msg_.los = std::move(arg);
    return Init_UavMetric_detections_now(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_latency_ms
{
public:
  explicit Init_UavMetric_latency_ms(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_los latency_ms(::swarm_interfaces::msg::UavMetric::_latency_ms_type arg)
  {
    msg_.latency_ms = std::move(arg);
    return Init_UavMetric_los(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_ugv_distance_m
{
public:
  explicit Init_UavMetric_ugv_distance_m(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_latency_ms ugv_distance_m(::swarm_interfaces::msg::UavMetric::_ugv_distance_m_type arg)
  {
    msg_.ugv_distance_m = std::move(arg);
    return Init_UavMetric_latency_ms(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_nearest_ugv_id
{
public:
  explicit Init_UavMetric_nearest_ugv_id(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_ugv_distance_m nearest_ugv_id(::swarm_interfaces::msg::UavMetric::_nearest_ugv_id_type arg)
  {
    msg_.nearest_ugv_id = std::move(arg);
    return Init_UavMetric_ugv_distance_m(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_has_link
{
public:
  explicit Init_UavMetric_has_link(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_nearest_ugv_id has_link(::swarm_interfaces::msg::UavMetric::_has_link_type arg)
  {
    msg_.has_link = std::move(arg);
    return Init_UavMetric_nearest_ugv_id(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_yaw_rate
{
public:
  explicit Init_UavMetric_yaw_rate(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_has_link yaw_rate(::swarm_interfaces::msg::UavMetric::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_UavMetric_has_link(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_speed_3d
{
public:
  explicit Init_UavMetric_speed_3d(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_yaw_rate speed_3d(::swarm_interfaces::msg::UavMetric::_speed_3d_type arg)
  {
    msg_.speed_3d = std::move(arg);
    return Init_UavMetric_yaw_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_vz
{
public:
  explicit Init_UavMetric_vz(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_speed_3d vz(::swarm_interfaces::msg::UavMetric::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_UavMetric_speed_3d(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_vy
{
public:
  explicit Init_UavMetric_vy(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_vz vy(::swarm_interfaces::msg::UavMetric::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_UavMetric_vz(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_vx
{
public:
  explicit Init_UavMetric_vx(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_vy vx(::swarm_interfaces::msg::UavMetric::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_UavMetric_vy(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_z
{
public:
  explicit Init_UavMetric_z(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_vx z(::swarm_interfaces::msg::UavMetric::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_UavMetric_vx(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_yaw
{
public:
  explicit Init_UavMetric_yaw(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_z yaw(::swarm_interfaces::msg::UavMetric::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_UavMetric_z(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_y
{
public:
  explicit Init_UavMetric_y(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_yaw y(::swarm_interfaces::msg::UavMetric::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_UavMetric_yaw(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_x
{
public:
  explicit Init_UavMetric_x(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_y x(::swarm_interfaces::msg::UavMetric::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_UavMetric_y(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_mode
{
public:
  explicit Init_UavMetric_mode(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_x mode(::swarm_interfaces::msg::UavMetric::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_UavMetric_x(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_active
{
public:
  explicit Init_UavMetric_active(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_mode active(::swarm_interfaces::msg::UavMetric::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_UavMetric_mode(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_drone_id
{
public:
  explicit Init_UavMetric_drone_id(::swarm_interfaces::msg::UavMetric & msg)
  : msg_(msg)
  {}
  Init_UavMetric_active drone_id(::swarm_interfaces::msg::UavMetric::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_UavMetric_active(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

class Init_UavMetric_header
{
public:
  Init_UavMetric_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavMetric_drone_id header(::swarm_interfaces::msg::UavMetric::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UavMetric_drone_id(msg_);
  }

private:
  ::swarm_interfaces::msg::UavMetric msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UavMetric>()
{
  return swarm_interfaces::msg::builder::Init_UavMetric_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__BUILDER_HPP_
