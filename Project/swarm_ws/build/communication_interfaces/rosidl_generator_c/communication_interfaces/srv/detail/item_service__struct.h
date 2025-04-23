// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_interfaces:srv/ItemService.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__STRUCT_H_
#define COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ItemService in the package communication_interfaces.
typedef struct communication_interfaces__srv__ItemService_Request
{
  int16_t item_index;
} communication_interfaces__srv__ItemService_Request;

// Struct for a sequence of communication_interfaces__srv__ItemService_Request.
typedef struct communication_interfaces__srv__ItemService_Request__Sequence
{
  communication_interfaces__srv__ItemService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__srv__ItemService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ItemService in the package communication_interfaces.
typedef struct communication_interfaces__srv__ItemService_Response
{
  bool success;
} communication_interfaces__srv__ItemService_Response;

// Struct for a sequence of communication_interfaces__srv__ItemService_Response.
typedef struct communication_interfaces__srv__ItemService_Response__Sequence
{
  communication_interfaces__srv__ItemService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_interfaces__srv__ItemService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__STRUCT_H_
