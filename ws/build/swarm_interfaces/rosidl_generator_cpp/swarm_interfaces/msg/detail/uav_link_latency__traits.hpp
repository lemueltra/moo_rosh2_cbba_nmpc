// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/UavLinkLatency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_link_latency.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/uav_link_latency__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UavLinkLatency & msg,
  std::ostream & out)
{
  out << "{";
  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: ugv_id
  {
    out << "ugv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ugv_id, out);
    out << ", ";
  }

  // member: latency_ms
  {
    out << "latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_ms, out);
    out << ", ";
  }

  // member: distance_m
  {
    out << "distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_m, out);
    out << ", ";
  }

  // member: los
  {
    out << "los: ";
    rosidl_generator_traits::value_to_yaml(msg.los, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UavLinkLatency & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: ugv_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ugv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ugv_id, out);
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

  // member: distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_m, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UavLinkLatency & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::UavLinkLatency & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::UavLinkLatency & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::UavLinkLatency>()
{
  return "swarm_interfaces::msg::UavLinkLatency";
}

template<>
inline const char * name<swarm_interfaces::msg::UavLinkLatency>()
{
  return "swarm_interfaces/msg/UavLinkLatency";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::UavLinkLatency>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::UavLinkLatency>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<swarm_interfaces::msg::UavLinkLatency>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__TRAITS_HPP_
