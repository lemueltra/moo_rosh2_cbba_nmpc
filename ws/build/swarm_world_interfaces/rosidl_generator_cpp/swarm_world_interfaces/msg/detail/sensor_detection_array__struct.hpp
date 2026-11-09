// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:msg/SensorDetectionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_detection_array.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__STRUCT_HPP_

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
// Member 'detections'
#include "swarm_world_interfaces/msg/detail/sensor_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__msg__SensorDetectionArray __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__msg__SensorDetectionArray __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorDetectionArray_
{
  using Type = SensorDetectionArray_<ContainerAllocator>;

  explicit SensorDetectionArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0ul;
      this->parent_actor_id = 0ul;
      this->sensor_type = "";
      this->range = 0.0;
      this->horizontal_fov_deg = 0.0;
      this->upper_fov_deg = 0.0;
      this->lower_fov_deg = 0.0;
    }
  }

  explicit SensorDetectionArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0ul;
      this->parent_actor_id = 0ul;
      this->sensor_type = "";
      this->range = 0.0;
      this->horizontal_fov_deg = 0.0;
      this->upper_fov_deg = 0.0;
      this->lower_fov_deg = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_id_type =
    uint32_t;
  _sensor_id_type sensor_id;
  using _parent_actor_id_type =
    uint32_t;
  _parent_actor_id_type parent_actor_id;
  using _sensor_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_type_type sensor_type;
  using _range_type =
    double;
  _range_type range;
  using _horizontal_fov_deg_type =
    double;
  _horizontal_fov_deg_type horizontal_fov_deg;
  using _upper_fov_deg_type =
    double;
  _upper_fov_deg_type upper_fov_deg;
  using _lower_fov_deg_type =
    double;
  _lower_fov_deg_type lower_fov_deg;
  using _detections_type =
    std::vector<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const uint32_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__parent_actor_id(
    const uint32_t & _arg)
  {
    this->parent_actor_id = _arg;
    return *this;
  }
  Type & set__sensor_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_type = _arg;
    return *this;
  }
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__horizontal_fov_deg(
    const double & _arg)
  {
    this->horizontal_fov_deg = _arg;
    return *this;
  }
  Type & set__upper_fov_deg(
    const double & _arg)
  {
    this->upper_fov_deg = _arg;
    return *this;
  }
  Type & set__lower_fov_deg(
    const double & _arg)
  {
    this->lower_fov_deg = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__msg__SensorDetectionArray
    std::shared_ptr<swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__msg__SensorDetectionArray
    std::shared_ptr<swarm_world_interfaces::msg::SensorDetectionArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorDetectionArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->parent_actor_id != other.parent_actor_id) {
      return false;
    }
    if (this->sensor_type != other.sensor_type) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->horizontal_fov_deg != other.horizontal_fov_deg) {
      return false;
    }
    if (this->upper_fov_deg != other.upper_fov_deg) {
      return false;
    }
    if (this->lower_fov_deg != other.lower_fov_deg) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorDetectionArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorDetectionArray_

// alias to use template instance with default allocator
using SensorDetectionArray =
  swarm_world_interfaces::msg::SensorDetectionArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION_ARRAY__STRUCT_HPP_
