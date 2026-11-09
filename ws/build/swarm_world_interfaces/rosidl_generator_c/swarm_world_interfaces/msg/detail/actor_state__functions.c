// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_world_interfaces:msg/ActorState.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/actor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type_id`
// Member `role_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration`
// Member `bounding_box_extent`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
swarm_world_interfaces__msg__ActorState__init(swarm_world_interfaces__msg__ActorState * msg)
{
  if (!msg) {
    return false;
  }
  // actor_id
  // type_id
  if (!rosidl_runtime_c__String__init(&msg->type_id)) {
    swarm_world_interfaces__msg__ActorState__fini(msg);
    return false;
  }
  // role_name
  if (!rosidl_runtime_c__String__init(&msg->role_name)) {
    swarm_world_interfaces__msg__ActorState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    swarm_world_interfaces__msg__ActorState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    swarm_world_interfaces__msg__ActorState__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    swarm_world_interfaces__msg__ActorState__fini(msg);
    return false;
  }
  // bounding_box_extent
  if (!geometry_msgs__msg__Vector3__init(&msg->bounding_box_extent)) {
    swarm_world_interfaces__msg__ActorState__fini(msg);
    return false;
  }
  // active
  // control_source
  return true;
}

void
swarm_world_interfaces__msg__ActorState__fini(swarm_world_interfaces__msg__ActorState * msg)
{
  if (!msg) {
    return;
  }
  // actor_id
  // type_id
  rosidl_runtime_c__String__fini(&msg->type_id);
  // role_name
  rosidl_runtime_c__String__fini(&msg->role_name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // bounding_box_extent
  geometry_msgs__msg__Vector3__fini(&msg->bounding_box_extent);
  // active
  // control_source
}

bool
swarm_world_interfaces__msg__ActorState__are_equal(const swarm_world_interfaces__msg__ActorState * lhs, const swarm_world_interfaces__msg__ActorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actor_id
  if (lhs->actor_id != rhs->actor_id) {
    return false;
  }
  // type_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type_id), &(rhs->type_id)))
  {
    return false;
  }
  // role_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->role_name), &(rhs->role_name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // bounding_box_extent
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->bounding_box_extent), &(rhs->bounding_box_extent)))
  {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // control_source
  if (lhs->control_source != rhs->control_source) {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__msg__ActorState__copy(
  const swarm_world_interfaces__msg__ActorState * input,
  swarm_world_interfaces__msg__ActorState * output)
{
  if (!input || !output) {
    return false;
  }
  // actor_id
  output->actor_id = input->actor_id;
  // type_id
  if (!rosidl_runtime_c__String__copy(
      &(input->type_id), &(output->type_id)))
  {
    return false;
  }
  // role_name
  if (!rosidl_runtime_c__String__copy(
      &(input->role_name), &(output->role_name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // bounding_box_extent
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->bounding_box_extent), &(output->bounding_box_extent)))
  {
    return false;
  }
  // active
  output->active = input->active;
  // control_source
  output->control_source = input->control_source;
  return true;
}

swarm_world_interfaces__msg__ActorState *
swarm_world_interfaces__msg__ActorState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__ActorState * msg = (swarm_world_interfaces__msg__ActorState *)allocator.allocate(sizeof(swarm_world_interfaces__msg__ActorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__msg__ActorState));
  bool success = swarm_world_interfaces__msg__ActorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__msg__ActorState__destroy(swarm_world_interfaces__msg__ActorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__msg__ActorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__msg__ActorState__Sequence__init(swarm_world_interfaces__msg__ActorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__ActorState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__ActorState)) {
      return false;
    }
    data = (swarm_world_interfaces__msg__ActorState *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__msg__ActorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__msg__ActorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__msg__ActorState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
swarm_world_interfaces__msg__ActorState__Sequence__fini(swarm_world_interfaces__msg__ActorState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      swarm_world_interfaces__msg__ActorState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

swarm_world_interfaces__msg__ActorState__Sequence *
swarm_world_interfaces__msg__ActorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__ActorState__Sequence * array = (swarm_world_interfaces__msg__ActorState__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__msg__ActorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__msg__ActorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__msg__ActorState__Sequence__destroy(swarm_world_interfaces__msg__ActorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__msg__ActorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__msg__ActorState__Sequence__are_equal(const swarm_world_interfaces__msg__ActorState__Sequence * lhs, const swarm_world_interfaces__msg__ActorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__msg__ActorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__msg__ActorState__Sequence__copy(
  const swarm_world_interfaces__msg__ActorState__Sequence * input,
  swarm_world_interfaces__msg__ActorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__ActorState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__msg__ActorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__msg__ActorState * data =
      (swarm_world_interfaces__msg__ActorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__msg__ActorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__msg__ActorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__msg__ActorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
