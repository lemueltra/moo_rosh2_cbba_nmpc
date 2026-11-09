// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/swarm_metrics__functions.h"

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
// Member `uavs`
#include "swarm_interfaces/msg/detail/uav_metric__functions.h"

bool
swarm_interfaces__msg__SwarmMetrics__init(swarm_interfaces__msg__SwarmMetrics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__SwarmMetrics__fini(msg);
    return false;
  }
  // active_count
  // active_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->active_ids, 0)) {
    swarm_interfaces__msg__SwarmMetrics__fini(msg);
    return false;
  }
  // detections_mean_60s
  // latency_mean_60s
  // latency_max_60s
  // samples_in_window
  // window_capacity
  // coverage_ratio
  // ugv_weighted_coverage
  // redundancy_score
  // planner_cycle_us
  // planner_deadline_misses
  // clamped_references
  // clock_hz
  // sim_time_s
  // uavs
  if (!swarm_interfaces__msg__UavMetric__Sequence__init(&msg->uavs, 0)) {
    swarm_interfaces__msg__SwarmMetrics__fini(msg);
    return false;
  }
  return true;
}

void
swarm_interfaces__msg__SwarmMetrics__fini(swarm_interfaces__msg__SwarmMetrics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // active_count
  // active_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->active_ids);
  // detections_mean_60s
  // latency_mean_60s
  // latency_max_60s
  // samples_in_window
  // window_capacity
  // coverage_ratio
  // ugv_weighted_coverage
  // redundancy_score
  // planner_cycle_us
  // planner_deadline_misses
  // clamped_references
  // clock_hz
  // sim_time_s
  // uavs
  swarm_interfaces__msg__UavMetric__Sequence__fini(&msg->uavs);
}

bool
swarm_interfaces__msg__SwarmMetrics__are_equal(const swarm_interfaces__msg__SwarmMetrics * lhs, const swarm_interfaces__msg__SwarmMetrics * rhs)
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
  // active_count
  if (lhs->active_count != rhs->active_count) {
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
  // window_capacity
  if (lhs->window_capacity != rhs->window_capacity) {
    return false;
  }
  // coverage_ratio
  if (lhs->coverage_ratio != rhs->coverage_ratio) {
    return false;
  }
  // ugv_weighted_coverage
  if (lhs->ugv_weighted_coverage != rhs->ugv_weighted_coverage) {
    return false;
  }
  // redundancy_score
  if (lhs->redundancy_score != rhs->redundancy_score) {
    return false;
  }
  // planner_cycle_us
  if (lhs->planner_cycle_us != rhs->planner_cycle_us) {
    return false;
  }
  // planner_deadline_misses
  if (lhs->planner_deadline_misses != rhs->planner_deadline_misses) {
    return false;
  }
  // clamped_references
  if (lhs->clamped_references != rhs->clamped_references) {
    return false;
  }
  // clock_hz
  if (lhs->clock_hz != rhs->clock_hz) {
    return false;
  }
  // sim_time_s
  if (lhs->sim_time_s != rhs->sim_time_s) {
    return false;
  }
  // uavs
  if (!swarm_interfaces__msg__UavMetric__Sequence__are_equal(
      &(lhs->uavs), &(rhs->uavs)))
  {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__SwarmMetrics__copy(
  const swarm_interfaces__msg__SwarmMetrics * input,
  swarm_interfaces__msg__SwarmMetrics * output)
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
  // active_count
  output->active_count = input->active_count;
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
  // window_capacity
  output->window_capacity = input->window_capacity;
  // coverage_ratio
  output->coverage_ratio = input->coverage_ratio;
  // ugv_weighted_coverage
  output->ugv_weighted_coverage = input->ugv_weighted_coverage;
  // redundancy_score
  output->redundancy_score = input->redundancy_score;
  // planner_cycle_us
  output->planner_cycle_us = input->planner_cycle_us;
  // planner_deadline_misses
  output->planner_deadline_misses = input->planner_deadline_misses;
  // clamped_references
  output->clamped_references = input->clamped_references;
  // clock_hz
  output->clock_hz = input->clock_hz;
  // sim_time_s
  output->sim_time_s = input->sim_time_s;
  // uavs
  if (!swarm_interfaces__msg__UavMetric__Sequence__copy(
      &(input->uavs), &(output->uavs)))
  {
    return false;
  }
  return true;
}

swarm_interfaces__msg__SwarmMetrics *
swarm_interfaces__msg__SwarmMetrics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__SwarmMetrics * msg = (swarm_interfaces__msg__SwarmMetrics *)allocator.allocate(sizeof(swarm_interfaces__msg__SwarmMetrics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__SwarmMetrics));
  bool success = swarm_interfaces__msg__SwarmMetrics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__SwarmMetrics__destroy(swarm_interfaces__msg__SwarmMetrics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__SwarmMetrics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__SwarmMetrics__Sequence__init(swarm_interfaces__msg__SwarmMetrics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__SwarmMetrics * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__SwarmMetrics)) {
      return false;
    }
    data = (swarm_interfaces__msg__SwarmMetrics *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__SwarmMetrics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__SwarmMetrics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__SwarmMetrics__fini(&data[i - 1]);
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
swarm_interfaces__msg__SwarmMetrics__Sequence__fini(swarm_interfaces__msg__SwarmMetrics__Sequence * array)
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
      swarm_interfaces__msg__SwarmMetrics__fini(&array->data[i]);
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

swarm_interfaces__msg__SwarmMetrics__Sequence *
swarm_interfaces__msg__SwarmMetrics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__SwarmMetrics__Sequence * array = (swarm_interfaces__msg__SwarmMetrics__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__SwarmMetrics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__SwarmMetrics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__SwarmMetrics__Sequence__destroy(swarm_interfaces__msg__SwarmMetrics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__SwarmMetrics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__SwarmMetrics__Sequence__are_equal(const swarm_interfaces__msg__SwarmMetrics__Sequence * lhs, const swarm_interfaces__msg__SwarmMetrics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__SwarmMetrics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__SwarmMetrics__Sequence__copy(
  const swarm_interfaces__msg__SwarmMetrics__Sequence * input,
  swarm_interfaces__msg__SwarmMetrics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__SwarmMetrics)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__SwarmMetrics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__SwarmMetrics * data =
      (swarm_interfaces__msg__SwarmMetrics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__SwarmMetrics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__SwarmMetrics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__SwarmMetrics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
