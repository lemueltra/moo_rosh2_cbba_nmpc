// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_interfaces:msg/PlannerStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_interfaces/msg/detail/planner_status__rosidl_typesupport_introspection_c.h"
#include "swarm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_interfaces/msg/detail/planner_status__functions.h"
#include "swarm_interfaces/msg/detail/planner_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `drones`
#include "swarm_interfaces/msg/drone_status.h"
// Member `drones`
#include "swarm_interfaces/msg/detail/drone_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_interfaces__msg__PlannerStatus__init(message_memory);
}

void swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_fini_function(void * message_memory)
{
  swarm_interfaces__msg__PlannerStatus__fini(message_memory);
}

size_t swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__size_function__PlannerStatus__drones(
  const void * untyped_member)
{
  const swarm_interfaces__msg__DroneStatus__Sequence * member =
    (const swarm_interfaces__msg__DroneStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__get_const_function__PlannerStatus__drones(
  const void * untyped_member, size_t index)
{
  const swarm_interfaces__msg__DroneStatus__Sequence * member =
    (const swarm_interfaces__msg__DroneStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__get_function__PlannerStatus__drones(
  void * untyped_member, size_t index)
{
  swarm_interfaces__msg__DroneStatus__Sequence * member =
    (swarm_interfaces__msg__DroneStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__fetch_function__PlannerStatus__drones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const swarm_interfaces__msg__DroneStatus * item =
    ((const swarm_interfaces__msg__DroneStatus *)
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__get_const_function__PlannerStatus__drones(untyped_member, index));
  swarm_interfaces__msg__DroneStatus * value =
    (swarm_interfaces__msg__DroneStatus *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__assign_function__PlannerStatus__drones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  swarm_interfaces__msg__DroneStatus * item =
    ((swarm_interfaces__msg__DroneStatus *)
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__get_function__PlannerStatus__drones(untyped_member, index));
  const swarm_interfaces__msg__DroneStatus * value =
    (const swarm_interfaces__msg__DroneStatus *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__resize_function__PlannerStatus__drones(
  void * untyped_member, size_t size)
{
  swarm_interfaces__msg__DroneStatus__Sequence * member =
    (swarm_interfaces__msg__DroneStatus__Sequence *)(untyped_member);
  swarm_interfaces__msg__DroneStatus__Sequence__fini(member);
  return swarm_interfaces__msg__DroneStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__PlannerStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__PlannerStatus, drones),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__size_function__PlannerStatus__drones,  // size() function pointer
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__get_const_function__PlannerStatus__drones,  // get_const(index) function pointer
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__get_function__PlannerStatus__drones,  // get(index) function pointer
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__fetch_function__PlannerStatus__drones,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__assign_function__PlannerStatus__drones,  // assign(index, value) function pointer
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__resize_function__PlannerStatus__drones  // resize(index) function pointer
  },
  {
    "cycle_time_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__PlannerStatus, cycle_time_us),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cycle_time_max_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__PlannerStatus, cycle_time_max_us),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deadline_misses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__PlannerStatus, deadline_misses),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clamped_references",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__PlannerStatus, clamped_references),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_members = {
  "swarm_interfaces__msg",  // message namespace
  "PlannerStatus",  // message name
  6,  // number of fields
  sizeof(swarm_interfaces__msg__PlannerStatus),
  false,  // has_any_key_member_
  swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_member_array,  // message members
  swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_type_support_handle = {
  0,
  &swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__PlannerStatus__get_type_hash,
  &swarm_interfaces__msg__PlannerStatus__get_type_description,
  &swarm_interfaces__msg__PlannerStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_interfaces, msg, PlannerStatus)() {
  swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_interfaces, msg, DroneStatus)();
  if (!swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_type_support_handle.typesupport_identifier) {
    swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_interfaces__msg__PlannerStatus__rosidl_typesupport_introspection_c__PlannerStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
