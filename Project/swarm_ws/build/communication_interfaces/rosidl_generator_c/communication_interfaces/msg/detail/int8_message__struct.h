// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:msg/Int8Message.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__INT8_MESSAGE__STRUCT_H_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__INT8_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Int8Message in the package communication_interfaces.
typedef struct communication_interfaces__msg__Int8Message
{
  int8_t data;
} communication_interfaces__msg__Int8Message;

// Struct for a sequence of communication_interfaces__msg__Int8Message.
typedef struct communication_interfaces__msg__Int8Message__Sequence
{
  communication_interfaces__msg__Int8Message * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__msg__Int8Message__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__INT8_MESSAGE__STRUCT_H_
