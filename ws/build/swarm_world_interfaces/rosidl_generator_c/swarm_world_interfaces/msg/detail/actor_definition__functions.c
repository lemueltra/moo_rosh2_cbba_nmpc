// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_world_interfaces:msg/ActorDefinition.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/actor_definition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type_id`
// Member `role_name`
// Member `attribute_keys`
// Member `attribute_values`
#include "rosidl_runtime_c/string_functions.h"
// Member `initial_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
swarm_world_interfaces__msg__ActorDefinition__init(swarm_world_interfaces__msg__ActorDefinition * msg)
{
  if (!msg) {
    return false;
  }
  // actor_id
  // type_id
  if (!rosidl_runtime_c__String__init(&msg->type_id)) {
    swarm_world_interfaces__msg__ActorDefinition__fini(msg);
    return false;
  }
  // role_name
  if (!rosidl_runtime_c__String__init(&msg->role_name)) {
    swarm_world_interfaces__msg__ActorDefinition__fini(msg);
    return false;
  }
  // initial_pose
  if (!geometry_msgs__msg__Pose__init(&msg->initial_pose)) {
    swarm_world_interfaces__msg__ActorDefinition__fini(msg);
    return false;
  }
  // parent_id
  // attribute_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->attribute_keys, 0)) {
    swarm_world_interfaces__msg__ActorDefinition__fini(msg);
    return false;
  }
  // attribute_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->attribute_values, 0)) {
    swarm_world_interfaces__msg__ActorDefinition__fini(msg);
    return false;
  }
  return true;
}

void
swarm_world_interfaces__msg__ActorDefinition__fini(swarm_world_interfaces__msg__ActorDefinition * msg)
{
  if (!msg) {
    return;
  }
  // actor_id
  // type_id
  rosidl_runtime_c__String__fini(&msg->type_id);
  // role_name
  rosidl_runtime_c__String__fini(&msg->role_name);
  // initial_pose
  geometry_msgs__msg__Pose__fini(&msg->initial_pose);
  // parent_id
  // attribute_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->attribute_keys);
  // attribute_values
  rosidl_runtime_c__String__Sequence__fini(&msg->attribute_values);
}

bool
swarm_world_interfaces__msg__ActorDefinition__are_equal(const swarm_world_interfaces__msg__ActorDefinition * lhs, const swarm_world_interfaces__msg__ActorDefinition * rhs)
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
  // initial_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->initial_pose), &(rhs->initial_pose)))
  {
    return false;
  }
  // parent_id
  if (lhs->parent_id != rhs->parent_id) {
    return false;
  }
  // attribute_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->attribute_keys), &(rhs->attribute_keys)))
  {
    return false;
  }
  // attribute_values
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->attribute_values), &(rhs->attribute_values)))
  {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__msg__ActorDefinition__copy(
  const swarm_world_interfaces__msg__ActorDefinition * input,
  swarm_world_interfaces__msg__ActorDefinition * output)
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
  // initial_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->initial_pose), &(output->initial_pose)))
  {
    return false;
  }
  // parent_id
  output->parent_id = input->parent_id;
  // attribute_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->attribute_keys), &(output->attribute_keys)))
  {
    return false;
  }
  // attribute_values
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->attribute_values), &(output->attribute_values)))
  {
    return false;
  }
  return true;
}

swarm_world_interfaces__msg__ActorDefinition *
swarm_world_interfaces__msg__ActorDefinition__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__ActorDefinition * msg = (swarm_world_interfaces__msg__ActorDefinition *)allocator.allocate(sizeof(swarm_world_interfaces__msg__ActorDefinition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__msg__ActorDefinition));
  bool success = swarm_world_interfaces__msg__ActorDefinition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__msg__ActorDefinition__destroy(swarm_world_interfaces__msg__ActorDefinition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__msg__ActorDefinition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__msg__ActorDefinition__Sequence__init(swarm_world_interfaces__msg__ActorDefinition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__ActorDefinition * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__ActorDefinition)) {
      return false;
    }
    data = (swarm_world_interfaces__msg__ActorDefinition *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__msg__ActorDefinition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__msg__ActorDefinition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__msg__ActorDefinition__fini(&data[i - 1]);
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
swarm_world_interfaces__msg__ActorDefinition__Sequence__fini(swarm_world_interfaces__msg__ActorDefinition__Sequence * array)
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
      swarm_world_interfaces__msg__ActorDefinition__fini(&array->data[i]);
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

swarm_world_interfaces__msg__ActorDefinition__Sequence *
swarm_world_interfaces__msg__ActorDefinition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__ActorDefinition__Sequence * array = (swarm_world_interfaces__msg__ActorDefinition__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__msg__ActorDefinition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__msg__ActorDefinition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__msg__ActorDefinition__Sequence__destroy(swarm_world_interfaces__msg__ActorDefinition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__msg__ActorDefinition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__msg__ActorDefinition__Sequence__are_equal(const swarm_world_interfaces__msg__ActorDefinition__Sequence * lhs, const swarm_world_interfaces__msg__ActorDefinition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__msg__ActorDefinition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__msg__ActorDefinition__Sequence__copy(
  const swarm_world_interfaces__msg__ActorDefinition__Sequence * input,
  swarm_world_interfaces__msg__ActorDefinition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__ActorDefinition)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__msg__ActorDefinition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__msg__ActorDefinition * data =
      (swarm_world_interfaces__msg__ActorDefinition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__msg__ActorDefinition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__msg__ActorDefinition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__msg__ActorDefinition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
