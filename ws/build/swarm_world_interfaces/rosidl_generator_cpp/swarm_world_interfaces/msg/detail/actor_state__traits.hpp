// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:msg/ActorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_state.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/msg/detail/actor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration'
// Member 'bounding_box_extent'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace swarm_world_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: actor_id
  {
    out << "actor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actor_id, out);
    out << ", ";
  }

  // member: type_id
  {
    out << "type_id: ";
    rosidl_generator_traits::value_to_yaml(msg.type_id, out);
    out << ", ";
  }

  // member: role_name
  {
    out << "role_name: ";
    rosidl_generator_traits::value_to_yaml(msg.role_name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: bounding_box_extent
  {
    out << "bounding_box_extent: ";
    to_flow_style_yaml(msg.bounding_box_extent, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: control_source
  {
    out << "control_source: ";
    rosidl_generator_traits::value_to_yaml(msg.control_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActorState & msg,
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

  // member: type_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type_id: ";
    rosidl_generator_traits::value_to_yaml(msg.type_id, out);
    out << "\n";
  }

  // member: role_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "role_name: ";
    rosidl_generator_traits::value_to_yaml(msg.role_name, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: bounding_box_extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_extent:\n";
    to_block_style_yaml(msg.bounding_box_extent, out, indentation + 2);
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

  // member: control_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_source: ";
    rosidl_generator_traits::value_to_yaml(msg.control_source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActorState & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::msg::ActorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::msg::ActorState & msg)
{
  return swarm_world_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::msg::ActorState>()
{
  return "swarm_world_interfaces::msg::ActorState";
}

template<>
inline const char * name<swarm_world_interfaces::msg::ActorState>()
{
  return "swarm_world_interfaces/msg/ActorState";
}

template<>
struct has_fixed_size<swarm_world_interfaces::msg::ActorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::msg::ActorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::msg::ActorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__TRAITS_HPP_
