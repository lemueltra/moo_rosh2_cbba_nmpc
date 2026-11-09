// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:srv/DestroyActor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/destroy_actor.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__DESTROY_ACTOR__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__DESTROY_ACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/srv/detail/destroy_actor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_DestroyActor_Request_actor_id
{
public:
  Init_DestroyActor_Request_actor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::swarm_world_interfaces::srv::DestroyActor_Request actor_id(::swarm_world_interfaces::srv::DestroyActor_Request::_actor_id_type arg)
  {
    msg_.actor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::DestroyActor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::DestroyActor_Request>()
{
  return swarm_world_interfaces::srv::builder::Init_DestroyActor_Request_actor_id();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_DestroyActor_Response_error_message
{
public:
  explicit Init_DestroyActor_Response_error_message(::swarm_world_interfaces::srv::DestroyActor_Response & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::DestroyActor_Response error_message(::swarm_world_interfaces::srv::DestroyActor_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::DestroyActor_Response msg_;
};

class Init_DestroyActor_Response_success
{
public:
  Init_DestroyActor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DestroyActor_Response_error_message success(::swarm_world_interfaces::srv::DestroyActor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DestroyActor_Response_error_message(msg_);
  }

private:
  ::swarm_world_interfaces::srv::DestroyActor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::DestroyActor_Response>()
{
  return swarm_world_interfaces::srv::builder::Init_DestroyActor_Response_success();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_DestroyActor_Event_response
{
public:
  explicit Init_DestroyActor_Event_response(::swarm_world_interfaces::srv::DestroyActor_Event & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::DestroyActor_Event response(::swarm_world_interfaces::srv::DestroyActor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::DestroyActor_Event msg_;
};

class Init_DestroyActor_Event_request
{
public:
  explicit Init_DestroyActor_Event_request(::swarm_world_interfaces::srv::DestroyActor_Event & msg)
  : msg_(msg)
  {}
  Init_DestroyActor_Event_response request(::swarm_world_interfaces::srv::DestroyActor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DestroyActor_Event_response(msg_);
  }

private:
  ::swarm_world_interfaces::srv::DestroyActor_Event msg_;
};

class Init_DestroyActor_Event_info
{
public:
  Init_DestroyActor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DestroyActor_Event_request info(::swarm_world_interfaces::srv::DestroyActor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DestroyActor_Event_request(msg_);
  }

private:
  ::swarm_world_interfaces::srv::DestroyActor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::DestroyActor_Event>()
{
  return swarm_world_interfaces::srv::builder::Init_DestroyActor_Event_info();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__DESTROY_ACTOR__BUILDER_HPP_
