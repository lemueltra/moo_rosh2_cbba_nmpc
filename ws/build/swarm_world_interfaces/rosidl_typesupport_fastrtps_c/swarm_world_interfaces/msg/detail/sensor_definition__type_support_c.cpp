// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from swarm_world_interfaces:msg/SensorDefinition.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/sensor_definition__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "swarm_world_interfaces/msg/detail/sensor_definition__struct.h"
#include "swarm_world_interfaces/msg/detail/sensor_definition__functions.h"
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

#include "geometry_msgs/msg/detail/transform__functions.h"  // transform
#include "rosidl_runtime_c/string.h"  // attribute_keys, attribute_values, type_id
#include "rosidl_runtime_c/string_functions.h"  // attribute_keys, attribute_values, type_id

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
bool cdr_serialize_geometry_msgs__msg__Transform(
  const geometry_msgs__msg__Transform * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
bool cdr_deserialize_geometry_msgs__msg__Transform(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Transform * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Transform(
  const geometry_msgs__msg__Transform * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Transform(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform)();


using _SensorDefinition__ros_msg_type = swarm_world_interfaces__msg__SensorDefinition;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_serialize_swarm_world_interfaces__msg__SensorDefinition(
  const swarm_world_interfaces__msg__SensorDefinition * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: sensor_id
  {
    cdr << ros_message->sensor_id;
  }

  // Field name: type_id
  {
    const rosidl_runtime_c__String * str = &ros_message->type_id;
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

  // Field name: parent_actor_id
  {
    cdr << ros_message->parent_actor_id;
  }

  // Field name: transform
  {
    cdr_serialize_geometry_msgs__msg__Transform(
      &ros_message->transform, cdr);
  }

  // Field name: attribute_keys
  {
    size_t size = ros_message->attribute_keys.size;
    auto array_ptr = ros_message->attribute_keys.data;
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

  // Field name: attribute_values
  {
    size_t size = ros_message->attribute_values.size;
    auto array_ptr = ros_message->attribute_values.data;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_deserialize_swarm_world_interfaces__msg__SensorDefinition(
  eprosima::fastcdr::Cdr & cdr,
  swarm_world_interfaces__msg__SensorDefinition * ros_message)
{
  // Field name: sensor_id
  {
    cdr >> ros_message->sensor_id;
  }

  // Field name: type_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type_id.data) {
      rosidl_runtime_c__String__init(&ros_message->type_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type_id'\n");
      return false;
    }
  }

  // Field name: parent_actor_id
  {
    cdr >> ros_message->parent_actor_id;
  }

  // Field name: transform
  {
    cdr_deserialize_geometry_msgs__msg__Transform(cdr, &ros_message->transform);
  }

  // Field name: attribute_keys
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

    if (ros_message->attribute_keys.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->attribute_keys);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->attribute_keys, size)) {
      fprintf(stderr, "failed to create array for field 'attribute_keys'");
      return false;
    }
    auto array_ptr = ros_message->attribute_keys.data;
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
        fprintf(stderr, "failed to assign string into field 'attribute_keys'\n");
        return false;
      }
    }
  }

  // Field name: attribute_values
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

    if (ros_message->attribute_values.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->attribute_values);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->attribute_values, size)) {
      fprintf(stderr, "failed to create array for field 'attribute_values'");
      return false;
    }
    auto array_ptr = ros_message->attribute_values.data;
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
        fprintf(stderr, "failed to assign string into field 'attribute_values'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t get_serialized_size_swarm_world_interfaces__msg__SensorDefinition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorDefinition__ros_msg_type * ros_message = static_cast<const _SensorDefinition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: sensor_id
  {
    size_t item_size = sizeof(ros_message->sensor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: type_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_id.size + 1);

  // Field name: parent_actor_id
  {
    size_t item_size = sizeof(ros_message->parent_actor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: transform
  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform), current_alignment);

  // Field name: attribute_keys
  {
    size_t array_size = ros_message->attribute_keys.size;
    auto array_ptr = ros_message->attribute_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: attribute_values
  {
    size_t array_size = ros_message->attribute_values.size;
    auto array_ptr = ros_message->attribute_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t max_serialized_size_swarm_world_interfaces__msg__SensorDefinition(
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

  // Field name: sensor_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: type_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: parent_actor_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: transform
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: attribute_keys
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

  // Field name: attribute_values
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_world_interfaces__msg__SensorDefinition;
    is_plain =
      (
      offsetof(DataType, attribute_values) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_serialize_key_swarm_world_interfaces__msg__SensorDefinition(
  const swarm_world_interfaces__msg__SensorDefinition * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: sensor_id
  {
    cdr << ros_message->sensor_id;
  }

  // Field name: type_id
  {
    const rosidl_runtime_c__String * str = &ros_message->type_id;
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

  // Field name: parent_actor_id
  {
    cdr << ros_message->parent_actor_id;
  }

  // Field name: transform
  {
    cdr_serialize_key_geometry_msgs__msg__Transform(
      &ros_message->transform, cdr);
  }

  // Field name: attribute_keys
  {
    size_t size = ros_message->attribute_keys.size;
    auto array_ptr = ros_message->attribute_keys.data;
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

  // Field name: attribute_values
  {
    size_t size = ros_message->attribute_values.size;
    auto array_ptr = ros_message->attribute_values.data;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t get_serialized_size_key_swarm_world_interfaces__msg__SensorDefinition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorDefinition__ros_msg_type * ros_message = static_cast<const _SensorDefinition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: sensor_id
  {
    size_t item_size = sizeof(ros_message->sensor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: type_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_id.size + 1);

  // Field name: parent_actor_id
  {
    size_t item_size = sizeof(ros_message->parent_actor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: transform
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Transform(
    &(ros_message->transform), current_alignment);

  // Field name: attribute_keys
  {
    size_t array_size = ros_message->attribute_keys.size;
    auto array_ptr = ros_message->attribute_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: attribute_values
  {
    size_t array_size = ros_message->attribute_values.size;
    auto array_ptr = ros_message->attribute_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t max_serialized_size_key_swarm_world_interfaces__msg__SensorDefinition(
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
  // Field name: sensor_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: type_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: parent_actor_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: transform
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Transform(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: attribute_keys
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

  // Field name: attribute_values
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_world_interfaces__msg__SensorDefinition;
    is_plain =
      (
      offsetof(DataType, attribute_values) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SensorDefinition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const swarm_world_interfaces__msg__SensorDefinition * ros_message = static_cast<const swarm_world_interfaces__msg__SensorDefinition *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_swarm_world_interfaces__msg__SensorDefinition(ros_message, cdr);
}

static bool _SensorDefinition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  swarm_world_interfaces__msg__SensorDefinition * ros_message = static_cast<swarm_world_interfaces__msg__SensorDefinition *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_swarm_world_interfaces__msg__SensorDefinition(cdr, ros_message);
}

static uint32_t _SensorDefinition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_swarm_world_interfaces__msg__SensorDefinition(
      untyped_ros_message, 0));
}

static size_t _SensorDefinition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_swarm_world_interfaces__msg__SensorDefinition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorDefinition = {
  "swarm_world_interfaces::msg",
  "SensorDefinition",
  _SensorDefinition__cdr_serialize,
  _SensorDefinition__cdr_deserialize,
  _SensorDefinition__get_serialized_size,
  _SensorDefinition__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SensorDefinition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorDefinition,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__SensorDefinition__get_type_hash,
  &swarm_world_interfaces__msg__SensorDefinition__get_type_description,
  &swarm_world_interfaces__msg__SensorDefinition__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, msg, SensorDefinition)() {
  return &_SensorDefinition__type_support;
}

#if defined(__cplusplus)
}
#endif
