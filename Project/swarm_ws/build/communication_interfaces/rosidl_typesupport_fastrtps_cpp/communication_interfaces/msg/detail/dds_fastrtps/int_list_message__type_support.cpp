// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from communication_interfaces:msg/IntListMessage.idl
// generated code does not contain a copyright notice
#include "communication_interfaces/msg/detail/int_list_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "communication_interfaces/msg/detail/int_list_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace communication_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces
cdr_serialize(
  const communication_interfaces::msg::IntListMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data
  {
    cdr << ros_message.data;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  communication_interfaces::msg::IntListMessage & ros_message)
{
  // Member: data
  {
    cdr >> ros_message.data;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces
get_serialized_size(
  const communication_interfaces::msg::IntListMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data
  {
    size_t array_size = ros_message.data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication_interfaces
max_serialized_size_IntListMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _IntListMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const communication_interfaces::msg::IntListMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IntListMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<communication_interfaces::msg::IntListMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IntListMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const communication_interfaces::msg::IntListMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IntListMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IntListMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _IntListMessage__callbacks = {
  "communication_interfaces::msg",
  "IntListMessage",
  _IntListMessage__cdr_serialize,
  _IntListMessage__cdr_deserialize,
  _IntListMessage__get_serialized_size,
  _IntListMessage__max_serialized_size
};

static rosidl_message_type_support_t _IntListMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IntListMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace communication_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_communication_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<communication_interfaces::msg::IntListMessage>()
{
  return &communication_interfaces::msg::typesupport_fastrtps_cpp::_IntListMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, communication_interfaces, msg, IntListMessage)() {
  return &communication_interfaces::msg::typesupport_fastrtps_cpp::_IntListMessage__handle;
}

#ifdef __cplusplus
}
#endif
