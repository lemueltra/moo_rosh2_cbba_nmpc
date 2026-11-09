// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:srv/StepWorld.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/step_world.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/srv/detail/step_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_StepWorld_Request_timeout_sec
{
public:
  explicit Init_StepWorld_Request_timeout_sec(::swarm_world_interfaces::srv::StepWorld_Request & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::StepWorld_Request timeout_sec(::swarm_world_interfaces::srv::StepWorld_Request::_timeout_sec_type arg)
  {
    msg_.timeout_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Request msg_;
};

class Init_StepWorld_Request_step_count
{
public:
  Init_StepWorld_Request_step_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StepWorld_Request_timeout_sec step_count(::swarm_world_interfaces::srv::StepWorld_Request::_step_count_type arg)
  {
    msg_.step_count = std::move(arg);
    return Init_StepWorld_Request_timeout_sec(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::StepWorld_Request>()
{
  return swarm_world_interfaces::srv::builder::Init_StepWorld_Request_step_count();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_StepWorld_Response_error_message
{
public:
  explicit Init_StepWorld_Response_error_message(::swarm_world_interfaces::srv::StepWorld_Response & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::StepWorld_Response error_message(::swarm_world_interfaces::srv::StepWorld_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Response msg_;
};

class Init_StepWorld_Response_sim_time_seconds
{
public:
  explicit Init_StepWorld_Response_sim_time_seconds(::swarm_world_interfaces::srv::StepWorld_Response & msg)
  : msg_(msg)
  {}
  Init_StepWorld_Response_error_message sim_time_seconds(::swarm_world_interfaces::srv::StepWorld_Response::_sim_time_seconds_type arg)
  {
    msg_.sim_time_seconds = std::move(arg);
    return Init_StepWorld_Response_error_message(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Response msg_;
};

class Init_StepWorld_Response_frame_id
{
public:
  explicit Init_StepWorld_Response_frame_id(::swarm_world_interfaces::srv::StepWorld_Response & msg)
  : msg_(msg)
  {}
  Init_StepWorld_Response_sim_time_seconds frame_id(::swarm_world_interfaces::srv::StepWorld_Response::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_StepWorld_Response_sim_time_seconds(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Response msg_;
};

class Init_StepWorld_Response_success
{
public:
  Init_StepWorld_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StepWorld_Response_frame_id success(::swarm_world_interfaces::srv::StepWorld_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StepWorld_Response_frame_id(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::StepWorld_Response>()
{
  return swarm_world_interfaces::srv::builder::Init_StepWorld_Response_success();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_StepWorld_Event_response
{
public:
  explicit Init_StepWorld_Event_response(::swarm_world_interfaces::srv::StepWorld_Event & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::StepWorld_Event response(::swarm_world_interfaces::srv::StepWorld_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Event msg_;
};

class Init_StepWorld_Event_request
{
public:
  explicit Init_StepWorld_Event_request(::swarm_world_interfaces::srv::StepWorld_Event & msg)
  : msg_(msg)
  {}
  Init_StepWorld_Event_response request(::swarm_world_interfaces::srv::StepWorld_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StepWorld_Event_response(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Event msg_;
};

class Init_StepWorld_Event_info
{
public:
  Init_StepWorld_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StepWorld_Event_request info(::swarm_world_interfaces::srv::StepWorld_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StepWorld_Event_request(msg_);
  }

private:
  ::swarm_world_interfaces::srv::StepWorld_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::StepWorld_Event>()
{
  return swarm_world_interfaces::srv::builder::Init_StepWorld_Event_info();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__BUILDER_HPP_
