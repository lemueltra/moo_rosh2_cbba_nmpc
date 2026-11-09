// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/OptimizerFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/optimizer_feedback.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__STRUCT_HPP_

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
# define DEPRECATED__swarm_interfaces__msg__OptimizerFeedback __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__OptimizerFeedback __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizerFeedback_
{
  using Type = OptimizerFeedback_<ContainerAllocator>;

  explicit OptimizerFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detections_mean_60s = 0.0;
      this->latency_mean_60s = 0.0;
      this->latency_max_60s = 0.0;
      this->samples_in_window = 0ul;
    }
  }

  explicit OptimizerFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detections_mean_60s = 0.0;
      this->latency_mean_60s = 0.0;
      this->latency_max_60s = 0.0;
      this->samples_in_window = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _active_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _active_ids_type active_ids;
  using _detections_mean_60s_type =
    double;
  _detections_mean_60s_type detections_mean_60s;
  using _latency_mean_60s_type =
    double;
  _latency_mean_60s_type latency_mean_60s;
  using _latency_max_60s_type =
    double;
  _latency_max_60s_type latency_max_60s;
  using _samples_in_window_type =
    uint32_t;
  _samples_in_window_type samples_in_window;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__active_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->active_ids = _arg;
    return *this;
  }
  Type & set__detections_mean_60s(
    const double & _arg)
  {
    this->detections_mean_60s = _arg;
    return *this;
  }
  Type & set__latency_mean_60s(
    const double & _arg)
  {
    this->latency_mean_60s = _arg;
    return *this;
  }
  Type & set__latency_max_60s(
    const double & _arg)
  {
    this->latency_max_60s = _arg;
    return *this;
  }
  Type & set__samples_in_window(
    const uint32_t & _arg)
  {
    this->samples_in_window = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__OptimizerFeedback
    std::shared_ptr<swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__OptimizerFeedback
    std::shared_ptr<swarm_interfaces::msg::OptimizerFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizerFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->active_ids != other.active_ids) {
      return false;
    }
    if (this->detections_mean_60s != other.detections_mean_60s) {
      return false;
    }
    if (this->latency_mean_60s != other.latency_mean_60s) {
      return false;
    }
    if (this->latency_max_60s != other.latency_max_60s) {
      return false;
    }
    if (this->samples_in_window != other.samples_in_window) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizerFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizerFeedback_

// alias to use template instance with default allocator
using OptimizerFeedback =
  swarm_interfaces::msg::OptimizerFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__STRUCT_HPP_
