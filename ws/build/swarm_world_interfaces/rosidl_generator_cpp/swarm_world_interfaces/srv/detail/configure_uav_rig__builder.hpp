// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:srv/ConfigureUavRig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/configure_uav_rig.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__CONFIGURE_UAV_RIG__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__CONFIGURE_UAV_RIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/srv/detail/configure_uav_rig__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConfigureUavRig_Request_detach_current_sensors
{
public:
  explicit Init_ConfigureUavRig_Request_detach_current_sensors(::swarm_world_interfaces::srv::ConfigureUavRig_Request & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::ConfigureUavRig_Request detach_current_sensors(::swarm_world_interfaces::srv::ConfigureUavRig_Request::_detach_current_sensors_type arg)
  {
    msg_.detach_current_sensors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Request msg_;
};

class Init_ConfigureUavRig_Request_reset_to_default
{
public:
  explicit Init_ConfigureUavRig_Request_reset_to_default(::swarm_world_interfaces::srv::ConfigureUavRig_Request & msg)
  : msg_(msg)
  {}
  Init_ConfigureUavRig_Request_detach_current_sensors reset_to_default(::swarm_world_interfaces::srv::ConfigureUavRig_Request::_reset_to_default_type arg)
  {
    msg_.reset_to_default = std::move(arg);
    return Init_ConfigureUavRig_Request_detach_current_sensors(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Request msg_;
};

class Init_ConfigureUavRig_Request_rig_override
{
public:
  explicit Init_ConfigureUavRig_Request_rig_override(::swarm_world_interfaces::srv::ConfigureUavRig_Request & msg)
  : msg_(msg)
  {}
  Init_ConfigureUavRig_Request_reset_to_default rig_override(::swarm_world_interfaces::srv::ConfigureUavRig_Request::_rig_override_type arg)
  {
    msg_.rig_override = std::move(arg);
    return Init_ConfigureUavRig_Request_reset_to_default(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Request msg_;
};

class Init_ConfigureUavRig_Request_uav_id
{
public:
  Init_ConfigureUavRig_Request_uav_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureUavRig_Request_rig_override uav_id(::swarm_world_interfaces::srv::ConfigureUavRig_Request::_uav_id_type arg)
  {
    msg_.uav_id = std::move(arg);
    return Init_ConfigureUavRig_Request_rig_override(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::ConfigureUavRig_Request>()
{
  return swarm_world_interfaces::srv::builder::Init_ConfigureUavRig_Request_uav_id();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConfigureUavRig_Response_attached_sensor_ids
{
public:
  explicit Init_ConfigureUavRig_Response_attached_sensor_ids(::swarm_world_interfaces::srv::ConfigureUavRig_Response & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::ConfigureUavRig_Response attached_sensor_ids(::swarm_world_interfaces::srv::ConfigureUavRig_Response::_attached_sensor_ids_type arg)
  {
    msg_.attached_sensor_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Response msg_;
};

class Init_ConfigureUavRig_Response_error_message
{
public:
  explicit Init_ConfigureUavRig_Response_error_message(::swarm_world_interfaces::srv::ConfigureUavRig_Response & msg)
  : msg_(msg)
  {}
  Init_ConfigureUavRig_Response_attached_sensor_ids error_message(::swarm_world_interfaces::srv::ConfigureUavRig_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_ConfigureUavRig_Response_attached_sensor_ids(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Response msg_;
};

class Init_ConfigureUavRig_Response_success
{
public:
  Init_ConfigureUavRig_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureUavRig_Response_error_message success(::swarm_world_interfaces::srv::ConfigureUavRig_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ConfigureUavRig_Response_error_message(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::ConfigureUavRig_Response>()
{
  return swarm_world_interfaces::srv::builder::Init_ConfigureUavRig_Response_success();
}

}  // namespace swarm_world_interfaces


namespace swarm_world_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConfigureUavRig_Event_response
{
public:
  explicit Init_ConfigureUavRig_Event_response(::swarm_world_interfaces::srv::ConfigureUavRig_Event & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::srv::ConfigureUavRig_Event response(::swarm_world_interfaces::srv::ConfigureUavRig_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Event msg_;
};

class Init_ConfigureUavRig_Event_request
{
public:
  explicit Init_ConfigureUavRig_Event_request(::swarm_world_interfaces::srv::ConfigureUavRig_Event & msg)
  : msg_(msg)
  {}
  Init_ConfigureUavRig_Event_response request(::swarm_world_interfaces::srv::ConfigureUavRig_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ConfigureUavRig_Event_response(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Event msg_;
};

class Init_ConfigureUavRig_Event_info
{
public:
  Init_ConfigureUavRig_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureUavRig_Event_request info(::swarm_world_interfaces::srv::ConfigureUavRig_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ConfigureUavRig_Event_request(msg_);
  }

private:
  ::swarm_world_interfaces::srv::ConfigureUavRig_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::srv::ConfigureUavRig_Event>()
{
  return swarm_world_interfaces::srv::builder::Init_ConfigureUavRig_Event_info();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__CONFIGURE_UAV_RIG__BUILDER_HPP_
