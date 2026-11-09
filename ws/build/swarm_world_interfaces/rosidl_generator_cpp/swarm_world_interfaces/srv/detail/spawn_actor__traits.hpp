// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:srv/SpawnActor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/spawn_actor.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/srv/detail/spawn_actor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace swarm_world_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnActor_Request & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: transform
  {
    out << "transform: ";
    to_flow_style_yaml(msg.transform, out);
    out << ", ";
  }

  // member: parent_id
  {
    out << "parent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_id, out);
    out << ", ";
  }

  // member: attribute_keys
  {
    if (msg.attribute_keys.size() == 0) {
      out << "attribute_keys: []";
    } else {
      out << "attribute_keys: [";
      size_t pending_items = msg.attribute_keys.size();
      for (auto item : msg.attribute_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: attribute_values
  {
    if (msg.attribute_values.size() == 0) {
      out << "attribute_values: []";
    } else {
      out << "attribute_values: [";
      size_t pending_items = msg.attribute_values.size();
      for (auto item : msg.attribute_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SpawnActor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform:\n";
    to_block_style_yaml(msg.transform, out, indentation + 2);
  }

  // member: parent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_id, out);
    out << "\n";
  }

  // member: attribute_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attribute_keys.size() == 0) {
      out << "attribute_keys: []\n";
    } else {
      out << "attribute_keys:\n";
      for (auto item : msg.attribute_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: attribute_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attribute_values.size() == 0) {
      out << "attribute_values: []\n";
    } else {
      out << "attribute_values:\n";
      for (auto item : msg.attribute_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpawnActor_Request & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::srv::SpawnActor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::SpawnActor_Request & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::SpawnActor_Request>()
{
  return "swarm_world_interfaces::srv::SpawnActor_Request";
}

template<>
inline const char * name<swarm_world_interfaces::srv::SpawnActor_Request>()
{
  return "swarm_world_interfaces/srv/SpawnActor_Request";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::SpawnActor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::SpawnActor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::srv::SpawnActor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace swarm_world_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnActor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: actor_id
  {
    out << "actor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actor_id, out);
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
  const SpawnActor_Response & msg,
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

  // member: actor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actor_id, out);
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

inline std::string to_yaml(const SpawnActor_Response & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::srv::SpawnActor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::SpawnActor_Response & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::SpawnActor_Response>()
{
  return "swarm_world_interfaces::srv::SpawnActor_Response";
}

template<>
inline const char * name<swarm_world_interfaces::srv::SpawnActor_Response>()
{
  return "swarm_world_interfaces/srv/SpawnActor_Response";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::SpawnActor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::SpawnActor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::srv::SpawnActor_Response>
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
  const SpawnActor_Event & msg,
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
  const SpawnActor_Event & msg,
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

inline std::string to_yaml(const SpawnActor_Event & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::srv::SpawnActor_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::srv::SpawnActor_Event & msg)
{
  return swarm_world_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::srv::SpawnActor_Event>()
{
  return "swarm_world_interfaces::srv::SpawnActor_Event";
}

template<>
inline const char * name<swarm_world_interfaces::srv::SpawnActor_Event>()
{
  return "swarm_world_interfaces/srv/SpawnActor_Event";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::SpawnActor_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::SpawnActor_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<swarm_world_interfaces::srv::SpawnActor_Request>::value && has_bounded_size<swarm_world_interfaces::srv::SpawnActor_Response>::value> {};

template<>
struct is_message<swarm_world_interfaces::srv::SpawnActor_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<swarm_world_interfaces::srv::SpawnActor>()
{
  return "swarm_world_interfaces::srv::SpawnActor";
}

template<>
inline const char * name<swarm_world_interfaces::srv::SpawnActor>()
{
  return "swarm_world_interfaces/srv/SpawnActor";
}

template<>
struct has_fixed_size<swarm_world_interfaces::srv::SpawnActor>
  : std::integral_constant<
    bool,
    has_fixed_size<swarm_world_interfaces::srv::SpawnActor_Request>::value &&
    has_fixed_size<swarm_world_interfaces::srv::SpawnActor_Response>::value
  >
{
};

template<>
struct has_bounded_size<swarm_world_interfaces::srv::SpawnActor>
  : std::integral_constant<
    bool,
    has_bounded_size<swarm_world_interfaces::srv::SpawnActor_Request>::value &&
    has_bounded_size<swarm_world_interfaces::srv::SpawnActor_Response>::value
  >
{
};

template<>
struct is_service<swarm_world_interfaces::srv::SpawnActor>
  : std::true_type
{
};

template<>
struct is_service_request<swarm_world_interfaces::srv::SpawnActor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<swarm_world_interfaces::srv::SpawnActor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__TRAITS_HPP_
