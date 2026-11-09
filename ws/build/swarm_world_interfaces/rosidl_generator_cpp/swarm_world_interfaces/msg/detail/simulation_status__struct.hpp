// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:msg/SimulationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/simulation_status.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__msg__SimulationStatus __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__msg__SimulationStatus __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimulationStatus_
{
  using Type = SimulationStatus_<ContainerAllocator>;

  explicit SimulationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_mode = 0;
      this->step_count = 0ull;
      this->elapsed_sim_time = 0.0;
      this->fixed_delta_seconds = 0.0;
      this->num_active_ugvs = 0ul;
      this->num_active_uavs = 0ul;
      this->num_active_sensors = 0ul;
      this->sync_waiting = false;
    }
  }

  explicit SimulationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_mode = 0;
      this->step_count = 0ull;
      this->elapsed_sim_time = 0.0;
      this->fixed_delta_seconds = 0.0;
      this->num_active_ugvs = 0ul;
      this->num_active_uavs = 0ul;
      this->num_active_sensors = 0ul;
      this->sync_waiting = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_mode_type =
    uint8_t;
  _time_mode_type time_mode;
  using _step_count_type =
    uint64_t;
  _step_count_type step_count;
  using _elapsed_sim_time_type =
    double;
  _elapsed_sim_time_type elapsed_sim_time;
  using _fixed_delta_seconds_type =
    double;
  _fixed_delta_seconds_type fixed_delta_seconds;
  using _num_active_ugvs_type =
    uint32_t;
  _num_active_ugvs_type num_active_ugvs;
  using _num_active_uavs_type =
    uint32_t;
  _num_active_uavs_type num_active_uavs;
  using _num_active_sensors_type =
    uint32_t;
  _num_active_sensors_type num_active_sensors;
  using _sync_waiting_type =
    bool;
  _sync_waiting_type sync_waiting;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_mode(
    const uint8_t & _arg)
  {
    this->time_mode = _arg;
    return *this;
  }
  Type & set__step_count(
    const uint64_t & _arg)
  {
    this->step_count = _arg;
    return *this;
  }
  Type & set__elapsed_sim_time(
    const double & _arg)
  {
    this->elapsed_sim_time = _arg;
    return *this;
  }
  Type & set__fixed_delta_seconds(
    const double & _arg)
  {
    this->fixed_delta_seconds = _arg;
    return *this;
  }
  Type & set__num_active_ugvs(
    const uint32_t & _arg)
  {
    this->num_active_ugvs = _arg;
    return *this;
  }
  Type & set__num_active_uavs(
    const uint32_t & _arg)
  {
    this->num_active_uavs = _arg;
    return *this;
  }
  Type & set__num_active_sensors(
    const uint32_t & _arg)
  {
    this->num_active_sensors = _arg;
    return *this;
  }
  Type & set__sync_waiting(
    const bool & _arg)
  {
    this->sync_waiting = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TIME_MODE_ASYNC =
    0u;
  static constexpr uint8_t TIME_MODE_SYNC =
    1u;

  // pointer types
  using RawPtr =
    swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__msg__SimulationStatus
    std::shared_ptr<swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__msg__SimulationStatus
    std::shared_ptr<swarm_world_interfaces::msg::SimulationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimulationStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_mode != other.time_mode) {
      return false;
    }
    if (this->step_count != other.step_count) {
      return false;
    }
    if (this->elapsed_sim_time != other.elapsed_sim_time) {
      return false;
    }
    if (this->fixed_delta_seconds != other.fixed_delta_seconds) {
      return false;
    }
    if (this->num_active_ugvs != other.num_active_ugvs) {
      return false;
    }
    if (this->num_active_uavs != other.num_active_uavs) {
      return false;
    }
    if (this->num_active_sensors != other.num_active_sensors) {
      return false;
    }
    if (this->sync_waiting != other.sync_waiting) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimulationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimulationStatus_

// alias to use template instance with default allocator
using SimulationStatus =
  swarm_world_interfaces::msg::SimulationStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulationStatus_<ContainerAllocator>::TIME_MODE_ASYNC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SimulationStatus_<ContainerAllocator>::TIME_MODE_SYNC;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__STRUCT_HPP_
