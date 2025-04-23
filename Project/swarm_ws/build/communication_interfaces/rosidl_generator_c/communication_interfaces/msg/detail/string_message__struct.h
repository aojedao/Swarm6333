// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:msg/StringMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__STRING_MESSAGE__STRUCT_H_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__STRING_MESSAGE__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/StringMessage in the package communication_interfaces.
typedef struct communication_interfaces__msg__StringMessage
{
  rosidl_runtime_c__String data;
} communication_interfaces__msg__StringMessage;

// Struct for a sequence of communication_interfaces__msg__StringMessage.
typedef struct communication_interfaces__msg__StringMessage__Sequence
{
  communication_interfaces__msg__StringMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__msg__StringMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__STRING_MESSAGE__STRUCT_H_
