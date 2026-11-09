// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:srv/SetTimeMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/set_time_mode.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/srv/detail/set_time_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace swarm_world_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTimeMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_mode
  {
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << ", ";
  }

  // member: fixed_delta_seconds
  {
    out << "fixed_delta_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_delta_seconds, out);
    out << ", ";
  }

  // member: sync_timeout_sec
  {
    out << "sync_timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_timeout_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTimeMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << "\n";
  }

  // member: fixed_delta_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_delta_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_delta_seconds, out);
    out << "\n";
  }

  // member: sync_timeout_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_timeout_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTimeMode_Request & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::srv::SetTimeMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::SetTimeMode_Request & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::SetTimeMode_Request>()
{
  return "swarm_world_interfaces::srv::SetTimeMode_Request";
}

template<>
inline const char * name<swarm_world_interfaces::srv::SetTimeMode_Request>()
{
  return "swarm_world_interfaces/srv/SetTimeMode_Request";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::SetTimeMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::SetTimeMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<swarm_world_interfaces::srv::SetTimeMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace swarm_world_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTimeMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const SetTimeMode_Response & msg,
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

inline std::string to_yaml(const SetTimeMode_Response & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::srv::SetTimeMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::SetTimeMode_Response & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::SetTimeMode_Response>()
{
  return "swarm_world_interfaces::srv::SetTimeMode_Response";
}

template<>
inline const char * name<swarm_world_interfaces::srv::SetTimeMode_Response>()
{
  return "swarm_world_interfaces/srv/SetTimeMode_Response";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::SetTimeMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::SetTimeMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::srv::SetTimeMode_Response>
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
  const SetTimeMode_Event & msg,
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
  const SetTimeMode_Event & msg,
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

inline std::string to_yaml(const SetTimeMode_Event & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::srv::SetTimeMode_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::SetTimeMode_Event & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::SetTimeMode_Event>()
{
  return "swarm_world_interfaces::srv::SetTimeMode_Event";
}

template<>
inline const char * name<swarm_world_interfaces::srv::SetTimeMode_Event>()
{
  return "swarm_world_interfaces/srv/SetTimeMode_Event";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::SetTimeMode_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::SetTimeMode_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<swarm_world_interfaces::srv::SetTimeMode_Request>::value && has_bounded_size<swarm_world_interfaces::srv::SetTimeMode_Response>::value> {};

template<>
struct is_message<swarm_world_interfaces::srv::SetTimeMode_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<swarm_world_interfaces::srv::SetTimeMode>()
{
  return "swarm_world_interfaces::srv::SetTimeMode";
}

template<>
inline const char * name<swarm_world_interfaces::srv::SetTimeMode>()
{
  return "swarm_world_interfaces/srv/SetTimeMode";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::SetTimeMode>
  : std::integral_constant<
    bool,
    has_fixed_size<swarm_world_interfaces::srv::SetTimeMode_Request>::value &&
    has_fixed_size<swarm_world_interfaces::srv::SetTimeMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::SetTimeMode>
  : std::integral_constant<
    bool,
    has_bounded_size<swarm_world_interfaces::srv::SetTimeMode_Request>::value &&
    has_bounded_size<swarm_world_interfaces::srv::SetTimeMode_Response>::value
  >
{
};

template<>
struct is_service<swarm_world_interfaces::srv::SetTimeMode>
  : std::true_type
{
};

template<>
struct is_service_request<swarm_world_interfaces::srv::SetTimeMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<swarm_world_interfaces::srv::SetTimeMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__TRAITS_HPP_
