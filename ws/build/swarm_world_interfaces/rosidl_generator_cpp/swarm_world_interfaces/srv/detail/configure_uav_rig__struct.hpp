// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:srv/ConfigureUavRig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/configure_uav_rig.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__CONFIGURE_UAV_RIG__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__CONFIGURE_UAV_RIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Request __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Request __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureUavRig_Request_
{
  using Type = ConfigureUavRig_Request_<ContainerAllocator>;

  explicit ConfigureUavRig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_id = 0l;
      this->rig_override = "";
      this->reset_to_default = false;
      this->detach_current_sensors = false;
    }
  }

  explicit ConfigureUavRig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rig_override(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uav_id = 0l;
      this->rig_override = "";
      this->reset_to_default = false;
      this->detach_current_sensors = false;
    }
  }

  // field types and members
  using _uav_id_type =
    int32_t;
  _uav_id_type uav_id;
  using _rig_override_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rig_override_type rig_override;
  using _reset_to_default_type =
    bool;
  _reset_to_default_type reset_to_default;
  using _detach_current_sensors_type =
    bool;
  _detach_current_sensors_type detach_current_sensors;

  // setters for named parameter idiom
  Type & set__uav_id(
    const int32_t & _arg)
  {
    this->uav_id = _arg;
    return *this;
  }
  Type & set__rig_override(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rig_override = _arg;
    return *this;
  }
  Type & set__reset_to_default(
    const bool & _arg)
  {
    this->reset_to_default = _arg;
    return *this;
  }
  Type & set__detach_current_sensors(
    const bool & _arg)
  {
    this->detach_current_sensors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Request
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Request
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureUavRig_Request_ & other) const
  {
    if (this->uav_id != other.uav_id) {
      return false;
    }
    if (this->rig_override != other.rig_override) {
      return false;
    }
    if (this->reset_to_default != other.reset_to_default) {
      return false;
    }
    if (this->detach_current_sensors != other.detach_current_sensors) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureUavRig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureUavRig_Request_

// alias to use template instance with default allocator
using ConfigureUavRig_Request =
  swarm_world_interfaces::srv::ConfigureUavRig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces


#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Response __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Response __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureUavRig_Response_
{
  using Type = ConfigureUavRig_Response_<ContainerAllocator>;

  explicit ConfigureUavRig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit ConfigureUavRig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _attached_sensor_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _attached_sensor_ids_type attached_sensor_ids;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__attached_sensor_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->attached_sensor_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Response
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Response
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureUavRig_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->attached_sensor_ids != other.attached_sensor_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureUavRig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureUavRig_Response_

// alias to use template instance with default allocator
using ConfigureUavRig_Response =
  swarm_world_interfaces::srv::ConfigureUavRig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Event __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Event __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureUavRig_Event_
{
  using Type = ConfigureUavRig_Event_<ContainerAllocator>;

  explicit ConfigureUavRig_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ConfigureUavRig_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::ConfigureUavRig_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::ConfigureUavRig_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Event
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__ConfigureUavRig_Event
    std::shared_ptr<swarm_world_interfaces::srv::ConfigureUavRig_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureUavRig_Event_ & other) const
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
  bool operator!=(const ConfigureUavRig_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureUavRig_Event_

// alias to use template instance with default allocator
using ConfigureUavRig_Event =
  swarm_world_interfaces::srv::ConfigureUavRig_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace swarm_world_interfaces
{

namespace srv
{

struct ConfigureUavRig
{
  using Request = swarm_world_interfaces::srv::ConfigureUavRig_Request;
  using Response = swarm_world_interfaces::srv::ConfigureUavRig_Response;
  using Event = swarm_world_interfaces::srv::ConfigureUavRig_Event;
};

}  // namespace srv

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__CONFIGURE_UAV_RIG__STRUCT_HPP_
