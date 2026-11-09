// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:srv/SpawnActor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/spawn_actor.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/srv/detail/spawn_actor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnActor_Request_attribute_values
{
public:
  explicit Init_SpawnActor_Request_attribute_values(::swarm_world_interfaces::srv::SpawnActor_Request & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SpawnActor_Request attribute_values(::swarm_world_interfaces::srv::SpawnActor_Request::_attribute_values_type arg)
  {
    msg_.attribute_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Request msg_;
};

class Init_SpawnActor_Request_attribute_keys
{
public:
  explicit Init_SpawnActor_Request_attribute_keys(::swarm_world_interfaces::srv::SpawnActor_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnActor_Request_attribute_values attribute_keys(::swarm_world_interfaces::srv::SpawnActor_Request::_attribute_keys_type arg)
  {
    msg_.attribute_keys = std::move(arg);
    return Init_SpawnActor_Request_attribute_values(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Request msg_;
};

class Init_SpawnActor_Request_parent_id
{
public:
  explicit Init_SpawnActor_Request_parent_id(::swarm_world_interfaces::srv::SpawnActor_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnActor_Request_attribute_keys parent_id(::swarm_world_interfaces::srv::SpawnActor_Request::_parent_id_type arg)
  {
    msg_.parent_id = std::move(arg);
    return Init_SpawnActor_Request_attribute_keys(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Request msg_;
};

class Init_SpawnActor_Request_transform
{
public:
  explicit Init_SpawnActor_Request_transform(::swarm_world_interfaces::srv::SpawnActor_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnActor_Request_parent_id transform(::swarm_world_interfaces::srv::SpawnActor_Request::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_SpawnActor_Request_parent_id(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Request msg_;
};

class Init_SpawnActor_Request_role_name
{
public:
  explicit Init_SpawnActor_Request_role_name(::swarm_world_interfaces::srv::SpawnActor_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnActor_Request_transform role_name(::swarm_world_interfaces::srv::SpawnActor_Request::_role_name_type arg)
  {
    msg_.role_name = std::move(arg);
    return Init_SpawnActor_Request_transform(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Request msg_;
};

class Init_SpawnActor_Request_type_id
{
public:
  Init_SpawnActor_Request_type_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnActor_Request_role_name type_id(::swarm_world_interfaces::srv::SpawnActor_Request::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_SpawnActor_Request_role_name(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SpawnActor_Request>()
{
  return swarm_world_interfaces::srv::builder::Init_SpawnActor_Request_type_id();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnActor_Response_error_message
{
public:
  explicit Init_SpawnActor_Response_error_message(::swarm_world_interfaces::srv::SpawnActor_Response & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SpawnActor_Response error_message(::swarm_world_interfaces::srv::SpawnActor_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Response msg_;
};

class Init_SpawnActor_Response_actor_id
{
public:
  explicit Init_SpawnActor_Response_actor_id(::swarm_world_interfaces::srv::SpawnActor_Response & msg)
  : msg_(msg)
  {}
  Init_SpawnActor_Response_error_message actor_id(::swarm_world_interfaces::srv::SpawnActor_Response::_actor_id_type arg)
  {
    msg_.actor_id = std::move(arg);
    return Init_SpawnActor_Response_error_message(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Response msg_;
};

class Init_SpawnActor_Response_success
{
public:
  Init_SpawnActor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnActor_Response_actor_id success(::swarm_world_interfaces::srv::SpawnActor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SpawnActor_Response_actor_id(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SpawnActor_Response>()
{
  return swarm_world_interfaces::srv::builder::Init_SpawnActor_Response_success();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnActor_Event_response
{
public:
  explicit Init_SpawnActor_Event_response(::swarm_world_interfaces::srv::SpawnActor_Event & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::SpawnActor_Event response(::swarm_world_interfaces::srv::SpawnActor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Event msg_;
};

class Init_SpawnActor_Event_request
{
public:
  explicit Init_SpawnActor_Event_request(::swarm_world_interfaces::srv::SpawnActor_Event & msg)
  : msg_(msg)
  {}
  Init_SpawnActor_Event_response request(::swarm_world_interfaces::srv::SpawnActor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SpawnActor_Event_response(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Event msg_;
};

class Init_SpawnActor_Event_info
{
public:
  Init_SpawnActor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnActor_Event_request info(::swarm_world_interfaces::srv::SpawnActor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SpawnActor_Event_request(msg_);
  }

private:
  ::swarm_world_interfaces::srv::SpawnActor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::SpawnActor_Event>()
{
  return swarm_world_interfaces::srv::builder::Init_SpawnActor_Event_info();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__BUILDER_HPP_
