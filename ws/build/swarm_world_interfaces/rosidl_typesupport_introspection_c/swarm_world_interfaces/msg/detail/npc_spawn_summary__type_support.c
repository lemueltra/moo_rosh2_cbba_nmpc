// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__rosidl_typesupport_introspection_c.h"
#include "swarm_world_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__functions.h"
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `vehicle_actor_ids`
// Member `pedestrian_actor_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `vehicle_types`
// Member `pedestrian_types`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_world_interfaces__msg__NpcSpawnSummary__init(message_memory);
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_fini_function(void * message_memory)
{
  swarm_world_interfaces__msg__NpcSpawnSummary__fini(message_memory);
}

size_t swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__size_function__NpcSpawnSummary__vehicle_actor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__vehicle_actor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__vehicle_actor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__fetch_function__NpcSpawnSummary__vehicle_actor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__vehicle_actor_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__assign_function__NpcSpawnSummary__vehicle_actor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__vehicle_actor_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__resize_function__NpcSpawnSummary__vehicle_actor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__size_function__NpcSpawnSummary__pedestrian_actor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__pedestrian_actor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__pedestrian_actor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__fetch_function__NpcSpawnSummary__pedestrian_actor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__pedestrian_actor_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__assign_function__NpcSpawnSummary__pedestrian_actor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__pedestrian_actor_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__resize_function__NpcSpawnSummary__pedestrian_actor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__size_function__NpcSpawnSummary__vehicle_types(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__vehicle_types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__vehicle_types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__fetch_function__NpcSpawnSummary__vehicle_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__vehicle_types(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__assign_function__NpcSpawnSummary__vehicle_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__vehicle_types(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__resize_function__NpcSpawnSummary__vehicle_types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__size_function__NpcSpawnSummary__pedestrian_types(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__pedestrian_types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__pedestrian_types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__fetch_function__NpcSpawnSummary__pedestrian_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__pedestrian_types(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__assign_function__NpcSpawnSummary__pedestrian_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__pedestrian_types(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__resize_function__NpcSpawnSummary__pedestrian_types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, seed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, requested_vehicles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_pedestrians",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, requested_pedestrians),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spawned_vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, spawned_vehicles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spawned_pedestrians",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, spawned_pedestrians),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_actor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, vehicle_actor_ids),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__size_function__NpcSpawnSummary__vehicle_actor_ids,  // size() function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__vehicle_actor_ids,  // get_const(index) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__vehicle_actor_ids,  // get(index) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__fetch_function__NpcSpawnSummary__vehicle_actor_ids,  // fetch(index, &value) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__assign_function__NpcSpawnSummary__vehicle_actor_ids,  // assign(index, value) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__resize_function__NpcSpawnSummary__vehicle_actor_ids  // resize(index) function pointer
  },
  {
    "pedestrian_actor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, pedestrian_actor_ids),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__size_function__NpcSpawnSummary__pedestrian_actor_ids,  // size() function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__pedestrian_actor_ids,  // get_const(index) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__pedestrian_actor_ids,  // get(index) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__fetch_function__NpcSpawnSummary__pedestrian_actor_ids,  // fetch(index, &value) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__assign_function__NpcSpawnSummary__pedestrian_actor_ids,  // assign(index, value) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__resize_function__NpcSpawnSummary__pedestrian_actor_ids  // resize(index) function pointer
  },
  {
    "vehicle_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, vehicle_types),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__size_function__NpcSpawnSummary__vehicle_types,  // size() function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__vehicle_types,  // get_const(index) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__vehicle_types,  // get(index) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__fetch_function__NpcSpawnSummary__vehicle_types,  // fetch(index, &value) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__assign_function__NpcSpawnSummary__vehicle_types,  // assign(index, value) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__resize_function__NpcSpawnSummary__vehicle_types  // resize(index) function pointer
  },
  {
    "pedestrian_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, pedestrian_types),  // bytes offset in struct
    NULL,  // default value
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__size_function__NpcSpawnSummary__pedestrian_types,  // size() function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_const_function__NpcSpawnSummary__pedestrian_types,  // get_const(index) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__get_function__NpcSpawnSummary__pedestrian_types,  // get(index) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__fetch_function__NpcSpawnSummary__pedestrian_types,  // fetch(index, &value) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__assign_function__NpcSpawnSummary__pedestrian_types,  // assign(index, value) function pointer
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__resize_function__NpcSpawnSummary__pedestrian_types  // resize(index) function pointer
  },
  {
    "elapsed_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_world_interfaces__msg__NpcSpawnSummary, elapsed_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_members = {
  "swarm_world_interfaces__msg",  // message namespace
  "NpcSpawnSummary",  // message name
  11,  // number of fields
  sizeof(swarm_world_interfaces__msg__NpcSpawnSummary),
  false,  // has_any_key_member_
  swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_member_array,  // message members
  swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_type_support_handle = {
  0,
  &swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_members,
  get_message_typesupport_handle_function,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_hash,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_description,
  &swarm_world_interfaces__msg__NpcSpawnSummary__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_world_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, msg, NpcSpawnSummary)() {
  swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_type_support_handle.typesupport_identifier) {
    swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_world_interfaces__msg__NpcSpawnSummary__rosidl_typesupport_introspection_c__NpcSpawnSummary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
