// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:srv/SetWeather.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/set_weather.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_WEATHER__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_WEATHER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/srv/detail/set_weather__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetWeather_Request_use_custom
{
public:
  explicit Init_SetWeather_Request_use_custom(::swarm_world_interfaces::srv::SetWeather_Request & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SetWeather_Request use_custom(::swarm_world_interfaces::srv::SetWeather_Request::_use_custom_type arg)
  {
    msg_.use_custom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetWeather_Request msg_;
};

class Init_SetWeather_Request_custom_parameters
{
public:
  explicit Init_SetWeather_Request_custom_parameters(::swarm_world_interfaces::srv::SetWeather_Request & msg)
  : msg_(msg)
  {}
  Init_SetWeather_Request_use_custom custom_parameters(::swarm_world_interfaces::srv::SetWeather_Request::_custom_parameters_type arg)
  {
    msg_.custom_parameters = std::move(arg);
    return Init_SetWeather_Request_use_custom(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetWeather_Request msg_;
};

class Init_SetWeather_Request_preset_name
{
public:
  Init_SetWeather_Request_preset_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWeather_Request_custom_parameters preset_name(::swarm_world_interfaces::srv::SetWeather_Request::_preset_name_type arg)
  {
    msg_.preset_name = std::move(arg);
    return Init_SetWeather_Request_custom_parameters(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetWeather_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SetWeather_Request>()
{
  return swarm_world_interfaces::srv::builder::Init_SetWeather_Request_preset_name();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetWeather_Response_error_message
{
public:
  explicit Init_SetWeather_Response_error_message(::swarm_world_interfaces::srv::SetWeather_Response & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SetWeather_Response error_message(::swarm_world_interfaces::srv::SetWeather_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetWeather_Response msg_;
};

class Init_SetWeather_Response_success
{
public:
  Init_SetWeather_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWeather_Response_error_message success(::swarm_world_interfaces::srv::SetWeather_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetWeather_Response_error_message(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetWeather_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SetWeather_Response>()
{
  return swarm_world_interfaces::srv::builder::Init_SetWeather_Response_success();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetWeather_Event_response
{
public:
  explicit Init_SetWeather_Event_response(::swarm_world_interfaces::srv::SetWeather_Event & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SetWeather_Event response(::swarm_world_interfaces::srv::SetWeather_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetWeather_Event msg_;
};

class Init_SetWeather_Event_request
{
public:
  explicit Init_SetWeather_Event_request(::swarm_world_interfaces::srv::SetWeather_Event & msg)
  : msg_(msg)
  {}
  Init_SetWeather_Event_response request(::swarm_world_interfaces::srv::SetWeather_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetWeather_Event_response(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetWeather_Event msg_;
};

class Init_SetWeather_Event_info
{
public:
  Init_SetWeather_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWeather_Event_request info(::swarm_world_interfaces::srv::SetWeather_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetWeather_Event_request(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetWeather_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SetWeather_Event>()
{
  return swarm_world_interfaces::srv::builder::Init_SetWeather_Event_info();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_WEATHER__BUILDER_HPP_
