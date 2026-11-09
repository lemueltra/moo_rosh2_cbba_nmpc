// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/swarm_metrics.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__STRUCT_HPP_

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
// Member 'uavs'
#include "swarm_interfaces/msg/detail/uav_metric__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__SwarmMetrics __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__SwarmMetrics __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SwarmMetrics_
{
  using Type = SwarmMetrics_<ContainerAllocator>;

  explicit SwarmMetrics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active_count = 0ul;
      this->detections_mean_60s = 0.0;
      this->latency_mean_60s = 0.0;
      this->latency_max_60s = 0.0;
      this->samples_in_window = 0ul;
      this->window_capacity = 0ul;
      this->coverage_ratio = 0.0;
      this->ugv_weighted_coverage = 0.0;
      this->redundancy_score = 0.0;
      this->planner_cycle_us = 0.0;
      this->planner_deadline_misses = 0ul;
      this->clamped_references = 0ul;
      this->clock_hz = 0.0;
      this->sim_time_s = 0.0;
    }
  }

  explicit SwarmMetrics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active_count = 0ul;
      this->detections_mean_60s = 0.0;
      this->latency_mean_60s = 0.0;
      this->latency_max_60s = 0.0;
      this->samples_in_window = 0ul;
      this->window_capacity = 0ul;
      this->coverage_ratio = 0.0;
      this->ugv_weighted_coverage = 0.0;
      this->redundancy_score = 0.0;
      this->planner_cycle_us = 0.0;
      this->planner_deadline_misses = 0ul;
      this->clamped_references = 0ul;
      this->clock_hz = 0.0;
      this->sim_time_s = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _active_count_type =
    uint32_t;
  _active_count_type active_count;
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
  using _window_capacity_type =
    uint32_t;
  _window_capacity_type window_capacity;
  using _coverage_ratio_type =
    double;
  _coverage_ratio_type coverage_ratio;
  using _ugv_weighted_coverage_type =
    double;
  _ugv_weighted_coverage_type ugv_weighted_coverage;
  using _redundancy_score_type =
    double;
  _redundancy_score_type redundancy_score;
  using _planner_cycle_us_type =
    double;
  _planner_cycle_us_type planner_cycle_us;
  using _planner_deadline_misses_type =
    uint32_t;
  _planner_deadline_misses_type planner_deadline_misses;
  using _clamped_references_type =
    uint32_t;
  _clamped_references_type clamped_references;
  using _clock_hz_type =
    double;
  _clock_hz_type clock_hz;
  using _sim_time_s_type =
    double;
  _sim_time_s_type sim_time_s;
  using _uavs_type =
    std::vector<swarm_interfaces::msg::UavMetric_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::UavMetric_<ContainerAllocator>>>;
  _uavs_type uavs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__active_count(
    const uint32_t & _arg)
  {
    this->active_count = _arg;
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
  Type & set__window_capacity(
    const uint32_t & _arg)
  {
    this->window_capacity = _arg;
    return *this;
  }
  Type & set__coverage_ratio(
    const double & _arg)
  {
    this->coverage_ratio = _arg;
    return *this;
  }
  Type & set__ugv_weighted_coverage(
    const double & _arg)
  {
    this->ugv_weighted_coverage = _arg;
    return *this;
  }
  Type & set__redundancy_score(
    const double & _arg)
  {
    this->redundancy_score = _arg;
    return *this;
  }
  Type & set__planner_cycle_us(
    const double & _arg)
  {
    this->planner_cycle_us = _arg;
    return *this;
  }
  Type & set__planner_deadline_misses(
    const uint32_t & _arg)
  {
    this->planner_deadline_misses = _arg;
    return *this;
  }
  Type & set__clamped_references(
    const uint32_t & _arg)
  {
    this->clamped_references = _arg;
    return *this;
  }
  Type & set__clock_hz(
    const double & _arg)
  {
    this->clock_hz = _arg;
    return *this;
  }
  Type & set__sim_time_s(
    const double & _arg)
  {
    this->sim_time_s = _arg;
    return *this;
  }
  Type & set__uavs(
    const std::vector<swarm_interfaces::msg::UavMetric_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::UavMetric_<ContainerAllocator>>> & _arg)
  {
    this->uavs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__SwarmMetrics
    std::shared_ptr<swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__SwarmMetrics
    std::shared_ptr<swarm_interfaces::msg::SwarmMetrics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwarmMetrics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->active_count != other.active_count) {
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
    if (this->window_capacity != other.window_capacity) {
      return false;
    }
    if (this->coverage_ratio != other.coverage_ratio) {
      return false;
    }
    if (this->ugv_weighted_coverage != other.ugv_weighted_coverage) {
      return false;
    }
    if (this->redundancy_score != other.redundancy_score) {
      return false;
    }
    if (this->planner_cycle_us != other.planner_cycle_us) {
      return false;
    }
    if (this->planner_deadline_misses != other.planner_deadline_misses) {
      return false;
    }
    if (this->clamped_references != other.clamped_references) {
      return false;
    }
    if (this->clock_hz != other.clock_hz) {
      return false;
    }
    if (this->sim_time_s != other.sim_time_s) {
      return false;
    }
    if (this->uavs != other.uavs) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwarmMetrics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwarmMetrics_

// alias to use template instance with default allocator
using SwarmMetrics =
  swarm_interfaces::msg::SwarmMetrics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__STRUCT_HPP_
