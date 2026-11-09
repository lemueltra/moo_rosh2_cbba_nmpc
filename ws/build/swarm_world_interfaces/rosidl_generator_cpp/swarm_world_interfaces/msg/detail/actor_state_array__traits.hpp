// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:msg/ActorStateArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_state_array.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/msg/detail/actor_state_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'actors'
#include "swarm_world_interfaces/msg/detail/actor_state__traits.hpp"

namespace swarm_world_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActorStateArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: actors
  {
    if (msg.actors.size() == 0) {
      out << "actors: []";
    } else {
      out << "actors: [";
      size_t pending_items = msg.actors.size();
      for (auto item : msg.actors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActorStateArray & msg,
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

  // member: actors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actors.size() == 0) {
      out << "actors: []\n";
    } else {
      out << "actors:\n";
      for (auto item : msg.actors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActorStateArray & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::msg::ActorStateArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::msg::ActorStateArray & msg)
{
  return swarm_world_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::msg::ActorStateArray>()
{
  return "swarm_world_interfaces::msg::ActorStateArray";
}

template<>
inline const char * name<swarm_world_interfaces::msg::ActorStateArray>()
{
  return "swarm_world_interfaces/msg/ActorStateArray";
}

template<>
struct has_fixed_size<swarm_world_interfaces::msg::ActorStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::msg::ActorStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::msg::ActorStateArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__TRAITS_HPP_
