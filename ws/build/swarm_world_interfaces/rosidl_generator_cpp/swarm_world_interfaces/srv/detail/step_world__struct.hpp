// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:srv/StepWorld.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/step_world.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__StepWorld_Request __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__StepWorld_Request __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StepWorld_Request_
{
  using Type = StepWorld_Request_<ContainerAllocator>;

  explicit StepWorld_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->step_count = 0ul;
      this->timeout_sec = 0.0;
    }
  }

  explicit StepWorld_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->step_count = 0ul;
      this->timeout_sec = 0.0;
    }
  }

  // field types and members
  using _step_count_type =
    uint32_t;
  _step_count_type step_count;
  using _timeout_sec_type =
    double;
  _timeout_sec_type timeout_sec;

  // setters for named parameter idiom
  Type & set__step_count(
    const uint32_t & _arg)
  {
    this->step_count = _arg;
    return *this;
  }
  Type & set__timeout_sec(
    const double & _arg)
  {
    this->timeout_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__StepWorld_Request
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__StepWorld_Request
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StepWorld_Request_ & other) const
  {
    if (this->step_count != other.step_count) {
      return false;
    }
    if (this->timeout_sec != other.timeout_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const StepWorld_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StepWorld_Request_

// alias to use template instance with default allocator
using StepWorld_Request =
  swarm_world_interfaces::srv::StepWorld_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces


#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__StepWorld_Response __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__StepWorld_Response __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StepWorld_Response_
{
  using Type = StepWorld_Response_<ContainerAllocator>;

  explicit StepWorld_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->frame_id = 0ull;
      this->sim_time_seconds = 0.0;
      this->error_message = "";
    }
  }

  explicit StepWorld_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->frame_id = 0ull;
      this->sim_time_seconds = 0.0;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _frame_id_type =
    uint64_t;
  _frame_id_type frame_id;
  using _sim_time_seconds_type =
    double;
  _sim_time_seconds_type sim_time_seconds;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__frame_id(
    const uint64_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__sim_time_seconds(
    const double & _arg)
  {
    this->sim_time_seconds = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__StepWorld_Response
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__StepWorld_Response
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StepWorld_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->sim_time_seconds != other.sim_time_seconds) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const StepWorld_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StepWorld_Response_

// alias to use template instance with default allocator
using StepWorld_Response =
  swarm_world_interfaces::srv::StepWorld_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__StepWorld_Event __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__StepWorld_Event __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StepWorld_Event_
{
  using Type = StepWorld_Event_<ContainerAllocator>;

  explicit StepWorld_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit StepWorld_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::StepWorld_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::StepWorld_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__StepWorld_Event
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__StepWorld_Event
    std::shared_ptr<swarm_world_interfaces::srv::StepWorld_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StepWorld_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const StepWorld_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StepWorld_Event_

// alias to use template instance with default allocator
using StepWorld_Event =
  swarm_world_interfaces::srv::StepWorld_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace swarm_world_interfaces
{

namespace srv
{

struct StepWorld
{
  using Request = swarm_world_interfaces::srv::StepWorld_Request;
  using Response = swarm_world_interfaces::srv::StepWorld_Response;
  using Event = swarm_world_interfaces::srv::StepWorld_Event;
};

}  // namespace srv

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__STEP_WORLD__STRUCT_HPP_
