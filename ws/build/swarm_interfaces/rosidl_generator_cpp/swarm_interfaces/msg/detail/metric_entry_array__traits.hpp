// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/MetricEntryArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/metric_entry_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/metric_entry_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'entries'
#include "swarm_interfaces/msg/detail/metric_entry__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MetricEntryArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: model_based
  {
    out << "model_based: ";
    rosidl_generator_traits::value_to_yaml(msg.model_based, out);
    out << ", ";
  }

  // member: params_hash
  {
    out << "params_hash: ";
    rosidl_generator_traits::value_to_yaml(msg.params_hash, out);
    out << ", ";
  }

  // member: window_sec
  {
    out << "window_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.window_sec, out);
    out << ", ";
  }

  // member: warming_up
  {
    out << "warming_up: ";
    rosidl_generator_traits::value_to_yaml(msg.warming_up, out);
    out << ", ";
  }

  // member: n_frames_in_window
  {
    out << "n_frames_in_window: ";
    rosidl_generator_traits::value_to_yaml(msg.n_frames_in_window, out);
    out << ", ";
  }

  // member: entries
  {
    if (msg.entries.size() == 0) {
      out << "entries: []";
    } else {
      out << "entries: [";
      size_t pending_items = msg.entries.size();
      for (auto item : msg.entries) {
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
  const MetricEntryArray & msg,
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

  // member: model_based
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_based: ";
    rosidl_generator_traits::value_to_yaml(msg.model_based, out);
    out << "\n";
  }

  // member: params_hash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params_hash: ";
    rosidl_generator_traits::value_to_yaml(msg.params_hash, out);
    out << "\n";
  }

  // member: window_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "window_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.window_sec, out);
    out << "\n";
  }

  // member: warming_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warming_up: ";
    rosidl_generator_traits::value_to_yaml(msg.warming_up, out);
    out << "\n";
  }

  // member: n_frames_in_window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_frames_in_window: ";
    rosidl_generator_traits::value_to_yaml(msg.n_frames_in_window, out);
    out << "\n";
  }

  // member: entries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entries.size() == 0) {
      out << "entries: []\n";
    } else {
      out << "entries:\n";
      for (auto item : msg.entries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MetricEntryArray & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::MetricEntryArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::MetricEntryArray & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::MetricEntryArray>()
{
  return "swarm_interfaces::msg::MetricEntryArray";
}

template<>
inline const char * name<swarm_interfaces::msg::MetricEntryArray>()
{
  return "swarm_interfaces/msg/MetricEntryArray";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::MetricEntryArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::MetricEntryArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_interfaces::msg::MetricEntryArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__TRAITS_HPP_
