// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/SensorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_detection.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/sensor_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorDetection_aim_point
{
public:
  explicit Init_SensorDetection_aim_point(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::SensorDetection aim_point(::swarm_world_interfaces::msg::SensorDetection::_aim_point_type arg)
  {
    msg_.aim_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_occlusion_ratio
{
public:
  explicit Init_SensorDetection_occlusion_ratio(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_aim_point occlusion_ratio(::swarm_world_interfaces::msg::SensorDetection::_occlusion_ratio_type arg)
  {
    msg_.occlusion_ratio = std::move(arg);
    return Init_SensorDetection_aim_point(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_partially_occluded
{
public:
  explicit Init_SensorDetection_partially_occluded(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_occlusion_ratio partially_occluded(::swarm_world_interfaces::msg::SensorDetection::_partially_occluded_type arg)
  {
    msg_.partially_occluded = std::move(arg);
    return Init_SensorDetection_occlusion_ratio(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_occluded
{
public:
  explicit Init_SensorDetection_occluded(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_partially_occluded occluded(::swarm_world_interfaces::msg::SensorDetection::_occluded_type arg)
  {
    msg_.occluded = std::move(arg);
    return Init_SensorDetection_partially_occluded(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_elevation
{
public:
  explicit Init_SensorDetection_elevation(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_occluded elevation(::swarm_world_interfaces::msg::SensorDetection::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_SensorDetection_occluded(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_azimuth
{
public:
  explicit Init_SensorDetection_azimuth(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_elevation azimuth(::swarm_world_interfaces::msg::SensorDetection::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_SensorDetection_elevation(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_range
{
public:
  explicit Init_SensorDetection_range(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_azimuth range(::swarm_world_interfaces::msg::SensorDetection::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_SensorDetection_azimuth(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_bbox_extent
{
public:
  explicit Init_SensorDetection_bbox_extent(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_range bbox_extent(::swarm_world_interfaces::msg::SensorDetection::_bbox_extent_type arg)
  {
    msg_.bbox_extent = std::move(arg);
    return Init_SensorDetection_range(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_bbox_pose_world
{
public:
  explicit Init_SensorDetection_bbox_pose_world(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_bbox_extent bbox_pose_world(::swarm_world_interfaces::msg::SensorDetection::_bbox_pose_world_type arg)
  {
    msg_.bbox_pose_world = std::move(arg);
    return Init_SensorDetection_bbox_extent(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_class_name
{
public:
  explicit Init_SensorDetection_class_name(::swarm_world_interfaces::msg::SensorDetection & msg)
  : msg_(msg)
  {}
  Init_SensorDetection_bbox_pose_world class_name(::swarm_world_interfaces::msg::SensorDetection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_SensorDetection_bbox_pose_world(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

class Init_SensorDetection_actor_id
{
public:
  Init_SensorDetection_actor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorDetection_class_name actor_id(::swarm_world_interfaces::msg::SensorDetection::_actor_id_type arg)
  {
    msg_.actor_id = std::move(arg);
    return Init_SensorDetection_class_name(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::SensorDetection>()
{
  return swarm_world_interfaces::msg::builder::Init_SensorDetection_actor_id();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__BUILDER_HPP_
