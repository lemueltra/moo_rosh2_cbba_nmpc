// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/UavMetric.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_metric.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__STRUCT_HPP_

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
# define DEPRECATED__swarm_interfaces__msg__UavMetric __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__UavMetric __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavMetric_
{
  using Type = UavMetric_<ContainerAllocator>;

  explicit UavMetric_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->active = false;
      this->mode = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->z = 0.0;
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->speed_3d = 0.0;
      this->yaw_rate = 0.0;
      this->has_link = false;
      this->nearest_ugv_id = 0ul;
      this->ugv_distance_m = 0.0;
      this->latency_ms = 0.0;
      this->los = false;
      this->detections_now = 0ul;
      this->sensor_streams = 0ul;
      this->position_error = 0.0;
      this->yaw_error = 0.0;
      this->has_reference = false;
      this->reference_relative = false;
      this->reference_z_requested = 0.0;
      this->reference_z_clamped = 0.0;
      this->reference_z_clamped_flag = false;
      this->reference_age_s = 0.0;
    }
  }

  explicit UavMetric_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->active = false;
      this->mode = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->z = 0.0;
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->speed_3d = 0.0;
      this->yaw_rate = 0.0;
      this->has_link = false;
      this->nearest_ugv_id = 0ul;
      this->ugv_distance_m = 0.0;
      this->latency_ms = 0.0;
      this->los = false;
      this->detections_now = 0ul;
      this->sensor_streams = 0ul;
      this->position_error = 0.0;
      this->yaw_error = 0.0;
      this->has_reference = false;
      this->reference_relative = false;
      this->reference_z_requested = 0.0;
      this->reference_z_clamped = 0.0;
      this->reference_z_clamped_flag = false;
      this->reference_age_s = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drone_id_type =
    uint32_t;
  _drone_id_type drone_id;
  using _active_type =
    bool;
  _active_type active;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _z_type =
    double;
  _z_type z;
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _vz_type =
    double;
  _vz_type vz;
  using _speed_3d_type =
    double;
  _speed_3d_type speed_3d;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _has_link_type =
    bool;
  _has_link_type has_link;
  using _nearest_ugv_id_type =
    uint32_t;
  _nearest_ugv_id_type nearest_ugv_id;
  using _ugv_distance_m_type =
    double;
  _ugv_distance_m_type ugv_distance_m;
  using _latency_ms_type =
    double;
  _latency_ms_type latency_ms;
  using _los_type =
    bool;
  _los_type los;
  using _detections_now_type =
    uint32_t;
  _detections_now_type detections_now;
  using _sensor_streams_type =
    uint32_t;
  _sensor_streams_type sensor_streams;
  using _position_error_type =
    double;
  _position_error_type position_error;
  using _yaw_error_type =
    double;
  _yaw_error_type yaw_error;
  using _has_reference_type =
    bool;
  _has_reference_type has_reference;
  using _reference_relative_type =
    bool;
  _reference_relative_type reference_relative;
  using _reference_z_requested_type =
    double;
  _reference_z_requested_type reference_z_requested;
  using _reference_z_clamped_type =
    double;
  _reference_z_clamped_type reference_z_clamped;
  using _reference_z_clamped_flag_type =
    bool;
  _reference_z_clamped_flag_type reference_z_clamped_flag;
  using _reference_age_s_type =
    double;
  _reference_age_s_type reference_age_s;

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
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const double & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__speed_3d(
    const double & _arg)
  {
    this->speed_3d = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__has_link(
    const bool & _arg)
  {
    this->has_link = _arg;
    return *this;
  }
  Type & set__nearest_ugv_id(
    const uint32_t & _arg)
  {
    this->nearest_ugv_id = _arg;
    return *this;
  }
  Type & set__ugv_distance_m(
    const double & _arg)
  {
    this->ugv_distance_m = _arg;
    return *this;
  }
  Type & set__latency_ms(
    const double & _arg)
  {
    this->latency_ms = _arg;
    return *this;
  }
  Type & set__los(
    const bool & _arg)
  {
    this->los = _arg;
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
  Type & set__position_error(
    const double & _arg)
  {
    this->position_error = _arg;
    return *this;
  }
  Type & set__yaw_error(
    const double & _arg)
  {
    this->yaw_error = _arg;
    return *this;
  }
  Type & set__has_reference(
    const bool & _arg)
  {
    this->has_reference = _arg;
    return *this;
  }
  Type & set__reference_relative(
    const bool & _arg)
  {
    this->reference_relative = _arg;
    return *this;
  }
  Type & set__reference_z_requested(
    const double & _arg)
  {
    this->reference_z_requested = _arg;
    return *this;
  }
  Type & set__reference_z_clamped(
    const double & _arg)
  {
    this->reference_z_clamped = _arg;
    return *this;
  }
  Type & set__reference_z_clamped_flag(
    const bool & _arg)
  {
    this->reference_z_clamped_flag = _arg;
    return *this;
  }
  Type & set__reference_age_s(
    const double & _arg)
  {
    this->reference_age_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::UavMetric_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::UavMetric_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UavMetric_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UavMetric_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UavMetric_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UavMetric_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UavMetric_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UavMetric_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UavMetric_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UavMetric_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__UavMetric
    std::shared_ptr<swarm_interfaces::msg::UavMetric_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__UavMetric
    std::shared_ptr<swarm_interfaces::msg::UavMetric_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavMetric_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->speed_3d != other.speed_3d) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->has_link != other.has_link) {
      return false;
    }
    if (this->nearest_ugv_id != other.nearest_ugv_id) {
      return false;
    }
    if (this->ugv_distance_m != other.ugv_distance_m) {
      return false;
    }
    if (this->latency_ms != other.latency_ms) {
      return false;
    }
    if (this->los != other.los) {
      return false;
    }
    if (this->detections_now != other.detections_now) {
      return false;
    }
    if (this->sensor_streams != other.sensor_streams) {
      return false;
    }
    if (this->position_error != other.position_error) {
      return false;
    }
    if (this->yaw_error != other.yaw_error) {
      return false;
    }
    if (this->has_reference != other.has_reference) {
      return false;
    }
    if (this->reference_relative != other.reference_relative) {
      return false;
    }
    if (this->reference_z_requested != other.reference_z_requested) {
      return false;
    }
    if (this->reference_z_clamped != other.reference_z_clamped) {
      return false;
    }
    if (this->reference_z_clamped_flag != other.reference_z_clamped_flag) {
      return false;
    }
    if (this->reference_age_s != other.reference_age_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavMetric_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavMetric_

// alias to use template instance with default allocator
using UavMetric =
  swarm_interfaces::msg::UavMetric_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_METRIC__STRUCT_HPP_
