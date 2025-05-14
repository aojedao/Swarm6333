// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_interfaces:msg/OpinionMACMessage.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/opinion_mac_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mac`
#include "rosidl_runtime_c/string_functions.h"

bool
communication_interfaces__msg__OpinionMACMessage__init(communication_interfaces__msg__OpinionMACMessage * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // opinion
  // mac
  if (!rosidl_runtime_c__String__init(&msg->mac)) {
    communication_interfaces__msg__OpinionMACMessage__fini(msg);
    return false;
  }
  return true;
}

void
communication_interfaces__msg__OpinionMACMessage__fini(communication_interfaces__msg__OpinionMACMessage * msg)
{
  if (!msg) {
    return;
  }
  // id
  // opinion
  // mac
  rosidl_runtime_c__String__fini(&msg->mac);
}

bool
communication_interfaces__msg__OpinionMACMessage__are_equal(const communication_interfaces__msg__OpinionMACMessage * lhs, const communication_interfaces__msg__OpinionMACMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // opinion
  if (lhs->opinion != rhs->opinion) {
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mac), &(rhs->mac)))
  {
    return false;
  }
  return true;
}

bool
communication_interfaces__msg__OpinionMACMessage__copy(
  const communication_interfaces__msg__OpinionMACMessage * input,
  communication_interfaces__msg__OpinionMACMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // opinion
  output->opinion = input->opinion;
  // mac
  if (!rosidl_runtime_c__String__copy(
      &(input->mac), &(output->mac)))
  {
    return false;
  }
  return true;
}

communication_interfaces__msg__OpinionMACMessage *
communication_interfaces__msg__OpinionMACMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__OpinionMACMessage * msg = (communication_interfaces__msg__OpinionMACMessage *)allocator.allocate(sizeof(communication_interfaces__msg__OpinionMACMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_interfaces__msg__OpinionMACMessage));
  bool success = communication_interfaces__msg__OpinionMACMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_interfaces__msg__OpinionMACMessage__destroy(communication_interfaces__msg__OpinionMACMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_interfaces__msg__OpinionMACMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_interfaces__msg__OpinionMACMessage__Sequence__init(communication_interfaces__msg__OpinionMACMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__OpinionMACMessage * data = NULL;

  if (size) {
    data = (communication_interfaces__msg__OpinionMACMessage *)allocator.zero_allocate(size, sizeof(communication_interfaces__msg__OpinionMACMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_interfaces__msg__OpinionMACMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_interfaces__msg__OpinionMACMessage__fini(&data[i - 1]);
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
communication_interfaces__msg__OpinionMACMessage__Sequence__fini(communication_interfaces__msg__OpinionMACMessage__Sequence * array)
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
      communication_interfaces__msg__OpinionMACMessage__fini(&array->data[i]);
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

communication_interfaces__msg__OpinionMACMessage__Sequence *
communication_interfaces__msg__OpinionMACMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_interfaces__msg__OpinionMACMessage__Sequence * array = (communication_interfaces__msg__OpinionMACMessage__Sequence *)allocator.allocate(sizeof(communication_interfaces__msg__OpinionMACMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_interfaces__msg__OpinionMACMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_interfaces__msg__OpinionMACMessage__Sequence__destroy(communication_interfaces__msg__OpinionMACMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_interfaces__msg__OpinionMACMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_interfaces__msg__OpinionMACMessage__Sequence__are_equal(const communication_interfaces__msg__OpinionMACMessage__Sequence * lhs, const communication_interfaces__msg__OpinionMACMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_interfaces__msg__OpinionMACMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_interfaces__msg__OpinionMACMessage__Sequence__copy(
  const communication_interfaces__msg__OpinionMACMessage__Sequence * input,
  communication_interfaces__msg__OpinionMACMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_interfaces__msg__OpinionMACMessage);
    communication_interfaces__msg__OpinionMACMessage * data =
      (communication_interfaces__msg__OpinionMACMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_interfaces__msg__OpinionMACMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          communication_interfaces__msg__OpinionMACMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_interfaces__msg__OpinionMACMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
