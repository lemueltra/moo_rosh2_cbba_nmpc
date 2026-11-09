// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from swarm_world_interfaces:msg/SimulationStatus.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/simulation_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "swarm_world_interfaces/msg/detail/simulation_status__struct.h"
#include "swarm_world_interfaces/msg/detail/simulation_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SimulationStatus__ros_msg_type = swarm_world_interfaces__msg__SimulationStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_serialize_swarm_world_interfaces__msg__SimulationStatus(
  const swarm_world_interfaces__msg__SimulationStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: time_mode
  {
    cdr << ros_message->time_mode;
  }

  // Field name: step_count
  {
    cdr << ros_message->step_count;
  }

  // Field name: elapsed_sim_time
  {
    cdr << ros_message->elapsed_sim_time;
  }

  // Field name: fixed_delta_seconds
  {
    cdr << ros_message->fixed_delta_seconds;
  }

  // Field name: num_active_ugvs
  {
    cdr << ros_message->num_active_ugvs;
  }

  // Field name: num_active_uavs
  {
    cdr << ros_message->num_active_uavs;
  }

  // Field name: num_active_sensors
  {
    cdr << ros_message->num_active_sensors;
  }

  // Field name: sync_waiting
  {
    cdr << (ros_message->sync_waiting ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_deserialize_swarm_world_interfaces__msg__SimulationStatus(
  eprosima::fastcdr::Cdr & cdr,
  swarm_world_interfaces__msg__SimulationStatus * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: time_mode
  {
    cdr >> ros_message->time_mode;
  }

  // Field name: step_count
  {
    cdr >> ros_message->step_count;
  }

  // Field name: elapsed_sim_time
  {
    cdr >> ros_message->elapsed_sim_time;
  }

  // Field name: fixed_delta_seconds
  {
    cdr >> ros_message->fixed_delta_seconds;
  }

  // Field name: num_active_ugvs
  {
    cdr >> ros_message->num_active_ugvs;
  }

  // Field name: num_active_uavs
  {
    cdr >> ros_message->num_active_uavs;
  }

  // Field name: num_active_sensors
  {
    cdr >> ros_message->num_active_sensors;
  }

  // Field name: sync_waiting
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sync_waiting = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t get_serialized_size_swarm_world_interfaces__msg__SimulationStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SimulationStatus__ros_msg_type * ros_message = static_cast<const _SimulationStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: time_mode
  {
    size_t item_size = sizeof(ros_message->time_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: step_count
  {
    size_t item_size = sizeof(ros_message->step_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: elapsed_sim_time
  {
    size_t item_size = sizeof(ros_message->elapsed_sim_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_delta_seconds
  {
    size_t item_size = sizeof(ros_message->fixed_delta_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_active_ugvs
  {
    size_t item_size = sizeof(ros_message->num_active_ugvs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_active_uavs
  {
    size_t item_size = sizeof(ros_message->num_active_uavs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_active_sensors
  {
    size_t item_size = sizeof(ros_message->num_active_sensors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sync_waiting
  {
    size_t item_size = sizeof(ros_message->sync_waiting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t max_serialized_size_swarm_world_interfaces__msg__SimulationStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: time_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: step_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: elapsed_sim_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fixed_delta_seconds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: num_active_ugvs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: num_active_uavs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: num_active_sensors
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sync_waiting
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_world_interfaces__msg__SimulationStatus;
    is_plain =
      (
      offsetof(DataType, sync_waiting) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_serialize_key_swarm_world_interfaces__msg__SimulationStatus(
  const swarm_world_interfaces__msg__SimulationStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: time_mode
  {
    cdr << ros_message->time_mode;
  }

  // Field name: step_count
  {
    cdr << ros_message->step_count;
  }

  // Field name: elapsed_sim_time
  {
    cdr << ros_message->elapsed_sim_time;
  }

  // Field name: fixed_delta_seconds
  {
    cdr << ros_message->fixed_delta_seconds;
  }

  // Field name: num_active_ugvs
  {
    cdr << ros_message->num_active_ugvs;
  }

  // Field name: num_active_uavs
  {
    cdr << ros_message->num_active_uavs;
  }

  // Field name: num_active_sensors
  {
    cdr << ros_message->num_active_sensors;
  }

  // Field name: sync_waiting
  {
    cdr << (ros_message->sync_waiting ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t get_serialized_size_key_swarm_world_interfaces__msg__SimulationStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SimulationStatus__ros_msg_type * ros_message = static_cast<const _SimulationStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: time_mode
  {
    size_t item_size = sizeof(ros_message->time_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: step_count
  {
    size_t item_size = sizeof(ros_message->step_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: elapsed_sim_time
  {
    size_t item_size = sizeof(ros_message->elapsed_sim_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fixed_delta_seconds
  {
    size_t item_size = sizeof(ros_message->fixed_delta_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_active_ugvs
  {
    size_t item_size = sizeof(ros_message->num_active_ugvs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_active_uavs
  {
    size_t item_size = sizeof(ros_message->num_active_uavs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_active_sensors
  {
    size_t item_size = sizeof(ros_message->num_active_sensors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sync_waiting
  {
    size_t item_size = sizeof(ros_message->sync_waiting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t max_serialized_size_key_swarm_world_interfaces__msg__SimulationStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: time_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: step_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: elapsed_sim_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fixed_delta_seconds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: num_active_ugvs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: num_active_uavs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: num_active_sensors
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sync_waiting
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_world_interfaces__msg__SimulationStatus;
    is_plain =
      (
      offsetof(DataType, sync_waiting) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SimulationStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const swarm_world_interfaces__msg__SimulationStatus * ros_message = static_cast<const swarm_world_interfaces__msg__SimulationStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_swarm_world_interfaces__msg__SimulationStatus(ros_message, cdr);
}

static bool _SimulationStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  swarm_world_interfaces__msg__SimulationStatus * ros_message = static_cast<swarm_world_interfaces__msg__SimulationStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_swarm_world_interfaces__msg__SimulationStatus(cdr, ros_message);
}

static uint32_t _SimulationStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_swarm_world_interfaces__msg__SimulationStatus(
      untyped_ros_message, 0));
}

static size_t _SimulationStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_swarm_world_interfaces__msg__SimulationStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SimulationStatus = {
  "swarm_world_interfaces::msg",
  "SimulationStatus",
  _SimulationStatus__cdr_serialize,
  _SimulationStatus__cdr_deserialize,
  _SimulationStatus__get_serialized_size,
  _SimulationStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SimulationStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SimulationStatus,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__SimulationStatus__get_type_hash,
  &swarm_world_interfaces__msg__SimulationStatus__get_type_description,
  &swarm_world_interfaces__msg__SimulationStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, msg, SimulationStatus)() {
  return &_SimulationStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
