// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_world_interfaces:srv/SetTimeMode.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/srv/detail/set_time_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
swarm_world_interfaces__srv__SetTimeMode_Request__init(swarm_world_interfaces__srv__SetTimeMode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // time_mode
  // fixed_delta_seconds
  // sync_timeout_sec
  return true;
}

void
swarm_world_interfaces__srv__SetTimeMode_Request__fini(swarm_world_interfaces__srv__SetTimeMode_Request * msg)
{
  if (!msg) {
    return;
  }
  // time_mode
  // fixed_delta_seconds
  // sync_timeout_sec
}

bool
swarm_world_interfaces__srv__SetTimeMode_Request__are_equal(const swarm_world_interfaces__srv__SetTimeMode_Request * lhs, const swarm_world_interfaces__srv__SetTimeMode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_mode
  if (lhs->time_mode != rhs->time_mode) {
    return false;
  }
  // fixed_delta_seconds
  if (lhs->fixed_delta_seconds != rhs->fixed_delta_seconds) {
    return false;
  }
  // sync_timeout_sec
  if (lhs->sync_timeout_sec != rhs->sync_timeout_sec) {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__srv__SetTimeMode_Request__copy(
  const swarm_world_interfaces__srv__SetTimeMode_Request * input,
  swarm_world_interfaces__srv__SetTimeMode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // time_mode
  output->time_mode = input->time_mode;
  // fixed_delta_seconds
  output->fixed_delta_seconds = input->fixed_delta_seconds;
  // sync_timeout_sec
  output->sync_timeout_sec = input->sync_timeout_sec;
  return true;
}

swarm_world_interfaces__srv__SetTimeMode_Request *
swarm_world_interfaces__srv__SetTimeMode_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Request * msg = (swarm_world_interfaces__srv__SetTimeMode_Request *)allocator.allocate(sizeof(swarm_world_interfaces__srv__SetTimeMode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__srv__SetTimeMode_Request));
  bool success = swarm_world_interfaces__srv__SetTimeMode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__srv__SetTimeMode_Request__destroy(swarm_world_interfaces__srv__SetTimeMode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__srv__SetTimeMode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__init(swarm_world_interfaces__srv__SetTimeMode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__srv__SetTimeMode_Request)) {
      return false;
    }
    data = (swarm_world_interfaces__srv__SetTimeMode_Request *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__srv__SetTimeMode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__srv__SetTimeMode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__srv__SetTimeMode_Request__fini(&data[i - 1]);
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
swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__fini(swarm_world_interfaces__srv__SetTimeMode_Request__Sequence * array)
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
      swarm_world_interfaces__srv__SetTimeMode_Request__fini(&array->data[i]);
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

swarm_world_interfaces__srv__SetTimeMode_Request__Sequence *
swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Request__Sequence * array = (swarm_world_interfaces__srv__SetTimeMode_Request__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__srv__SetTimeMode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__destroy(swarm_world_interfaces__srv__SetTimeMode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__are_equal(const swarm_world_interfaces__srv__SetTimeMode_Request__Sequence * lhs, const swarm_world_interfaces__srv__SetTimeMode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__srv__SetTimeMode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__copy(
  const swarm_world_interfaces__srv__SetTimeMode_Request__Sequence * input,
  swarm_world_interfaces__srv__SetTimeMode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__srv__SetTimeMode_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__srv__SetTimeMode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__srv__SetTimeMode_Request * data =
      (swarm_world_interfaces__srv__SetTimeMode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__srv__SetTimeMode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__srv__SetTimeMode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__srv__SetTimeMode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

bool
swarm_world_interfaces__srv__SetTimeMode_Response__init(swarm_world_interfaces__srv__SetTimeMode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    swarm_world_interfaces__srv__SetTimeMode_Response__fini(msg);
    return false;
  }
  return true;
}

void
swarm_world_interfaces__srv__SetTimeMode_Response__fini(swarm_world_interfaces__srv__SetTimeMode_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
}

bool
swarm_world_interfaces__srv__SetTimeMode_Response__are_equal(const swarm_world_interfaces__srv__SetTimeMode_Response * lhs, const swarm_world_interfaces__srv__SetTimeMode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__srv__SetTimeMode_Response__copy(
  const swarm_world_interfaces__srv__SetTimeMode_Response * input,
  swarm_world_interfaces__srv__SetTimeMode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  return true;
}

swarm_world_interfaces__srv__SetTimeMode_Response *
swarm_world_interfaces__srv__SetTimeMode_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Response * msg = (swarm_world_interfaces__srv__SetTimeMode_Response *)allocator.allocate(sizeof(swarm_world_interfaces__srv__SetTimeMode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__srv__SetTimeMode_Response));
  bool success = swarm_world_interfaces__srv__SetTimeMode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__srv__SetTimeMode_Response__destroy(swarm_world_interfaces__srv__SetTimeMode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__srv__SetTimeMode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__init(swarm_world_interfaces__srv__SetTimeMode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__srv__SetTimeMode_Response)) {
      return false;
    }
    data = (swarm_world_interfaces__srv__SetTimeMode_Response *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__srv__SetTimeMode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__srv__SetTimeMode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__srv__SetTimeMode_Response__fini(&data[i - 1]);
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
swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__fini(swarm_world_interfaces__srv__SetTimeMode_Response__Sequence * array)
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
      swarm_world_interfaces__srv__SetTimeMode_Response__fini(&array->data[i]);
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

swarm_world_interfaces__srv__SetTimeMode_Response__Sequence *
swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Response__Sequence * array = (swarm_world_interfaces__srv__SetTimeMode_Response__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__srv__SetTimeMode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__destroy(swarm_world_interfaces__srv__SetTimeMode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__are_equal(const swarm_world_interfaces__srv__SetTimeMode_Response__Sequence * lhs, const swarm_world_interfaces__srv__SetTimeMode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__srv__SetTimeMode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__copy(
  const swarm_world_interfaces__srv__SetTimeMode_Response__Sequence * input,
  swarm_world_interfaces__srv__SetTimeMode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__srv__SetTimeMode_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__srv__SetTimeMode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__srv__SetTimeMode_Response * data =
      (swarm_world_interfaces__srv__SetTimeMode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__srv__SetTimeMode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__srv__SetTimeMode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__srv__SetTimeMode_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "swarm_world_interfaces/srv/detail/set_time_mode__functions.h"

bool
swarm_world_interfaces__srv__SetTimeMode_Event__init(swarm_world_interfaces__srv__SetTimeMode_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    swarm_world_interfaces__srv__SetTimeMode_Event__fini(msg);
    return false;
  }
  // request
  if (!swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__init(&msg->request, 0)) {
    swarm_world_interfaces__srv__SetTimeMode_Event__fini(msg);
    return false;
  }
  // response
  if (!swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__init(&msg->response, 0)) {
    swarm_world_interfaces__srv__SetTimeMode_Event__fini(msg);
    return false;
  }
  return true;
}

void
swarm_world_interfaces__srv__SetTimeMode_Event__fini(swarm_world_interfaces__srv__SetTimeMode_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__fini(&msg->request);
  // response
  swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__fini(&msg->response);
}

bool
swarm_world_interfaces__srv__SetTimeMode_Event__are_equal(const swarm_world_interfaces__srv__SetTimeMode_Event * lhs, const swarm_world_interfaces__srv__SetTimeMode_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__srv__SetTimeMode_Event__copy(
  const swarm_world_interfaces__srv__SetTimeMode_Event * input,
  swarm_world_interfaces__srv__SetTimeMode_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!swarm_world_interfaces__srv__SetTimeMode_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!swarm_world_interfaces__srv__SetTimeMode_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

swarm_world_interfaces__srv__SetTimeMode_Event *
swarm_world_interfaces__srv__SetTimeMode_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Event * msg = (swarm_world_interfaces__srv__SetTimeMode_Event *)allocator.allocate(sizeof(swarm_world_interfaces__srv__SetTimeMode_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__srv__SetTimeMode_Event));
  bool success = swarm_world_interfaces__srv__SetTimeMode_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__srv__SetTimeMode_Event__destroy(swarm_world_interfaces__srv__SetTimeMode_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__srv__SetTimeMode_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__srv__SetTimeMode_Event__Sequence__init(swarm_world_interfaces__srv__SetTimeMode_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__srv__SetTimeMode_Event)) {
      return false;
    }
    data = (swarm_world_interfaces__srv__SetTimeMode_Event *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__srv__SetTimeMode_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__srv__SetTimeMode_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__srv__SetTimeMode_Event__fini(&data[i - 1]);
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
swarm_world_interfaces__srv__SetTimeMode_Event__Sequence__fini(swarm_world_interfaces__srv__SetTimeMode_Event__Sequence * array)
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
      swarm_world_interfaces__srv__SetTimeMode_Event__fini(&array->data[i]);
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

swarm_world_interfaces__srv__SetTimeMode_Event__Sequence *
swarm_world_interfaces__srv__SetTimeMode_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__srv__SetTimeMode_Event__Sequence * array = (swarm_world_interfaces__srv__SetTimeMode_Event__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__srv__SetTimeMode_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__srv__SetTimeMode_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__srv__SetTimeMode_Event__Sequence__destroy(swarm_world_interfaces__srv__SetTimeMode_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__srv__SetTimeMode_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__srv__SetTimeMode_Event__Sequence__are_equal(const swarm_world_interfaces__srv__SetTimeMode_Event__Sequence * lhs, const swarm_world_interfaces__srv__SetTimeMode_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__srv__SetTimeMode_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__srv__SetTimeMode_Event__Sequence__copy(
  const swarm_world_interfaces__srv__SetTimeMode_Event__Sequence * input,
  swarm_world_interfaces__srv__SetTimeMode_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__srv__SetTimeMode_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__srv__SetTimeMode_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__srv__SetTimeMode_Event * data =
      (swarm_world_interfaces__srv__SetTimeMode_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__srv__SetTimeMode_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__srv__SetTimeMode_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__srv__SetTimeMode_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
