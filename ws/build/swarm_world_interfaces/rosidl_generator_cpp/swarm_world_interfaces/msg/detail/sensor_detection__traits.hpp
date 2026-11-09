// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:msg/SensorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_detection.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/msg/detail/sensor_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bbox_pose_world'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'bbox_extent'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'aim_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace swarm_world_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: actor_id
  {
    out << "actor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actor_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: bbox_pose_world
  {
    out << "bbox_pose_world: ";
    to_flow_style_yaml(msg.bbox_pose_world, out);
    out << ", ";
  }

  // member: bbox_extent
  {
    out << "bbox_extent: ";
    to_flow_style_yaml(msg.bbox_extent, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: occluded
  {
    out << "occluded: ";
    rosidl_generator_traits::value_to_yaml(msg.occluded, out);
    out << ", ";
  }

  // member: partially_occluded
  {
    out << "partially_occluded: ";
    rosidl_generator_traits::value_to_yaml(msg.partially_occluded, out);
    out << ", ";
  }

  // member: occlusion_ratio
  {
    out << "occlusion_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.occlusion_ratio, out);
    out << ", ";
  }

  // member: aim_point
  {
    out << "aim_point: ";
    to_flow_style_yaml(msg.aim_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actor_id, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: bbox_pose_world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox_pose_world:\n";
    to_block_style_yaml(msg.bbox_pose_world, out, indentation + 2);
  }

  // member: bbox_extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox_extent:\n";
    to_block_style_yaml(msg.bbox_extent, out, indentation + 2);
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: occluded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occluded: ";
    rosidl_generator_traits::value_to_yaml(msg.occluded, out);
    out << "\n";
  }

  // member: partially_occluded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partially_occluded: ";
    rosidl_generator_traits::value_to_yaml(msg.partially_occluded, out);
    out << "\n";
  }

  // member: occlusion_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occlusion_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.occlusion_ratio, out);
    out << "\n";
  }

  // member: aim_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aim_point:\n";
    to_block_style_yaml(msg.aim_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace swarm_world_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use swarm_world_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swarm_world_interfaces::msg::SensorDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::msg::SensorDetection & msg)
{
  return swarm_world_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::msg::SensorDetection>()
{
  return "swarm_world_interfaces::msg::SensorDetection";
}

template<>
inline const char * name<swarm_world_interfaces::msg::SensorDetection>()
{
  return "swarm_world_interfaces/msg/SensorDetection";
}

template<>
struct has_fixed_size<swarm_world_interfaces::msg::SensorDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::msg::SensorDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::msg::SensorDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__TRAITS_HPP_
