// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/MetricEntry.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/metric_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"

bool
swarm_interfaces__msg__MetricEntry__init(swarm_interfaces__msg__MetricEntry * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    swarm_interfaces__msg__MetricEntry__fini(msg);
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    swarm_interfaces__msg__MetricEntry__fini(msg);
    return false;
  }
  // value
  // valid
  return true;
}

void
swarm_interfaces__msg__MetricEntry__fini(swarm_interfaces__msg__MetricEntry * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
  // value
  // valid
}

bool
swarm_interfaces__msg__MetricEntry__are_equal(const swarm_interfaces__msg__MetricEntry * lhs, const swarm_interfaces__msg__MetricEntry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__MetricEntry__copy(
  const swarm_interfaces__msg__MetricEntry * input,
  swarm_interfaces__msg__MetricEntry * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  // value
  output->value = input->value;
  // valid
  output->valid = input->valid;
  return true;
}

swarm_interfaces__msg__MetricEntry *
swarm_interfaces__msg__MetricEntry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__MetricEntry * msg = (swarm_interfaces__msg__MetricEntry *)allocator.allocate(sizeof(swarm_interfaces__msg__MetricEntry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__MetricEntry));
  bool success = swarm_interfaces__msg__MetricEntry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__MetricEntry__destroy(swarm_interfaces__msg__MetricEntry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__MetricEntry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__MetricEntry__Sequence__init(swarm_interfaces__msg__MetricEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__MetricEntry * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__MetricEntry)) {
      return false;
    }
    data = (swarm_interfaces__msg__MetricEntry *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__MetricEntry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__MetricEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__MetricEntry__fini(&data[i - 1]);
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
swarm_interfaces__msg__MetricEntry__Sequence__fini(swarm_interfaces__msg__MetricEntry__Sequence * array)
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
      swarm_interfaces__msg__MetricEntry__fini(&array->data[i]);
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

swarm_interfaces__msg__MetricEntry__Sequence *
swarm_interfaces__msg__MetricEntry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__MetricEntry__Sequence * array = (swarm_interfaces__msg__MetricEntry__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__MetricEntry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__MetricEntry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__MetricEntry__Sequence__destroy(swarm_interfaces__msg__MetricEntry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__MetricEntry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__MetricEntry__Sequence__are_equal(const swarm_interfaces__msg__MetricEntry__Sequence * lhs, const swarm_interfaces__msg__MetricEntry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__MetricEntry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__MetricEntry__Sequence__copy(
  const swarm_interfaces__msg__MetricEntry__Sequence * input,
  swarm_interfaces__msg__MetricEntry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__MetricEntry)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__MetricEntry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__MetricEntry * data =
      (swarm_interfaces__msg__MetricEntry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__MetricEntry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__MetricEntry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__MetricEntry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
