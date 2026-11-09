// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/OptimizerFeedback.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/optimizer_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `active_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
swarm_interfaces__msg__OptimizerFeedback__init(swarm_interfaces__msg__OptimizerFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__OptimizerFeedback__fini(msg);
    return false;
  }
  // active_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->active_ids, 0)) {
    swarm_interfaces__msg__OptimizerFeedback__fini(msg);
    return false;
  }
  // detections_mean_60s
  // latency_mean_60s
  // latency_max_60s
  // samples_in_window
  return true;
}

void
swarm_interfaces__msg__OptimizerFeedback__fini(swarm_interfaces__msg__OptimizerFeedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // active_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->active_ids);
  // detections_mean_60s
  // latency_mean_60s
  // latency_max_60s
  // samples_in_window
}

bool
swarm_interfaces__msg__OptimizerFeedback__are_equal(const swarm_interfaces__msg__OptimizerFeedback * lhs, const swarm_interfaces__msg__OptimizerFeedback * rhs)
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
  // active_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->active_ids), &(rhs->active_ids)))
  {
    return false;
  }
  // detections_mean_60s
  if (lhs->detections_mean_60s != rhs->detections_mean_60s) {
    return false;
  }
  // latency_mean_60s
  if (lhs->latency_mean_60s != rhs->latency_mean_60s) {
    return false;
  }
  // latency_max_60s
  if (lhs->latency_max_60s != rhs->latency_max_60s) {
    return false;
  }
  // samples_in_window
  if (lhs->samples_in_window != rhs->samples_in_window) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__OptimizerFeedback__copy(
  const swarm_interfaces__msg__OptimizerFeedback * input,
  swarm_interfaces__msg__OptimizerFeedback * output)
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
  // active_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->active_ids), &(output->active_ids)))
  {
    return false;
  }
  // detections_mean_60s
  output->detections_mean_60s = input->detections_mean_60s;
  // latency_mean_60s
  output->latency_mean_60s = input->latency_mean_60s;
  // latency_max_60s
  output->latency_max_60s = input->latency_max_60s;
  // samples_in_window
  output->samples_in_window = input->samples_in_window;
  return true;
}

swarm_interfaces__msg__OptimizerFeedback *
swarm_interfaces__msg__OptimizerFeedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__OptimizerFeedback * msg = (swarm_interfaces__msg__OptimizerFeedback *)allocator.allocate(sizeof(swarm_interfaces__msg__OptimizerFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__OptimizerFeedback));
  bool success = swarm_interfaces__msg__OptimizerFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__OptimizerFeedback__destroy(swarm_interfaces__msg__OptimizerFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__OptimizerFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__OptimizerFeedback__Sequence__init(swarm_interfaces__msg__OptimizerFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__OptimizerFeedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__OptimizerFeedback)) {
      return false;
    }
    data = (swarm_interfaces__msg__OptimizerFeedback *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__OptimizerFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__OptimizerFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__OptimizerFeedback__fini(&data[i - 1]);
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
swarm_interfaces__msg__OptimizerFeedback__Sequence__fini(swarm_interfaces__msg__OptimizerFeedback__Sequence * array)
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
      swarm_interfaces__msg__OptimizerFeedback__fini(&array->data[i]);
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

swarm_interfaces__msg__OptimizerFeedback__Sequence *
swarm_interfaces__msg__OptimizerFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__OptimizerFeedback__Sequence * array = (swarm_interfaces__msg__OptimizerFeedback__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__OptimizerFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__OptimizerFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__OptimizerFeedback__Sequence__destroy(swarm_interfaces__msg__OptimizerFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__OptimizerFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__OptimizerFeedback__Sequence__are_equal(const swarm_interfaces__msg__OptimizerFeedback__Sequence * lhs, const swarm_interfaces__msg__OptimizerFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__OptimizerFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__OptimizerFeedback__Sequence__copy(
  const swarm_interfaces__msg__OptimizerFeedback__Sequence * input,
  swarm_interfaces__msg__OptimizerFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__OptimizerFeedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__OptimizerFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__OptimizerFeedback * data =
      (swarm_interfaces__msg__OptimizerFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__OptimizerFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__OptimizerFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__OptimizerFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
