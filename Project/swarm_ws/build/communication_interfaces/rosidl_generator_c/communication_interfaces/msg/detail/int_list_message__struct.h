// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:msg/IntListMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__INT_LIST_MESSAGE__STRUCT_H_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__INT_LIST_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/IntListMessage in the package communication_interfaces.
typedef struct communication_interfaces__msg__IntListMessage
{
  rosidl_runtime_c__int16__Sequence data;
} communication_interfaces__msg__IntListMessage;

// Struct for a sequence of communication_interfaces__msg__IntListMessage.
typedef struct communication_interfaces__msg__IntListMessage__Sequence
{
  communication_interfaces__msg__IntListMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__msg__IntListMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__INT_LIST_MESSAGE__STRUCT_H_
