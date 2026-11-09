// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/SensorDetectionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_detection_array.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/sensor_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorDetectionArray_detections
{
public:
  explicit Init_SensorDetectionArray_detections(::swarm_world_interfaces::msg::SensorDetectionArray & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::SensorDetectionArray detections(::swarm_world_interfaces::msg::SensorDetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

class Init_SensorDetectionArray_lower_fov_deg
{
public:
  explicit Init_SensorDetectionArray_lower_fov_deg(::swarm_world_interfaces::msg::SensorDetectionArray & msg)
  : msg_(msg)
  {}
  Init_SensorDetectionArray_detections lower_fov_deg(::swarm_world_interfaces::msg::SensorDetectionArray::_lower_fov_deg_type arg)
  {
    msg_.lower_fov_deg = std::move(arg);
    return Init_SensorDetectionArray_detections(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

class Init_SensorDetectionArray_upper_fov_deg
{
public:
  explicit Init_SensorDetectionArray_upper_fov_deg(::swarm_world_interfaces::msg::SensorDetectionArray & msg)
  : msg_(msg)
  {}
  Init_SensorDetectionArray_lower_fov_deg upper_fov_deg(::swarm_world_interfaces::msg::SensorDetectionArray::_upper_fov_deg_type arg)
  {
    msg_.upper_fov_deg = std::move(arg);
    return Init_SensorDetectionArray_lower_fov_deg(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

class Init_SensorDetectionArray_horizontal_fov_deg
{
public:
  explicit Init_SensorDetectionArray_horizontal_fov_deg(::swarm_world_interfaces::msg::SensorDetectionArray & msg)
  : msg_(msg)
  {}
  Init_SensorDetectionArray_upper_fov_deg horizontal_fov_deg(::swarm_world_interfaces::msg::SensorDetectionArray::_horizontal_fov_deg_type arg)
  {
    msg_.horizontal_fov_deg = std::move(arg);
    return Init_SensorDetectionArray_upper_fov_deg(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

class Init_SensorDetectionArray_range
{
public:
  explicit Init_SensorDetectionArray_range(::swarm_world_interfaces::msg::SensorDetectionArray & msg)
  : msg_(msg)
  {}
  Init_SensorDetectionArray_horizontal_fov_deg range(::swarm_world_interfaces::msg::SensorDetectionArray::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_SensorDetectionArray_horizontal_fov_deg(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

class Init_SensorDetectionArray_sensor_type
{
public:
  explicit Init_SensorDetectionArray_sensor_type(::swarm_world_interfaces::msg::SensorDetectionArray & msg)
  : msg_(msg)
  {}
  Init_SensorDetectionArray_range sensor_type(::swarm_world_interfaces::msg::SensorDetectionArray::_sensor_type_type arg)
  {
    msg_.sensor_type = std::move(arg);
    return Init_SensorDetectionArray_range(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

class Init_SensorDetectionArray_parent_actor_id
{
public:
  explicit Init_SensorDetectionArray_parent_actor_id(::swarm_world_interfaces::msg::SensorDetectionArray & msg)
  : msg_(msg)
  {}
  Init_SensorDetectionArray_sensor_type parent_actor_id(::swarm_world_interfaces::msg::SensorDetectionArray::_parent_actor_id_type arg)
  {
    msg_.parent_actor_id = std::move(arg);
    return Init_SensorDetectionArray_sensor_type(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

class Init_SensorDetectionArray_sensor_id
{
public:
  explicit Init_SensorDetectionArray_sensor_id(::swarm_world_interfaces::msg::SensorDetectionArray & msg)
  : msg_(msg)
  {}
  Init_SensorDetectionArray_parent_actor_id sensor_id(::swarm_world_interfaces::msg::SensorDetectionArray::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_SensorDetectionArray_parent_actor_id(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

class Init_SensorDetectionArray_header
{
public:
  Init_SensorDetectionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorDetectionArray_sensor_id header(::swarm_world_interfaces::msg::SensorDetectionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorDetectionArray_sensor_id(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::SensorDetectionArray>()
{
  return swarm_world_interfaces::msg::builder::Init_SensorDetectionArray_header();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__BUILDER_HPP_
