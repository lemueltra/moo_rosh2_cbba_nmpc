// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:srv/SetTimeMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/set_time_mode.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/srv/detail/set_time_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTimeMode_Request_sync_timeout_sec
{
public:
  explicit Init_SetTimeMode_Request_sync_timeout_sec(::swarm_world_interfaces::srv::SetTimeMode_Request & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SetTimeMode_Request sync_timeout_sec(::swarm_world_interfaces::srv::SetTimeMode_Request::_sync_timeout_sec_type arg)
  {
    msg_.sync_timeout_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetTimeMode_Request msg_;
};

class Init_SetTimeMode_Request_fixed_delta_seconds
{
public:
  explicit Init_SetTimeMode_Request_fixed_delta_seconds(::swarm_world_interfaces::srv::SetTimeMode_Request & msg)
  : msg_(msg)
  {}
  Init_SetTimeMode_Request_sync_timeout_sec fixed_delta_seconds(::swarm_world_interfaces::srv::SetTimeMode_Request::_fixed_delta_seconds_type arg)
  {
    msg_.fixed_delta_seconds = std::move(arg);
    return Init_SetTimeMode_Request_sync_timeout_sec(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetTimeMode_Request msg_;
};

class Init_SetTimeMode_Request_time_mode
{
public:
  Init_SetTimeMode_Request_time_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTimeMode_Request_fixed_delta_seconds time_mode(::swarm_world_interfaces::srv::SetTimeMode_Request::_time_mode_type arg)
  {
    msg_.time_mode = std::move(arg);
    return Init_SetTimeMode_Request_fixed_delta_seconds(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetTimeMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SetTimeMode_Request>()
{
  return swarm_world_interfaces::srv::builder::Init_SetTimeMode_Request_time_mode();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTimeMode_Response_error_message
{
public:
  explicit Init_SetTimeMode_Response_error_message(::swarm_world_interfaces::srv::SetTimeMode_Response & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SetTimeMode_Response error_message(::swarm_world_interfaces::srv::SetTimeMode_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetTimeMode_Response msg_;
};

class Init_SetTimeMode_Response_success
{
public:
  Init_SetTimeMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTimeMode_Response_error_message success(::swarm_world_interfaces::srv::SetTimeMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetTimeMode_Response_error_message(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetTimeMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SetTimeMode_Response>()
{
  return swarm_world_interfaces::srv::builder::Init_SetTimeMode_Response_success();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTimeMode_Event_response
{
public:
  explicit Init_SetTimeMode_Event_response(::swarm_world_interfaces::srv::SetTimeMode_Event & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SetTimeMode_Event response(::swarm_world_interfaces::srv::SetTimeMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetTimeMode_Event msg_;
};

class Init_SetTimeMode_Event_request
{
public:
  explicit Init_SetTimeMode_Event_request(::swarm_world_interfaces::srv::SetTimeMode_Event & msg)
  : msg_(msg)
  {}
  Init_SetTimeMode_Event_response request(::swarm_world_interfaces::srv::SetTimeMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetTimeMode_Event_response(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetTimeMode_Event msg_;
};

class Init_SetTimeMode_Event_info
{
public:
  Init_SetTimeMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTimeMode_Event_request info(::swarm_world_interfaces::srv::SetTimeMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetTimeMode_Event_request(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SetTimeMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SetTimeMode_Event>()
{
  return swarm_world_interfaces::srv::builder::Init_SetTimeMode_Event_info();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_TIME_MODE__BUILDER_HPP_
