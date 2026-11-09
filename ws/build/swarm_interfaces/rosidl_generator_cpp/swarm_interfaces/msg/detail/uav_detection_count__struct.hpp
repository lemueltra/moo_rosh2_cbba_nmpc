// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/UavDetectionCount.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_detection_count.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__STRUCT_HPP_

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
# define DEPRECATED__swarm_interfaces__msg__UavDetectionCount __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__UavDetectionCount __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavDetectionCount_
{
  using Type = UavDetectionCount_<ContainerAllocator>;

  explicit UavDetectionCount_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->detections_now = 0ul;
      this->sensor_streams = 0ul;
    }
  }

  explicit UavDetectionCount_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->detections_now = 0ul;
      this->sensor_streams = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drone_id_type =
    uint32_t;
  _drone_id_type drone_id;
  using _detections_now_type =
    uint32_t;
  _detections_now_type detections_now;
  using _sensor_streams_type =
    uint32_t;
  _sensor_streams_type sensor_streams;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__drone_id(
    const uint32_t & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__detections_now(
    const uint32_t & _arg)
  {
    this->detections_now = _arg;
    return *this;
  }
  Type & set__sensor_streams(
    const uint32_t & _arg)
  {
    this->sensor_streams = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__UavDetectionCount
    std::shared_ptr<swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__UavDetectionCount
    std::shared_ptr<swarm_interfaces::msg::UavDetectionCount_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavDetectionCount_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->detections_now != other.detections_now) {
      return false;
    }
    if (this->sensor_streams != other.sensor_streams) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavDetectionCount_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavDetectionCount_

// alias to use template instance with default allocator
using UavDetectionCount =
  swarm_interfaces::msg::UavDetectionCount_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__STRUCT_HPP_
