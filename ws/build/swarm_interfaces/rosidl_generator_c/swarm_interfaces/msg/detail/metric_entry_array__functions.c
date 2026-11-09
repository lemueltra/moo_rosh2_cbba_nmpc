// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/MetricEntryArray.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/metric_entry_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `params_hash`
#include "rosidl_runtime_c/string_functions.h"
// Member `entries`
#include "swarm_interfaces/msg/detail/metric_entry__functions.h"

bool
swarm_interfaces__msg__MetricEntryArray__init(swarm_interfaces__msg__MetricEntryArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__MetricEntryArray__fini(msg);
    return false;
  }
  // model_based
  // params_hash
  if (!rosidl_runtime_c__String__init(&msg->params_hash)) {
    swarm_interfaces__msg__MetricEntryArray__fini(msg);
    return false;
  }
  // window_sec
  // warming_up
  // n_frames_in_window
  // entries
  if (!swarm_interfaces__msg__MetricEntry__Sequence__init(&msg->entries, 0)) {
    swarm_interfaces__msg__MetricEntryArray__fini(msg);
    return false;
  }
  return true;
}

void
swarm_interfaces__msg__MetricEntryArray__fini(swarm_interfaces__msg__MetricEntryArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // model_based
  // params_hash
  rosidl_runtime_c__String__fini(&msg->params_hash);
  // window_sec
  // warming_up
  // n_frames_in_window
  // entries
  swarm_interfaces__msg__MetricEntry__Sequence__fini(&msg->entries);
}

bool
swarm_interfaces__msg__MetricEntryArray__are_equal(const swarm_interfaces__msg__MetricEntryArray * lhs, const swarm_interfaces__msg__MetricEntryArray * rhs)
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
  // model_based
  if (lhs->model_based != rhs->model_based) {
    return false;
  }
  // params_hash
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->params_hash), &(rhs->params_hash)))
  {
    return false;
  }
  // window_sec
  if (lhs->window_sec != rhs->window_sec) {
    return false;
  }
  // warming_up
  if (lhs->warming_up != rhs->warming_up) {
    return false;
  }
  // n_frames_in_window
  if (lhs->n_frames_in_window != rhs->n_frames_in_window) {
    return false;
  }
  // entries
  if (!swarm_interfaces__msg__MetricEntry__Sequence__are_equal(
      &(lhs->entries), &(rhs->entries)))
  {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__MetricEntryArray__copy(
  const swarm_interfaces__msg__MetricEntryArray * input,
  swarm_interfaces__msg__MetricEntryArray * output)
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
  // model_based
  output->model_based = input->model_based;
  // params_hash
  if (!rosidl_runtime_c__String__copy(
      &(input->params_hash), &(output->params_hash)))
  {
    return false;
  }
  // window_sec
  output->window_sec = input->window_sec;
  // warming_up
  output->warming_up = input->warming_up;
  // n_frames_in_window
  output->n_frames_in_window = input->n_frames_in_window;
  // entries
  if (!swarm_interfaces__msg__MetricEntry__Sequence__copy(
      &(input->entries), &(output->entries)))
  {
    return false;
  }
  return true;
}

swarm_interfaces__msg__MetricEntryArray *
swarm_interfaces__msg__MetricEntryArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__MetricEntryArray * msg = (swarm_interfaces__msg__MetricEntryArray *)allocator.allocate(sizeof(swarm_interfaces__msg__MetricEntryArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__MetricEntryArray));
  bool success = swarm_interfaces__msg__MetricEntryArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__MetricEntryArray__destroy(swarm_interfaces__msg__MetricEntryArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__MetricEntryArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__MetricEntryArray__Sequence__init(swarm_interfaces__msg__MetricEntryArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__MetricEntryArray * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__MetricEntryArray)) {
      return false;
    }
    data = (swarm_interfaces__msg__MetricEntryArray *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__MetricEntryArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__MetricEntryArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__MetricEntryArray__fini(&data[i - 1]);
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
swarm_interfaces__msg__MetricEntryArray__Sequence__fini(swarm_interfaces__msg__MetricEntryArray__Sequence * array)
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
      swarm_interfaces__msg__MetricEntryArray__fini(&array->data[i]);
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

swarm_interfaces__msg__MetricEntryArray__Sequence *
swarm_interfaces__msg__MetricEntryArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__MetricEntryArray__Sequence * array = (swarm_interfaces__msg__MetricEntryArray__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__MetricEntryArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__MetricEntryArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__MetricEntryArray__Sequence__destroy(swarm_interfaces__msg__MetricEntryArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__MetricEntryArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__MetricEntryArray__Sequence__are_equal(const swarm_interfaces__msg__MetricEntryArray__Sequence * lhs, const swarm_interfaces__msg__MetricEntryArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__MetricEntryArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__MetricEntryArray__Sequence__copy(
  const swarm_interfaces__msg__MetricEntryArray__Sequence * input,
  swarm_interfaces__msg__MetricEntryArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__MetricEntryArray)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__MetricEntryArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__MetricEntryArray * data =
      (swarm_interfaces__msg__MetricEntryArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__MetricEntryArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__MetricEntryArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__MetricEntryArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
