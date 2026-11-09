// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__struct.h"
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // pedestrian_actor_ids, vehicle_actor_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // pedestrian_actor_ids, vehicle_actor_ids
#include "rosidl_runtime_c/string.h"  // pedestrian_types, vehicle_types
#include "rosidl_runtime_c/string_functions.h"  // pedestrian_types, vehicle_types
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


using _NpcSpawnSummary__ros_msg_type = swarm_world_interfaces__msg__NpcSpawnSummary;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_serialize_swarm_world_interfaces__msg__NpcSpawnSummary(
  const swarm_world_interfaces__msg__NpcSpawnSummary * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: seed
  {
    cdr << ros_message->seed;
  }

  // Field name: requested_vehicles
  {
    cdr << ros_message->requested_vehicles;
  }

  // Field name: requested_pedestrians
  {
    cdr << ros_message->requested_pedestrians;
  }

  // Field name: spawned_vehicles
  {
    cdr << ros_message->spawned_vehicles;
  }

  // Field name: spawned_pedestrians
  {
    cdr << ros_message->spawned_pedestrians;
  }

  // Field name: vehicle_actor_ids
  {
    size_t size = ros_message->vehicle_actor_ids.size;
    auto array_ptr = ros_message->vehicle_actor_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pedestrian_actor_ids
  {
    size_t size = ros_message->pedestrian_actor_ids.size;
    auto array_ptr = ros_message->pedestrian_actor_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: vehicle_types
  {
    size_t size = ros_message->vehicle_types.size;
    auto array_ptr = ros_message->vehicle_types.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: pedestrian_types
  {
    size_t size = ros_message->pedestrian_types.size;
    auto array_ptr = ros_message->pedestrian_types.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: elapsed_s
  {
    cdr << ros_message->elapsed_s;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_deserialize_swarm_world_interfaces__msg__NpcSpawnSummary(
  eprosima::fastcdr::Cdr & cdr,
  swarm_world_interfaces__msg__NpcSpawnSummary * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: seed
  {
    cdr >> ros_message->seed;
  }

  // Field name: requested_vehicles
  {
    cdr >> ros_message->requested_vehicles;
  }

  // Field name: requested_pedestrians
  {
    cdr >> ros_message->requested_pedestrians;
  }

  // Field name: spawned_vehicles
  {
    cdr >> ros_message->spawned_vehicles;
  }

  // Field name: spawned_pedestrians
  {
    cdr >> ros_message->spawned_pedestrians;
  }

  // Field name: vehicle_actor_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->vehicle_actor_ids.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->vehicle_actor_ids);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->vehicle_actor_ids, size)) {
      fprintf(stderr, "failed to create array for field 'vehicle_actor_ids'");
      return false;
    }
    auto array_ptr = ros_message->vehicle_actor_ids.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: pedestrian_actor_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->pedestrian_actor_ids.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->pedestrian_actor_ids);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->pedestrian_actor_ids, size)) {
      fprintf(stderr, "failed to create array for field 'pedestrian_actor_ids'");
      return false;
    }
    auto array_ptr = ros_message->pedestrian_actor_ids.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: vehicle_types
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->vehicle_types.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->vehicle_types);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->vehicle_types, size)) {
      fprintf(stderr, "failed to create array for field 'vehicle_types'");
      return false;
    }
    auto array_ptr = ros_message->vehicle_types.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'vehicle_types'\n");
        return false;
      }
    }
  }

  // Field name: pedestrian_types
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->pedestrian_types.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->pedestrian_types);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->pedestrian_types, size)) {
      fprintf(stderr, "failed to create array for field 'pedestrian_types'");
      return false;
    }
    auto array_ptr = ros_message->pedestrian_types.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'pedestrian_types'\n");
        return false;
      }
    }
  }

  // Field name: elapsed_s
  {
    cdr >> ros_message->elapsed_s;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t get_serialized_size_swarm_world_interfaces__msg__NpcSpawnSummary(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NpcSpawnSummary__ros_msg_type * ros_message = static_cast<const _NpcSpawnSummary__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: seed
  {
    size_t item_size = sizeof(ros_message->seed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_vehicles
  {
    size_t item_size = sizeof(ros_message->requested_vehicles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_pedestrians
  {
    size_t item_size = sizeof(ros_message->requested_pedestrians);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: spawned_vehicles
  {
    size_t item_size = sizeof(ros_message->spawned_vehicles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: spawned_pedestrians
  {
    size_t item_size = sizeof(ros_message->spawned_pedestrians);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vehicle_actor_ids
  {
    size_t array_size = ros_message->vehicle_actor_ids.size;
    auto array_ptr = ros_message->vehicle_actor_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pedestrian_actor_ids
  {
    size_t array_size = ros_message->pedestrian_actor_ids.size;
    auto array_ptr = ros_message->pedestrian_actor_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vehicle_types
  {
    size_t array_size = ros_message->vehicle_types.size;
    auto array_ptr = ros_message->vehicle_types.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: pedestrian_types
  {
    size_t array_size = ros_message->pedestrian_types.size;
    auto array_ptr = ros_message->pedestrian_types.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: elapsed_s
  {
    size_t item_size = sizeof(ros_message->elapsed_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t max_serialized_size_swarm_world_interfaces__msg__NpcSpawnSummary(
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

  // Field name: seed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: requested_vehicles
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: requested_pedestrians
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: spawned_vehicles
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: spawned_pedestrians
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vehicle_actor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pedestrian_actor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vehicle_types
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pedestrian_types
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: elapsed_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_world_interfaces__msg__NpcSpawnSummary;
    is_plain =
      (
      offsetof(DataType, elapsed_s) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_serialize_key_swarm_world_interfaces__msg__NpcSpawnSummary(
  const swarm_world_interfaces__msg__NpcSpawnSummary * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: seed
  {
    cdr << ros_message->seed;
  }

  // Field name: requested_vehicles
  {
    cdr << ros_message->requested_vehicles;
  }

  // Field name: requested_pedestrians
  {
    cdr << ros_message->requested_pedestrians;
  }

  // Field name: spawned_vehicles
  {
    cdr << ros_message->spawned_vehicles;
  }

  // Field name: spawned_pedestrians
  {
    cdr << ros_message->spawned_pedestrians;
  }

  // Field name: vehicle_actor_ids
  {
    size_t size = ros_message->vehicle_actor_ids.size;
    auto array_ptr = ros_message->vehicle_actor_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pedestrian_actor_ids
  {
    size_t size = ros_message->pedestrian_actor_ids.size;
    auto array_ptr = ros_message->pedestrian_actor_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: vehicle_types
  {
    size_t size = ros_message->vehicle_types.size;
    auto array_ptr = ros_message->vehicle_types.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: pedestrian_types
  {
    size_t size = ros_message->pedestrian_types.size;
    auto array_ptr = ros_message->pedestrian_types.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: elapsed_s
  {
    cdr << ros_message->elapsed_s;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t get_serialized_size_key_swarm_world_interfaces__msg__NpcSpawnSummary(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NpcSpawnSummary__ros_msg_type * ros_message = static_cast<const _NpcSpawnSummary__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: seed
  {
    size_t item_size = sizeof(ros_message->seed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_vehicles
  {
    size_t item_size = sizeof(ros_message->requested_vehicles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_pedestrians
  {
    size_t item_size = sizeof(ros_message->requested_pedestrians);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: spawned_vehicles
  {
    size_t item_size = sizeof(ros_message->spawned_vehicles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: spawned_pedestrians
  {
    size_t item_size = sizeof(ros_message->spawned_pedestrians);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vehicle_actor_ids
  {
    size_t array_size = ros_message->vehicle_actor_ids.size;
    auto array_ptr = ros_message->vehicle_actor_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pedestrian_actor_ids
  {
    size_t array_size = ros_message->pedestrian_actor_ids.size;
    auto array_ptr = ros_message->pedestrian_actor_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vehicle_types
  {
    size_t array_size = ros_message->vehicle_types.size;
    auto array_ptr = ros_message->vehicle_types.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: pedestrian_types
  {
    size_t array_size = ros_message->pedestrian_types.size;
    auto array_ptr = ros_message->pedestrian_types.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: elapsed_s
  {
    size_t item_size = sizeof(ros_message->elapsed_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t max_serialized_size_key_swarm_world_interfaces__msg__NpcSpawnSummary(
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

  // Field name: seed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: requested_vehicles
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: requested_pedestrians
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: spawned_vehicles
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: spawned_pedestrians
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vehicle_actor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: pedestrian_actor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vehicle_types
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pedestrian_types
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: elapsed_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_world_interfaces__msg__NpcSpawnSummary;
    is_plain =
      (
      offsetof(DataType, elapsed_s) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NpcSpawnSummary__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const swarm_world_interfaces__msg__NpcSpawnSummary * ros_message = static_cast<const swarm_world_interfaces__msg__NpcSpawnSummary *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_swarm_world_interfaces__msg__NpcSpawnSummary(ros_message, cdr);
}

static bool _NpcSpawnSummary__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  swarm_world_interfaces__msg__NpcSpawnSummary * ros_message = static_cast<swarm_world_interfaces__msg__NpcSpawnSummary *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_swarm_world_interfaces__msg__NpcSpawnSummary(cdr, ros_message);
}

static uint32_t _NpcSpawnSummary__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_swarm_world_interfaces__msg__NpcSpawnSummary(
      untyped_ros_message, 0));
}

static size_t _NpcSpawnSummary__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_swarm_world_interfaces__msg__NpcSpawnSummary(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NpcSpawnSummary = {
  "swarm_world_interfaces::msg",
  "NpcSpawnSummary",
  _NpcSpawnSummary__cdr_serialize,
  _NpcSpawnSummary__cdr_deserialize,
  _NpcSpawnSummary__get_serialized_size,
  _NpcSpawnSummary__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NpcSpawnSummary__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NpcSpawnSummary,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_hash,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_description,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, msg, NpcSpawnSummary)() {
  return &_NpcSpawnSummary__type_support;
}

#if defined(__cplusplus)
}
#endif
