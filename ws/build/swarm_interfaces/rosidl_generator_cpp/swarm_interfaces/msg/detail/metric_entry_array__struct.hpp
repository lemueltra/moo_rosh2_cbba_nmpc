// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/MetricEntryArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/metric_entry_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__STRUCT_HPP_

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
// Member 'entries'
#include "swarm_interfaces/msg/detail/metric_entry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__MetricEntryArray __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__MetricEntryArray __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MetricEntryArray_
{
  using Type = MetricEntryArray_<ContainerAllocator>;

  explicit MetricEntryArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_based = false;
      this->params_hash = "";
      this->window_sec = 0.0;
      this->warming_up = false;
      this->n_frames_in_window = 0ul;
    }
  }

  explicit MetricEntryArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    params_hash(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_based = false;
      this->params_hash = "";
      this->window_sec = 0.0;
      this->warming_up = false;
      this->n_frames_in_window = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _model_based_type =
    bool;
  _model_based_type model_based;
  using _params_hash_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _params_hash_type params_hash;
  using _window_sec_type =
    double;
  _window_sec_type window_sec;
  using _warming_up_type =
    bool;
  _warming_up_type warming_up;
  using _n_frames_in_window_type =
    uint32_t;
  _n_frames_in_window_type n_frames_in_window;
  using _entries_type =
    std::vector<swarm_interfaces::msg::MetricEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::MetricEntry_<ContainerAllocator>>>;
  _entries_type entries;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__model_based(
    const bool & _arg)
  {
    this->model_based = _arg;
    return *this;
  }
  Type & set__params_hash(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->params_hash = _arg;
    return *this;
  }
  Type & set__window_sec(
    const double & _arg)
  {
    this->window_sec = _arg;
    return *this;
  }
  Type & set__warming_up(
    const bool & _arg)
  {
    this->warming_up = _arg;
    return *this;
  }
  Type & set__n_frames_in_window(
    const uint32_t & _arg)
  {
    this->n_frames_in_window = _arg;
    return *this;
  }
  Type & set__entries(
    const std::vector<swarm_interfaces::msg::MetricEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::MetricEntry_<ContainerAllocator>>> & _arg)
  {
    this->entries = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__MetricEntryArray
    std::shared_ptr<swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__MetricEntryArray
    std::shared_ptr<swarm_interfaces::msg::MetricEntryArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MetricEntryArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->model_based != other.model_based) {
      return false;
    }
    if (this->params_hash != other.params_hash) {
      return false;
    }
    if (this->window_sec != other.window_sec) {
      return false;
    }
    if (this->warming_up != other.warming_up) {
      return false;
    }
    if (this->n_frames_in_window != other.n_frames_in_window) {
      return false;
    }
    if (this->entries != other.entries) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetricEntryArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MetricEntryArray_

// alias to use template instance with default allocator
using MetricEntryArray =
  swarm_interfaces::msg::MetricEntryArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__STRUCT_HPP_
