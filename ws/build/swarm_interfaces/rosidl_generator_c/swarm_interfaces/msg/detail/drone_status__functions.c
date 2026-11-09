// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/drone_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
swarm_interfaces__msg__DroneStatus__init(swarm_interfaces__msg__DroneStatus * msg)
{
  if (!msg) {
    return false;
  }
  // drone_id
  // mode
  // position_error
  // yaw_error
  // eta
  // replan_count
  // compute_time_us
  return true;
}

void
swarm_interfaces__msg__DroneStatus__fini(swarm_interfaces__msg__DroneStatus * msg)
{
  if (!msg) {
    return;
  }
  // drone_id
  // mode
  // position_error
  // yaw_error
  // eta
  // replan_count
  // compute_time_us
}

bool
swarm_interfaces__msg__DroneStatus__are_equal(const swarm_interfaces__msg__DroneStatus * lhs, const swarm_interfaces__msg__DroneStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drone_id
  if (lhs->drone_id != rhs->drone_id) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // position_error
  if (lhs->position_error != rhs->position_error) {
    return false;
  }
  // yaw_error
  if (lhs->yaw_error != rhs->yaw_error) {
    return false;
  }
  // eta
  if (lhs->eta != rhs->eta) {
    return false;
  }
  // replan_count
  if (lhs->replan_count != rhs->replan_count) {
    return false;
  }
  // compute_time_us
  if (lhs->compute_time_us != rhs->compute_time_us) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__DroneStatus__copy(
  const swarm_interfaces__msg__DroneStatus * input,
  swarm_interfaces__msg__DroneStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // drone_id
  output->drone_id = input->drone_id;
  // mode
  output->mode = input->mode;
  // position_error
  output->position_error = input->position_error;
  // yaw_error
  output->yaw_error = input->yaw_error;
  // eta
  output->eta = input->eta;
  // replan_count
  output->replan_count = input->replan_count;
  // compute_time_us
  output->compute_time_us = input->compute_time_us;
  return true;
}

swarm_interfaces__msg__DroneStatus *
swarm_interfaces__msg__DroneStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneStatus * msg = (swarm_interfaces__msg__DroneStatus *)allocator.allocate(sizeof(swarm_interfaces__msg__DroneStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__DroneStatus));
  bool success = swarm_interfaces__msg__DroneStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__DroneStatus__destroy(swarm_interfaces__msg__DroneStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__DroneStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__DroneStatus__Sequence__init(swarm_interfaces__msg__DroneStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__DroneStatus)) {
      return false;
    }
    data = (swarm_interfaces__msg__DroneStatus *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__DroneStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__DroneStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__DroneStatus__fini(&data[i - 1]);
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
swarm_interfaces__msg__DroneStatus__Sequence__fini(swarm_interfaces__msg__DroneStatus__Sequence * array)
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
      swarm_interfaces__msg__DroneStatus__fini(&array->data[i]);
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

swarm_interfaces__msg__DroneStatus__Sequence *
swarm_interfaces__msg__DroneStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneStatus__Sequence * array = (swarm_interfaces__msg__DroneStatus__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__DroneStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__DroneStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__DroneStatus__Sequence__destroy(swarm_interfaces__msg__DroneStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__DroneStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__DroneStatus__Sequence__are_equal(const swarm_interfaces__msg__DroneStatus__Sequence * lhs, const swarm_interfaces__msg__DroneStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__DroneStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__DroneStatus__Sequence__copy(
  const swarm_interfaces__msg__DroneStatus__Sequence * input,
  swarm_interfaces__msg__DroneStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__DroneStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__DroneStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__DroneStatus * data =
      (swarm_interfaces__msg__DroneStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__DroneStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__DroneStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__DroneStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
