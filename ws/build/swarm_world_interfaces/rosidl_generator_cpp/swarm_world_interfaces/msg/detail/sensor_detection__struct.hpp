// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:msg/SensorDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_detection.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bbox_pose_world'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'bbox_extent'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'aim_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__msg__SensorDetection __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__msg__SensorDetection __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorDetection_
{
  using Type = SensorDetection_<ContainerAllocator>;

  explicit SensorDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox_pose_world(_init),
    bbox_extent(_init),
    aim_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actor_id = 0ul;
      this->class_name = "";
      this->range = 0.0;
      this->azimuth = 0.0;
      this->elevation = 0.0;
      this->occluded = false;
      this->partially_occluded = false;
      this->occlusion_ratio = 0.0;
    }
  }

  explicit SensorDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc),
    bbox_pose_world(_alloc, _init),
    bbox_extent(_alloc, _init),
    aim_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actor_id = 0ul;
      this->class_name = "";
      this->range = 0.0;
      this->azimuth = 0.0;
      this->elevation = 0.0;
      this->occluded = false;
      this->partially_occluded = false;
      this->occlusion_ratio = 0.0;
    }
  }

  // field types and members
  using _actor_id_type =
    uint32_t;
  _actor_id_type actor_id;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _bbox_pose_world_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _bbox_pose_world_type bbox_pose_world;
  using _bbox_extent_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _bbox_extent_type bbox_extent;
  using _range_type =
    double;
  _range_type range;
  using _azimuth_type =
    double;
  _azimuth_type azimuth;
  using _elevation_type =
    double;
  _elevation_type elevation;
  using _occluded_type =
    bool;
  _occluded_type occluded;
  using _partially_occluded_type =
    bool;
  _partially_occluded_type partially_occluded;
  using _occlusion_ratio_type =
    double;
  _occlusion_ratio_type occlusion_ratio;
  using _aim_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _aim_point_type aim_point;

  // setters for named parameter idiom
  Type & set__actor_id(
    const uint32_t & _arg)
  {
    this->actor_id = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__bbox_pose_world(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->bbox_pose_world = _arg;
    return *this;
  }
  Type & set__bbox_extent(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->bbox_extent = _arg;
    return *this;
  }
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__azimuth(
    const double & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__elevation(
    const double & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__occluded(
    const bool & _arg)
  {
    this->occluded = _arg;
    return *this;
  }
  Type & set__partially_occluded(
    const bool & _arg)
  {
    this->partially_occluded = _arg;
    return *this;
  }
  Type & set__occlusion_ratio(
    const double & _arg)
  {
    this->occlusion_ratio = _arg;
    return *this;
  }
  Type & set__aim_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->aim_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__msg__SensorDetection
    std::shared_ptr<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__msg__SensorDetection
    std::shared_ptr<swarm_world_interfaces::msg::SensorDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorDetection_ & other) const
  {
    if (this->actor_id != other.actor_id) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->bbox_pose_world != other.bbox_pose_world) {
      return false;
    }
    if (this->bbox_extent != other.bbox_extent) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->occluded != other.occluded) {
      return false;
    }
    if (this->partially_occluded != other.partially_occluded) {
      return false;
    }
    if (this->occlusion_ratio != other.occlusion_ratio) {
      return false;
    }
    if (this->aim_point != other.aim_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorDetection_

// alias to use template instance with default allocator
using SensorDetection =
  swarm_world_interfaces::msg::SensorDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DETECTION__STRUCT_HPP_
