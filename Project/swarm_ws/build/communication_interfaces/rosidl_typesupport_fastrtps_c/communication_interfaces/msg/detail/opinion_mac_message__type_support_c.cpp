// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from communication_interfaces:msg/OpinionMACMessage.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/opinion_mac_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "communication_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "communication_interfaces/msg/detail/opinion_mac_message__struct.h"
#include "communication_interfaces/msg/detail/opinion_mac_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // mac
#include "rosidl_runtime_c/string_functions.h"  // mac

// forward declare type support functions


using _OpinionMACMessage__ros_msg_type = communication_interfaces__msg__OpinionMACMessage;

static bool _OpinionMACMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpinionMACMessage__ros_msg_type * ros_message = static_cast<const _OpinionMACMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: opinion
  {
    cdr << ros_message->opinion;
  }

  // Field name: mac
  {
    const rosidl_runtime_c__String * str = &ros_message->mac;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _OpinionMACMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpinionMACMessage__ros_msg_type * ros_message = static_cast<_OpinionMACMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: opinion
  {
    cdr >> ros_message->opinion;
  }

  // Field name: mac
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mac.data) {
      rosidl_runtime_c__String__init(&ros_message->mac);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mac,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mac'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_communication_interfaces
size_t get_serialized_size_communication_interfaces__msg__OpinionMACMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpinionMACMessage__ros_msg_type * ros_message = static_cast<const _OpinionMACMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opinion
  {
    size_t item_size = sizeof(ros_message->opinion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mac
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mac.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _OpinionMACMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_communication_interfaces__msg__OpinionMACMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_communication_interfaces
size_t max_serialized_size_communication_interfaces__msg__OpinionMACMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: opinion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mac
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OpinionMACMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_communication_interfaces__msg__OpinionMACMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OpinionMACMessage = {
  "communication_interfaces::msg",
  "OpinionMACMessage",
  _OpinionMACMessage__cdr_serialize,
  _OpinionMACMessage__cdr_deserialize,
  _OpinionMACMessage__get_serialized_size,
  _OpinionMACMessage__max_serialized_size
};

static rosidl_message_type_support_t _OpinionMACMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpinionMACMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, communication_interfaces, msg, OpinionMACMessage)() {
  return &_OpinionMACMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
