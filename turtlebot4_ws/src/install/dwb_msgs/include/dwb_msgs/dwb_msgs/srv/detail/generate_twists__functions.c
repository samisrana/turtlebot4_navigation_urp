// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:srv/GenerateTwists.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/srv/detail/generate_twists__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `current_vel`
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"

bool
dwb_msgs__srv__GenerateTwists_Request__init(dwb_msgs__srv__GenerateTwists_Request * msg)
{
  if (!msg) {
    return false;
  }
  // current_vel
  if (!nav_2d_msgs__msg__Twist2D__init(&msg->current_vel)) {
    dwb_msgs__srv__GenerateTwists_Request__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__srv__GenerateTwists_Request__fini(dwb_msgs__srv__GenerateTwists_Request * msg)
{
  if (!msg) {
    return;
  }
  // current_vel
  nav_2d_msgs__msg__Twist2D__fini(&msg->current_vel);
}

bool
dwb_msgs__srv__GenerateTwists_Request__are_equal(const dwb_msgs__srv__GenerateTwists_Request * lhs, const dwb_msgs__srv__GenerateTwists_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_vel
  if (!nav_2d_msgs__msg__Twist2D__are_equal(
      &(lhs->current_vel), &(rhs->current_vel)))
  {
    return false;
  }
  return true;
}

bool
dwb_msgs__srv__GenerateTwists_Request__copy(
  const dwb_msgs__srv__GenerateTwists_Request * input,
  dwb_msgs__srv__GenerateTwists_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // current_vel
  if (!nav_2d_msgs__msg__Twist2D__copy(
      &(input->current_vel), &(output->current_vel)))
  {
    return false;
  }
  return true;
}

dwb_msgs__srv__GenerateTwists_Request *
dwb_msgs__srv__GenerateTwists_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Request * msg = (dwb_msgs__srv__GenerateTwists_Request *)allocator.allocate(sizeof(dwb_msgs__srv__GenerateTwists_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__srv__GenerateTwists_Request));
  bool success = dwb_msgs__srv__GenerateTwists_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__srv__GenerateTwists_Request__destroy(dwb_msgs__srv__GenerateTwists_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dwb_msgs__srv__GenerateTwists_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dwb_msgs__srv__GenerateTwists_Request__Sequence__init(dwb_msgs__srv__GenerateTwists_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Request * data = NULL;

  if (size) {
    data = (dwb_msgs__srv__GenerateTwists_Request *)allocator.zero_allocate(size, sizeof(dwb_msgs__srv__GenerateTwists_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__srv__GenerateTwists_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__srv__GenerateTwists_Request__fini(&data[i - 1]);
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
dwb_msgs__srv__GenerateTwists_Request__Sequence__fini(dwb_msgs__srv__GenerateTwists_Request__Sequence * array)
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
      dwb_msgs__srv__GenerateTwists_Request__fini(&array->data[i]);
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

dwb_msgs__srv__GenerateTwists_Request__Sequence *
dwb_msgs__srv__GenerateTwists_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Request__Sequence * array = (dwb_msgs__srv__GenerateTwists_Request__Sequence *)allocator.allocate(sizeof(dwb_msgs__srv__GenerateTwists_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__srv__GenerateTwists_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dwb_msgs__srv__GenerateTwists_Request__Sequence__destroy(dwb_msgs__srv__GenerateTwists_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dwb_msgs__srv__GenerateTwists_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dwb_msgs__srv__GenerateTwists_Request__Sequence__are_equal(const dwb_msgs__srv__GenerateTwists_Request__Sequence * lhs, const dwb_msgs__srv__GenerateTwists_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__srv__GenerateTwists_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__srv__GenerateTwists_Request__Sequence__copy(
  const dwb_msgs__srv__GenerateTwists_Request__Sequence * input,
  dwb_msgs__srv__GenerateTwists_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__srv__GenerateTwists_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dwb_msgs__srv__GenerateTwists_Request * data =
      (dwb_msgs__srv__GenerateTwists_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__srv__GenerateTwists_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dwb_msgs__srv__GenerateTwists_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dwb_msgs__srv__GenerateTwists_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `twists`
// already included above
// #include "nav_2d_msgs/msg/detail/twist2_d__functions.h"

bool
dwb_msgs__srv__GenerateTwists_Response__init(dwb_msgs__srv__GenerateTwists_Response * msg)
{
  if (!msg) {
    return false;
  }
  // twists
  if (!nav_2d_msgs__msg__Twist2D__Sequence__init(&msg->twists, 0)) {
    dwb_msgs__srv__GenerateTwists_Response__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__srv__GenerateTwists_Response__fini(dwb_msgs__srv__GenerateTwists_Response * msg)
{
  if (!msg) {
    return;
  }
  // twists
  nav_2d_msgs__msg__Twist2D__Sequence__fini(&msg->twists);
}

bool
dwb_msgs__srv__GenerateTwists_Response__are_equal(const dwb_msgs__srv__GenerateTwists_Response * lhs, const dwb_msgs__srv__GenerateTwists_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // twists
  if (!nav_2d_msgs__msg__Twist2D__Sequence__are_equal(
      &(lhs->twists), &(rhs->twists)))
  {
    return false;
  }
  return true;
}

bool
dwb_msgs__srv__GenerateTwists_Response__copy(
  const dwb_msgs__srv__GenerateTwists_Response * input,
  dwb_msgs__srv__GenerateTwists_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // twists
  if (!nav_2d_msgs__msg__Twist2D__Sequence__copy(
      &(input->twists), &(output->twists)))
  {
    return false;
  }
  return true;
}

dwb_msgs__srv__GenerateTwists_Response *
dwb_msgs__srv__GenerateTwists_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Response * msg = (dwb_msgs__srv__GenerateTwists_Response *)allocator.allocate(sizeof(dwb_msgs__srv__GenerateTwists_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__srv__GenerateTwists_Response));
  bool success = dwb_msgs__srv__GenerateTwists_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__srv__GenerateTwists_Response__destroy(dwb_msgs__srv__GenerateTwists_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dwb_msgs__srv__GenerateTwists_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dwb_msgs__srv__GenerateTwists_Response__Sequence__init(dwb_msgs__srv__GenerateTwists_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Response * data = NULL;

  if (size) {
    data = (dwb_msgs__srv__GenerateTwists_Response *)allocator.zero_allocate(size, sizeof(dwb_msgs__srv__GenerateTwists_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__srv__GenerateTwists_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__srv__GenerateTwists_Response__fini(&data[i - 1]);
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
dwb_msgs__srv__GenerateTwists_Response__Sequence__fini(dwb_msgs__srv__GenerateTwists_Response__Sequence * array)
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
      dwb_msgs__srv__GenerateTwists_Response__fini(&array->data[i]);
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

dwb_msgs__srv__GenerateTwists_Response__Sequence *
dwb_msgs__srv__GenerateTwists_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Response__Sequence * array = (dwb_msgs__srv__GenerateTwists_Response__Sequence *)allocator.allocate(sizeof(dwb_msgs__srv__GenerateTwists_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__srv__GenerateTwists_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dwb_msgs__srv__GenerateTwists_Response__Sequence__destroy(dwb_msgs__srv__GenerateTwists_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dwb_msgs__srv__GenerateTwists_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dwb_msgs__srv__GenerateTwists_Response__Sequence__are_equal(const dwb_msgs__srv__GenerateTwists_Response__Sequence * lhs, const dwb_msgs__srv__GenerateTwists_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__srv__GenerateTwists_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__srv__GenerateTwists_Response__Sequence__copy(
  const dwb_msgs__srv__GenerateTwists_Response__Sequence * input,
  dwb_msgs__srv__GenerateTwists_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__srv__GenerateTwists_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dwb_msgs__srv__GenerateTwists_Response * data =
      (dwb_msgs__srv__GenerateTwists_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__srv__GenerateTwists_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dwb_msgs__srv__GenerateTwists_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dwb_msgs__srv__GenerateTwists_Response__copy(
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
// #include "dwb_msgs/srv/detail/generate_twists__functions.h"

bool
dwb_msgs__srv__GenerateTwists_Event__init(dwb_msgs__srv__GenerateTwists_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    dwb_msgs__srv__GenerateTwists_Event__fini(msg);
    return false;
  }
  // request
  if (!dwb_msgs__srv__GenerateTwists_Request__Sequence__init(&msg->request, 0)) {
    dwb_msgs__srv__GenerateTwists_Event__fini(msg);
    return false;
  }
  // response
  if (!dwb_msgs__srv__GenerateTwists_Response__Sequence__init(&msg->response, 0)) {
    dwb_msgs__srv__GenerateTwists_Event__fini(msg);
    return false;
  }
  return true;
}

void
dwb_msgs__srv__GenerateTwists_Event__fini(dwb_msgs__srv__GenerateTwists_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  dwb_msgs__srv__GenerateTwists_Request__Sequence__fini(&msg->request);
  // response
  dwb_msgs__srv__GenerateTwists_Response__Sequence__fini(&msg->response);
}

bool
dwb_msgs__srv__GenerateTwists_Event__are_equal(const dwb_msgs__srv__GenerateTwists_Event * lhs, const dwb_msgs__srv__GenerateTwists_Event * rhs)
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
  if (!dwb_msgs__srv__GenerateTwists_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!dwb_msgs__srv__GenerateTwists_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
dwb_msgs__srv__GenerateTwists_Event__copy(
  const dwb_msgs__srv__GenerateTwists_Event * input,
  dwb_msgs__srv__GenerateTwists_Event * output)
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
  if (!dwb_msgs__srv__GenerateTwists_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!dwb_msgs__srv__GenerateTwists_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

dwb_msgs__srv__GenerateTwists_Event *
dwb_msgs__srv__GenerateTwists_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Event * msg = (dwb_msgs__srv__GenerateTwists_Event *)allocator.allocate(sizeof(dwb_msgs__srv__GenerateTwists_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__srv__GenerateTwists_Event));
  bool success = dwb_msgs__srv__GenerateTwists_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__srv__GenerateTwists_Event__destroy(dwb_msgs__srv__GenerateTwists_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dwb_msgs__srv__GenerateTwists_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dwb_msgs__srv__GenerateTwists_Event__Sequence__init(dwb_msgs__srv__GenerateTwists_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Event * data = NULL;

  if (size) {
    data = (dwb_msgs__srv__GenerateTwists_Event *)allocator.zero_allocate(size, sizeof(dwb_msgs__srv__GenerateTwists_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__srv__GenerateTwists_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__srv__GenerateTwists_Event__fini(&data[i - 1]);
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
dwb_msgs__srv__GenerateTwists_Event__Sequence__fini(dwb_msgs__srv__GenerateTwists_Event__Sequence * array)
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
      dwb_msgs__srv__GenerateTwists_Event__fini(&array->data[i]);
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

dwb_msgs__srv__GenerateTwists_Event__Sequence *
dwb_msgs__srv__GenerateTwists_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dwb_msgs__srv__GenerateTwists_Event__Sequence * array = (dwb_msgs__srv__GenerateTwists_Event__Sequence *)allocator.allocate(sizeof(dwb_msgs__srv__GenerateTwists_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__srv__GenerateTwists_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dwb_msgs__srv__GenerateTwists_Event__Sequence__destroy(dwb_msgs__srv__GenerateTwists_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dwb_msgs__srv__GenerateTwists_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dwb_msgs__srv__GenerateTwists_Event__Sequence__are_equal(const dwb_msgs__srv__GenerateTwists_Event__Sequence * lhs, const dwb_msgs__srv__GenerateTwists_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__srv__GenerateTwists_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__srv__GenerateTwists_Event__Sequence__copy(
  const dwb_msgs__srv__GenerateTwists_Event__Sequence * input,
  dwb_msgs__srv__GenerateTwists_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__srv__GenerateTwists_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dwb_msgs__srv__GenerateTwists_Event * data =
      (dwb_msgs__srv__GenerateTwists_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__srv__GenerateTwists_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dwb_msgs__srv__GenerateTwists_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dwb_msgs__srv__GenerateTwists_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
