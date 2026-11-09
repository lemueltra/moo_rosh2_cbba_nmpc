// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from swarm_world_interfaces:msg/WeatherPreset.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/weather_preset__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "swarm_world_interfaces/msg/detail/weather_preset__struct.h"
#include "swarm_world_interfaces/msg/detail/weather_preset__functions.h"
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

#include "rosidl_runtime_c/string.h"  // preset_name
#include "rosidl_runtime_c/string_functions.h"  // preset_name

// forward declare type support functions


using _WeatherPreset__ros_msg_type = swarm_world_interfaces__msg__WeatherPreset;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_serialize_swarm_world_interfaces__msg__WeatherPreset(
  const swarm_world_interfaces__msg__WeatherPreset * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: preset_name
  {
    const rosidl_runtime_c__String * str = &ros_message->preset_name;
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

  // Field name: cloudiness
  {
    cdr << ros_message->cloudiness;
  }

  // Field name: precipitation
  {
    cdr << ros_message->precipitation;
  }

  // Field name: precipitation_deposits
  {
    cdr << ros_message->precipitation_deposits;
  }

  // Field name: wind_intensity
  {
    cdr << ros_message->wind_intensity;
  }

  // Field name: sun_azimuth_angle
  {
    cdr << ros_message->sun_azimuth_angle;
  }

  // Field name: sun_altitude_angle
  {
    cdr << ros_message->sun_altitude_angle;
  }

  // Field name: fog_density
  {
    cdr << ros_message->fog_density;
  }

  // Field name: fog_distance
  {
    cdr << ros_message->fog_distance;
  }

  // Field name: fog_falloff
  {
    cdr << ros_message->fog_falloff;
  }

  // Field name: wetness
  {
    cdr << ros_message->wetness;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_deserialize_swarm_world_interfaces__msg__WeatherPreset(
  eprosima::fastcdr::Cdr & cdr,
  swarm_world_interfaces__msg__WeatherPreset * ros_message)
{
  // Field name: preset_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->preset_name.data) {
      rosidl_runtime_c__String__init(&ros_message->preset_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->preset_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'preset_name'\n");
      return false;
    }
  }

  // Field name: cloudiness
  {
    cdr >> ros_message->cloudiness;
  }

  // Field name: precipitation
  {
    cdr >> ros_message->precipitation;
  }

  // Field name: precipitation_deposits
  {
    cdr >> ros_message->precipitation_deposits;
  }

  // Field name: wind_intensity
  {
    cdr >> ros_message->wind_intensity;
  }

  // Field name: sun_azimuth_angle
  {
    cdr >> ros_message->sun_azimuth_angle;
  }

  // Field name: sun_altitude_angle
  {
    cdr >> ros_message->sun_altitude_angle;
  }

  // Field name: fog_density
  {
    cdr >> ros_message->fog_density;
  }

  // Field name: fog_distance
  {
    cdr >> ros_message->fog_distance;
  }

  // Field name: fog_falloff
  {
    cdr >> ros_message->fog_falloff;
  }

  // Field name: wetness
  {
    cdr >> ros_message->wetness;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t get_serialized_size_swarm_world_interfaces__msg__WeatherPreset(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WeatherPreset__ros_msg_type * ros_message = static_cast<const _WeatherPreset__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: preset_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->preset_name.size + 1);

  // Field name: cloudiness
  {
    size_t item_size = sizeof(ros_message->cloudiness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: precipitation
  {
    size_t item_size = sizeof(ros_message->precipitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: precipitation_deposits
  {
    size_t item_size = sizeof(ros_message->precipitation_deposits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wind_intensity
  {
    size_t item_size = sizeof(ros_message->wind_intensity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sun_azimuth_angle
  {
    size_t item_size = sizeof(ros_message->sun_azimuth_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sun_altitude_angle
  {
    size_t item_size = sizeof(ros_message->sun_altitude_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fog_density
  {
    size_t item_size = sizeof(ros_message->fog_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fog_distance
  {
    size_t item_size = sizeof(ros_message->fog_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fog_falloff
  {
    size_t item_size = sizeof(ros_message->fog_falloff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wetness
  {
    size_t item_size = sizeof(ros_message->wetness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t max_serialized_size_swarm_world_interfaces__msg__WeatherPreset(
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

  // Field name: preset_name
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

  // Field name: cloudiness
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: precipitation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: precipitation_deposits
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wind_intensity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sun_azimuth_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sun_altitude_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fog_density
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fog_distance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fog_falloff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wetness
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_world_interfaces__msg__WeatherPreset;
    is_plain =
      (
      offsetof(DataType, wetness) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
bool cdr_serialize_key_swarm_world_interfaces__msg__WeatherPreset(
  const swarm_world_interfaces__msg__WeatherPreset * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: preset_name
  {
    const rosidl_runtime_c__String * str = &ros_message->preset_name;
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

  // Field name: cloudiness
  {
    cdr << ros_message->cloudiness;
  }

  // Field name: precipitation
  {
    cdr << ros_message->precipitation;
  }

  // Field name: precipitation_deposits
  {
    cdr << ros_message->precipitation_deposits;
  }

  // Field name: wind_intensity
  {
    cdr << ros_message->wind_intensity;
  }

  // Field name: sun_azimuth_angle
  {
    cdr << ros_message->sun_azimuth_angle;
  }

  // Field name: sun_altitude_angle
  {
    cdr << ros_message->sun_altitude_angle;
  }

  // Field name: fog_density
  {
    cdr << ros_message->fog_density;
  }

  // Field name: fog_distance
  {
    cdr << ros_message->fog_distance;
  }

  // Field name: fog_falloff
  {
    cdr << ros_message->fog_falloff;
  }

  // Field name: wetness
  {
    cdr << ros_message->wetness;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t get_serialized_size_key_swarm_world_interfaces__msg__WeatherPreset(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WeatherPreset__ros_msg_type * ros_message = static_cast<const _WeatherPreset__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: preset_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->preset_name.size + 1);

  // Field name: cloudiness
  {
    size_t item_size = sizeof(ros_message->cloudiness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: precipitation
  {
    size_t item_size = sizeof(ros_message->precipitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: precipitation_deposits
  {
    size_t item_size = sizeof(ros_message->precipitation_deposits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wind_intensity
  {
    size_t item_size = sizeof(ros_message->wind_intensity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sun_azimuth_angle
  {
    size_t item_size = sizeof(ros_message->sun_azimuth_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sun_altitude_angle
  {
    size_t item_size = sizeof(ros_message->sun_altitude_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fog_density
  {
    size_t item_size = sizeof(ros_message->fog_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fog_distance
  {
    size_t item_size = sizeof(ros_message->fog_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fog_falloff
  {
    size_t item_size = sizeof(ros_message->fog_falloff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wetness
  {
    size_t item_size = sizeof(ros_message->wetness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_world_interfaces
size_t max_serialized_size_key_swarm_world_interfaces__msg__WeatherPreset(
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
  // Field name: preset_name
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

  // Field name: cloudiness
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: precipitation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: precipitation_deposits
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wind_intensity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sun_azimuth_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sun_altitude_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fog_density
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fog_distance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: fog_falloff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wetness
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_world_interfaces__msg__WeatherPreset;
    is_plain =
      (
      offsetof(DataType, wetness) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _WeatherPreset__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const swarm_world_interfaces__msg__WeatherPreset * ros_message = static_cast<const swarm_world_interfaces__msg__WeatherPreset *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_swarm_world_interfaces__msg__WeatherPreset(ros_message, cdr);
}

static bool _WeatherPreset__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  swarm_world_interfaces__msg__WeatherPreset * ros_message = static_cast<swarm_world_interfaces__msg__WeatherPreset *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_swarm_world_interfaces__msg__WeatherPreset(cdr, ros_message);
}

static uint32_t _WeatherPreset__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_swarm_world_interfaces__msg__WeatherPreset(
      untyped_ros_message, 0));
}

static size_t _WeatherPreset__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_swarm_world_interfaces__msg__WeatherPreset(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WeatherPreset = {
  "swarm_world_interfaces::msg",
  "WeatherPreset",
  _WeatherPreset__cdr_serialize,
  _WeatherPreset__cdr_deserialize,
  _WeatherPreset__get_serialized_size,
  _WeatherPreset__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WeatherPreset__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WeatherPreset,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__WeatherPreset__get_type_hash,
  &swarm_world_interfaces__msg__WeatherPreset__get_type_description,
  &swarm_world_interfaces__msg__WeatherPreset__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, msg, WeatherPreset)() {
  return &_WeatherPreset__type_support;
}

#if defined(__cplusplus)
}
#endif
