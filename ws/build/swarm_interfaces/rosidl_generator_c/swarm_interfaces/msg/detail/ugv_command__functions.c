// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/UgvCommand.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/ugv_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
swarm_interfaces__msg__UgvCommand__init(swarm_interfaces__msg__UgvCommand * msg)
{
  if (!msg) {
    return false;
  }
  // ugv_id
  // throttle
  // steer
  // brake
  // hand_brake
  // reverse
  // active_cmd
  return true;
}

void
swarm_interfaces__msg__UgvCommand__fini(swarm_interfaces__msg__UgvCommand * msg)
{
  if (!msg) {
    return;
  }
  // ugv_id
  // throttle
  // steer
  // brake
  // hand_brake
  // reverse
  // active_cmd
}

bool
swarm_interfaces__msg__UgvCommand__are_equal(const swarm_interfaces__msg__UgvCommand * lhs, const swarm_interfaces__msg__UgvCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ugv_id
  if (lhs->ugv_id != rhs->ugv_id) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // steer
  if (lhs->steer != rhs->steer) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // hand_brake
  if (lhs->hand_brake != rhs->hand_brake) {
    return false;
  }
  // reverse
  if (lhs->reverse != rhs->reverse) {
    return false;
  }
  // active_cmd
  if (lhs->active_cmd != rhs->active_cmd) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__UgvCommand__copy(
  const swarm_interfaces__msg__UgvCommand * input,
  swarm_interfaces__msg__UgvCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // ugv_id
  output->ugv_id = input->ugv_id;
  // throttle
  output->throttle = input->throttle;
  // steer
  output->steer = input->steer;
  // brake
  output->brake = input->brake;
  // hand_brake
  output->hand_brake = input->hand_brake;
  // reverse
  output->reverse = input->reverse;
  // active_cmd
  output->active_cmd = input->active_cmd;
  return true;
}

swarm_interfaces__msg__UgvCommand *
swarm_interfaces__msg__UgvCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UgvCommand * msg = (swarm_interfaces__msg__UgvCommand *)allocator.allocate(sizeof(swarm_interfaces__msg__UgvCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__UgvCommand));
  bool success = swarm_interfaces__msg__UgvCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__UgvCommand__destroy(swarm_interfaces__msg__UgvCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__UgvCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__UgvCommand__Sequence__init(swarm_interfaces__msg__UgvCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UgvCommand * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__UgvCommand)) {
      return false;
    }
    data = (swarm_interfaces__msg__UgvCommand *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__UgvCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__UgvCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__UgvCommand__fini(&data[i - 1]);
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
swarm_interfaces__msg__UgvCommand__Sequence__fini(swarm_interfaces__msg__UgvCommand__Sequence * array)
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
      swarm_interfaces__msg__UgvCommand__fini(&array->data[i]);
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

swarm_interfaces__msg__UgvCommand__Sequence *
swarm_interfaces__msg__UgvCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UgvCommand__Sequence * array = (swarm_interfaces__msg__UgvCommand__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__UgvCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__UgvCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__UgvCommand__Sequence__destroy(swarm_interfaces__msg__UgvCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__UgvCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__UgvCommand__Sequence__are_equal(const swarm_interfaces__msg__UgvCommand__Sequence * lhs, const swarm_interfaces__msg__UgvCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__UgvCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__UgvCommand__Sequence__copy(
  const swarm_interfaces__msg__UgvCommand__Sequence * input,
  swarm_interfaces__msg__UgvCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__UgvCommand)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__UgvCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__UgvCommand * data =
      (swarm_interfaces__msg__UgvCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__UgvCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__UgvCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__UgvCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
