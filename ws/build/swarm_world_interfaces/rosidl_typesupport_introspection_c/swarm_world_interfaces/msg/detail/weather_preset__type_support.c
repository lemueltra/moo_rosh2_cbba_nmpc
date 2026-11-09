// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_world_interfaces:msg/WeatherPreset.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_world_interfaces/msg/detail/weather_preset__rosidl_typesupport_introspection_c.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_world_interfaces/msg/detail/weather_preset__functions.h"
#include "swarm_world_interfaces/msg/detail/weather_preset__struct.h"


// Include directives for member types
// Member `preset_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__msg__WeatherPreset__init(message_memory);
}

void swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_fini_function(void * message_memory)
{
  swarm_world_interfaces__msg__WeatherPreset__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_message_member_array[11] = {
  {
    "preset_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, preset_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cloudiness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, cloudiness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "precipitation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, precipitation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "precipitation_deposits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, precipitation_deposits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wind_intensity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, wind_intensity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sun_azimuth_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, sun_azimuth_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sun_altitude_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, sun_altitude_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fog_density",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, fog_density),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fog_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, fog_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fog_falloff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, fog_falloff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wetness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__WeatherPreset, wetness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_message_members = {
  "swarm_world_interfaces__msg",  // message namespace
  "WeatherPreset",  // message name
  11,  // number of fields
  sizeof(swarm_world_interfaces__msg__WeatherPreset),
  false,  // has_any_key_member_
  swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_message_member_array,  // message members
  swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_message_type_support_handle = {
  0,
  &swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__WeatherPreset__get_type_hash,
  &swarm_world_interfaces__msg__WeatherPreset__get_type_description,
  &swarm_world_interfaces__msg__WeatherPreset__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, msg, WeatherPreset)() {
  if (!swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__msg__WeatherPreset__rosidl_typesupport_introspection_c__WeatherPreset_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
