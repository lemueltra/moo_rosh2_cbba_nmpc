// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/OptimizerFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/optimizer_feedback.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/optimizer_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const OptimizerFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: active_ids
  {
    if (msg.active_ids.size() == 0) {
      out << "active_ids: []";
    } else {
      out << "active_ids: [";
      size_t pending_items = msg.active_ids.size();
      for (auto item : msg.active_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: detections_mean_60s
  {
    out << "detections_mean_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.detections_mean_60s, out);
    out << ", ";
  }

  // member: latency_mean_60s
  {
    out << "latency_mean_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_mean_60s, out);
    out << ", ";
  }

  // member: latency_max_60s
  {
    out << "latency_max_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_max_60s, out);
    out << ", ";
  }

  // member: samples_in_window
  {
    out << "samples_in_window: ";
    rosidl_generator_traits::value_to_yaml(msg.samples_in_window, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OptimizerFeedback & msg,
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

  // member: active_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_ids.size() == 0) {
      out << "active_ids: []\n";
    } else {
      out << "active_ids:\n";
      for (auto item : msg.active_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: detections_mean_60s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detections_mean_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.detections_mean_60s, out);
    out << "\n";
  }

  // member: latency_mean_60s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency_mean_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_mean_60s, out);
    out << "\n";
  }

  // member: latency_max_60s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency_max_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_max_60s, out);
    out << "\n";
  }

  // member: samples_in_window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "samples_in_window: ";
    rosidl_generator_traits::value_to_yaml(msg.samples_in_window, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OptimizerFeedback & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::OptimizerFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::OptimizerFeedback & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::OptimizerFeedback>()
{
  return "swarm_interfaces::msg::OptimizerFeedback";
}

template<>
inline const char * name<swarm_interfaces::msg::OptimizerFeedback>()
{
  return "swarm_interfaces/msg/OptimizerFeedback";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::OptimizerFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::OptimizerFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_interfaces::msg::OptimizerFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__TRAITS_HPP_
