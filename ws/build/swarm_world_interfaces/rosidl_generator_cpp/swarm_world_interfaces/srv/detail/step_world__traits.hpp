// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:srv/StepWorld.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/step_world.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/srv/detail/step_world__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace swarm_world_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StepWorld_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: step_count
  {
    out << "step_count: ";
    rosidl_generator_traits::value_to_yaml(msg.step_count, out);
    out << ", ";
  }

  // member: timeout_sec
  {
    out << "timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StepWorld_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: step_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_count: ";
    rosidl_generator_traits::value_to_yaml(msg.step_count, out);
    out << "\n";
  }

  // member: timeout_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StepWorld_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use swarm_world_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swarm_world_interfaces::srv::StepWorld_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::StepWorld_Request & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::StepWorld_Request>()
{
  return "swarm_world_interfaces::srv::StepWorld_Request";
}

template<>
inline const char * name<swarm_world_interfaces::srv::StepWorld_Request>()
{
  return "swarm_world_interfaces/srv/StepWorld_Request";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::StepWorld_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::StepWorld_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<swarm_world_interfaces::srv::StepWorld_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace swarm_world_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StepWorld_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: sim_time_seconds
  {
    out << "sim_time_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.sim_time_seconds, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StepWorld_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: sim_time_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sim_time_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.sim_time_seconds, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StepWorld_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use swarm_world_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swarm_world_interfaces::srv::StepWorld_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::StepWorld_Response & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::StepWorld_Response>()
{
  return "swarm_world_interfaces::srv::StepWorld_Response";
}

template<>
inline const char * name<swarm_world_interfaces::srv::StepWorld_Response>()
{
  return "swarm_world_interfaces/srv/StepWorld_Response";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::StepWorld_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::StepWorld_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::srv::StepWorld_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace swarm_world_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const StepWorld_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const StepWorld_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StepWorld_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use swarm_world_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swarm_world_interfaces::srv::StepWorld_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::StepWorld_Event & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::StepWorld_Event>()
{
  return "swarm_world_interfaces::srv::StepWorld_Event";
}

template<>
inline const char * name<swarm_world_interfaces::srv::StepWorld_Event>()
{
  return "swarm_world_interfaces/srv/StepWorld_Event";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::StepWorld_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::StepWorld_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<swarm_world_interfaces::srv::StepWorld_Request>::value && has_bounded_size<swarm_world_interfaces::srv::StepWorld_Response>::value> {};

template<>
struct is_message<swarm_world_interfaces::srv::StepWorld_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<swarm_world_interfaces::srv::StepWorld>()
{
  return "swarm_world_interfaces::srv::StepWorld";
}

template<>
inline const char * name<swarm_world_interfaces::srv::StepWorld>()
{
  return "swarm_world_interfaces/srv/StepWorld";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::StepWorld>
  : std::integral_constant<
    bool,
    has_fixed_size<swarm_world_interfaces::srv::StepWorld_Request>::value &&
    has_fixed_size<swarm_world_interfaces::srv::StepWorld_Response>::value
  >
{
};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::StepWorld>
  : std::integral_constant<
    bool,
    has_bounded_size<swarm_world_interfaces::srv::StepWorld_Request>::value &&
    has_bounded_size<swarm_world_interfaces::srv::StepWorld_Response>::value
  >
{
};

template<>
struct is_service<swarm_world_interfaces::srv::StepWorld>
  : std::true_type
{
};

template<>
struct is_service_request<swarm_world_interfaces::srv::StepWorld_Request>
  : std::true_type
{
};

template<>
struct is_service_response<swarm_world_interfaces::srv::StepWorld_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__TRAITS_HPP_
