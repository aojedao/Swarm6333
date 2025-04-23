// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:msg/OpinionMACMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__STRUCT_H_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mac'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/OpinionMACMessage in the package communication_interfaces.
typedef struct communication_interfaces__msg__OpinionMACMessage
{
  int64_t id;
  int64_t opinion;
  rosidl_runtime_c__String mac;
} communication_interfaces__msg__OpinionMACMessage;

// Struct for a sequence of communication_interfaces__msg__OpinionMACMessage.
typedef struct communication_interfaces__msg__OpinionMACMessage__Sequence
{
  communication_interfaces__msg__OpinionMACMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__msg__OpinionMACMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__STRUCT_H_
