// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:msg/DoubleMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__DOUBLE_MESSAGE__STRUCT_H_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__DOUBLE_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/DoubleMessage in the package communication_interfaces.
typedef struct communication_interfaces__msg__DoubleMessage
{
  double data;
} communication_interfaces__msg__DoubleMessage;

// Struct for a sequence of communication_interfaces__msg__DoubleMessage.
typedef struct communication_interfaces__msg__DoubleMessage__Sequence
{
  communication_interfaces__msg__DoubleMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__msg__DoubleMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__DOUBLE_MESSAGE__STRUCT_H_
