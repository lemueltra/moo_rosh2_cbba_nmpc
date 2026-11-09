// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/SensorDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_definition.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/sensor_definition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorDefinition_attribute_values
{
public:
  explicit Init_SensorDefinition_attribute_values(::swarm_world_interfaces::msg::SensorDefinition & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::SensorDefinition attribute_values(::swarm_world_interfaces::msg::SensorDefinition::_attribute_values_type arg)
  {
    msg_.attribute_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDefinition msg_;
};

class Init_SensorDefinition_attribute_keys
{
public:
  explicit Init_SensorDefinition_attribute_keys(::swarm_world_interfaces::msg::SensorDefinition & msg)
  : msg_(msg)
  {}
  Init_SensorDefinition_attribute_values attribute_keys(::swarm_world_interfaces::msg::SensorDefinition::_attribute_keys_type arg)
  {
    msg_.attribute_keys = std::move(arg);
    return Init_SensorDefinition_attribute_values(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDefinition msg_;
};

class Init_SensorDefinition_transform
{
public:
  explicit Init_SensorDefinition_transform(::swarm_world_interfaces::msg::SensorDefinition & msg)
  : msg_(msg)
  {}
  Init_SensorDefinition_attribute_keys transform(::swarm_world_interfaces::msg::SensorDefinition::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_SensorDefinition_attribute_keys(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDefinition msg_;
};

class Init_SensorDefinition_parent_actor_id
{
public:
  explicit Init_SensorDefinition_parent_actor_id(::swarm_world_interfaces::msg::SensorDefinition & msg)
  : msg_(msg)
  {}
  Init_SensorDefinition_transform parent_actor_id(::swarm_world_interfaces::msg::SensorDefinition::_parent_actor_id_type arg)
  {
    msg_.parent_actor_id = std::move(arg);
    return Init_SensorDefinition_transform(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDefinition msg_;
};

class Init_SensorDefinition_type_id
{
public:
  explicit Init_SensorDefinition_type_id(::swarm_world_interfaces::msg::SensorDefinition & msg)
  : msg_(msg)
  {}
  Init_SensorDefinition_parent_actor_id type_id(::swarm_world_interfaces::msg::SensorDefinition::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_SensorDefinition_parent_actor_id(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDefinition msg_;
};

class Init_SensorDefinition_sensor_id
{
public:
  Init_SensorDefinition_sensor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorDefinition_type_id sensor_id(::swarm_world_interfaces::msg::SensorDefinition::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_SensorDefinition_type_id(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SensorDefinition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::SensorDefinition>()
{
  return swarm_world_interfaces::msg::builder::Init_SensorDefinition_sensor_id();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__BUILDER_HPP_
