// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/UavMetric.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_metric.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/uav_metric__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UavMetric & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: speed_3d
  {
    out << "speed_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_3d, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: has_link
  {
    out << "has_link: ";
    rosidl_generator_traits::value_to_yaml(msg.has_link, out);
    out << ", ";
  }

  // member: nearest_ugv_id
  {
    out << "nearest_ugv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.nearest_ugv_id, out);
    out << ", ";
  }

  // member: ugv_distance_m
  {
    out << "ugv_distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.ugv_distance_m, out);
    out << ", ";
  }

  // member: latency_ms
  {
    out << "latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_ms, out);
    out << ", ";
  }

  // member: los
  {
    out << "los: ";
    rosidl_generator_traits::value_to_yaml(msg.los, out);
    out << ", ";
  }

  // member: detections_now
  {
    out << "detections_now: ";
    rosidl_generator_traits::value_to_yaml(msg.detections_now, out);
    out << ", ";
  }

  // member: sensor_streams
  {
    out << "sensor_streams: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_streams, out);
    out << ", ";
  }

  // member: position_error
  {
    out << "position_error: ";
    rosidl_generator_traits::value_to_yaml(msg.position_error, out);
    out << ", ";
  }

  // member: yaw_error
  {
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << ", ";
  }

  // member: has_reference
  {
    out << "has_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.has_reference, out);
    out << ", ";
  }

  // member: reference_relative
  {
    out << "reference_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_relative, out);
    out << ", ";
  }

  // member: reference_z_requested
  {
    out << "reference_z_requested: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_z_requested, out);
    out << ", ";
  }

  // member: reference_z_clamped
  {
    out << "reference_z_clamped: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_z_clamped, out);
    out << ", ";
  }

  // member: reference_z_clamped_flag
  {
    out << "reference_z_clamped_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_z_clamped_flag, out);
    out << ", ";
  }

  // member: reference_age_s
  {
    out << "reference_age_s: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_age_s, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UavMetric & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: speed_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_3d, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: has_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_link: ";
    rosidl_generator_traits::value_to_yaml(msg.has_link, out);
    out << "\n";
  }

  // member: nearest_ugv_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nearest_ugv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.nearest_ugv_id, out);
    out << "\n";
  }

  // member: ugv_distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ugv_distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.ugv_distance_m, out);
    out << "\n";
  }

  // member: latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_ms, out);
    out << "\n";
  }

  // member: los
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "los: ";
    rosidl_generator_traits::value_to_yaml(msg.los, out);
    out << "\n";
  }

  // member: detections_now
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detections_now: ";
    rosidl_generator_traits::value_to_yaml(msg.detections_now, out);
    out << "\n";
  }

  // member: sensor_streams
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_streams: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_streams, out);
    out << "\n";
  }

  // member: position_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_error: ";
    rosidl_generator_traits::value_to_yaml(msg.position_error, out);
    out << "\n";
  }

  // member: yaw_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << "\n";
  }

  // member: has_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.has_reference, out);
    out << "\n";
  }

  // member: reference_relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_relative, out);
    out << "\n";
  }

  // member: reference_z_requested
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_z_requested: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_z_requested, out);
    out << "\n";
  }

  // member: reference_z_clamped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_z_clamped: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_z_clamped, out);
    out << "\n";
  }

  // member: reference_z_clamped_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_z_clamped_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_z_clamped_flag, out);
    out << "\n";
  }

  // member: reference_age_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_age_s: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_age_s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UavMetric & msg, bool use_flow_style = false)
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

}  // namespace swarm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use swarm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swarm_interfaces::msg::UavMetric & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::UavMetric & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::UavMetric>()
{
  return "swarm_interfaces::msg::UavMetric";
}

template<>
inline const char * name<swarm_interfaces::msg::UavMetric>()
{
  return "swarm_interfaces/msg/UavMetric";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::UavMetric>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::UavMetric>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<swarm_interfaces::msg::UavMetric>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__TRAITS_HPP_
