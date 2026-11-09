// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/SimulationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/simulation_status.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/simulation_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_SimulationStatus_sync_waiting
{
public:
  explicit Init_SimulationStatus_sync_waiting(::swarm_world_interfaces::msg::SimulationStatus & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::SimulationStatus sync_waiting(::swarm_world_interfaces::msg::SimulationStatus::_sync_waiting_type arg)
  {
    msg_.sync_waiting = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

class Init_SimulationStatus_num_active_sensors
{
public:
  explicit Init_SimulationStatus_num_active_sensors(::swarm_world_interfaces::msg::SimulationStatus & msg)
  : msg_(msg)
  {}
  Init_SimulationStatus_sync_waiting num_active_sensors(::swarm_world_interfaces::msg::SimulationStatus::_num_active_sensors_type arg)
  {
    msg_.num_active_sensors = std::move(arg);
    return Init_SimulationStatus_sync_waiting(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

class Init_SimulationStatus_num_active_uavs
{
public:
  explicit Init_SimulationStatus_num_active_uavs(::swarm_world_interfaces::msg::SimulationStatus & msg)
  : msg_(msg)
  {}
  Init_SimulationStatus_num_active_sensors num_active_uavs(::swarm_world_interfaces::msg::SimulationStatus::_num_active_uavs_type arg)
  {
    msg_.num_active_uavs = std::move(arg);
    return Init_SimulationStatus_num_active_sensors(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

class Init_SimulationStatus_num_active_ugvs
{
public:
  explicit Init_SimulationStatus_num_active_ugvs(::swarm_world_interfaces::msg::SimulationStatus & msg)
  : msg_(msg)
  {}
  Init_SimulationStatus_num_active_uavs num_active_ugvs(::swarm_world_interfaces::msg::SimulationStatus::_num_active_ugvs_type arg)
  {
    msg_.num_active_ugvs = std::move(arg);
    return Init_SimulationStatus_num_active_uavs(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

class Init_SimulationStatus_fixed_delta_seconds
{
public:
  explicit Init_SimulationStatus_fixed_delta_seconds(::swarm_world_interfaces::msg::SimulationStatus & msg)
  : msg_(msg)
  {}
  Init_SimulationStatus_num_active_ugvs fixed_delta_seconds(::swarm_world_interfaces::msg::SimulationStatus::_fixed_delta_seconds_type arg)
  {
    msg_.fixed_delta_seconds = std::move(arg);
    return Init_SimulationStatus_num_active_ugvs(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

class Init_SimulationStatus_elapsed_sim_time
{
public:
  explicit Init_SimulationStatus_elapsed_sim_time(::swarm_world_interfaces::msg::SimulationStatus & msg)
  : msg_(msg)
  {}
  Init_SimulationStatus_fixed_delta_seconds elapsed_sim_time(::swarm_world_interfaces::msg::SimulationStatus::_elapsed_sim_time_type arg)
  {
    msg_.elapsed_sim_time = std::move(arg);
    return Init_SimulationStatus_fixed_delta_seconds(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

class Init_SimulationStatus_step_count
{
public:
  explicit Init_SimulationStatus_step_count(::swarm_world_interfaces::msg::SimulationStatus & msg)
  : msg_(msg)
  {}
  Init_SimulationStatus_elapsed_sim_time step_count(::swarm_world_interfaces::msg::SimulationStatus::_step_count_type arg)
  {
    msg_.step_count = std::move(arg);
    return Init_SimulationStatus_elapsed_sim_time(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

class Init_SimulationStatus_time_mode
{
public:
  explicit Init_SimulationStatus_time_mode(::swarm_world_interfaces::msg::SimulationStatus & msg)
  : msg_(msg)
  {}
  Init_SimulationStatus_step_count time_mode(::swarm_world_interfaces::msg::SimulationStatus::_time_mode_type arg)
  {
    msg_.time_mode = std::move(arg);
    return Init_SimulationStatus_step_count(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

class Init_SimulationStatus_header
{
public:
  Init_SimulationStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulationStatus_time_mode header(::swarm_world_interfaces::msg::SimulationStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SimulationStatus_time_mode(msg_);
  }

private:
  ::swarm_world_interfaces::msg::SimulationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::SimulationStatus>()
{
  return swarm_world_interfaces::msg::builder::Init_SimulationStatus_header();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__BUILDER_HPP_
