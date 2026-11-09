// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/PlannerStatus.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/planner_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `drones`
#include "swarm_interfaces/msg/detail/drone_status__functions.h"

bool
swarm_interfaces__msg__PlannerStatus__init(swarm_interfaces__msg__PlannerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__PlannerStatus__fini(msg);
    return false;
  }
  // drones
  if (!swarm_interfaces__msg__DroneStatus__Sequence__init(&msg->drones, 0)) {
    swarm_interfaces__msg__PlannerStatus__fini(msg);
    return false;
  }
  // cycle_time_us
  // cycle_time_max_us
  // deadline_misses
  // clamped_references
  return true;
}

void
swarm_interfaces__msg__PlannerStatus__fini(swarm_interfaces__msg__PlannerStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // drones
  swarm_interfaces__msg__DroneStatus__Sequence__fini(&msg->drones);
  // cycle_time_us
  // cycle_time_max_us
  // deadline_misses
  // clamped_references
}

bool
swarm_interfaces__msg__PlannerStatus__are_equal(const swarm_interfaces__msg__PlannerStatus * lhs, const swarm_interfaces__msg__PlannerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // drones
  if (!swarm_interfaces__msg__DroneStatus__Sequence__are_equal(
      &(lhs->drones), &(rhs->drones)))
  {
    return false;
  }
  // cycle_time_us
  if (lhs->cycle_time_us != rhs->cycle_time_us) {
    return false;
  }
  // cycle_time_max_us
  if (lhs->cycle_time_max_us != rhs->cycle_time_max_us) {
    return false;
  }
  // deadline_misses
  if (lhs->deadline_misses != rhs->deadline_misses) {
    return false;
  }
  // clamped_references
  if (lhs->clamped_references != rhs->clamped_references) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__PlannerStatus__copy(
  const swarm_interfaces__msg__PlannerStatus * input,
  swarm_interfaces__msg__PlannerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // drones
  if (!swarm_interfaces__msg__DroneStatus__Sequence__copy(
      &(input->drones), &(output->drones)))
  {
    return false;
  }
  // cycle_time_us
  output->cycle_time_us = input->cycle_time_us;
  // cycle_time_max_us
  output->cycle_time_max_us = input->cycle_time_max_us;
  // deadline_misses
  output->deadline_misses = input->deadline_misses;
  // clamped_references
  output->clamped_references = input->clamped_references;
  return true;
}

swarm_interfaces__msg__PlannerStatus *
swarm_interfaces__msg__PlannerStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__PlannerStatus * msg = (swarm_interfaces__msg__PlannerStatus *)allocator.allocate(sizeof(swarm_interfaces__msg__PlannerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__PlannerStatus));
  bool success = swarm_interfaces__msg__PlannerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__PlannerStatus__destroy(swarm_interfaces__msg__PlannerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__PlannerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__PlannerStatus__Sequence__init(swarm_interfaces__msg__PlannerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__PlannerStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__PlannerStatus)) {
      return false;
    }
    data = (swarm_interfaces__msg__PlannerStatus *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__PlannerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__PlannerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__PlannerStatus__fini(&data[i - 1]);
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
swarm_interfaces__msg__PlannerStatus__Sequence__fini(swarm_interfaces__msg__PlannerStatus__Sequence * array)
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
      swarm_interfaces__msg__PlannerStatus__fini(&array->data[i]);
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

swarm_interfaces__msg__PlannerStatus__Sequence *
swarm_interfaces__msg__PlannerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__PlannerStatus__Sequence * array = (swarm_interfaces__msg__PlannerStatus__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__PlannerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__PlannerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__PlannerStatus__Sequence__destroy(swarm_interfaces__msg__PlannerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__PlannerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__PlannerStatus__Sequence__are_equal(const swarm_interfaces__msg__PlannerStatus__Sequence * lhs, const swarm_interfaces__msg__PlannerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__PlannerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__PlannerStatus__Sequence__copy(
  const swarm_interfaces__msg__PlannerStatus__Sequence * input,
  swarm_interfaces__msg__PlannerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__PlannerStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__PlannerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__PlannerStatus * data =
      (swarm_interfaces__msg__PlannerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__PlannerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__PlannerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__PlannerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
