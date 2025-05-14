// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from communication_interfaces:msg/OpinionMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "communication_interfaces/msg/detail/opinion_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace communication_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OpinionMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) communication_interfaces::msg::OpinionMessage(_init);
}

void OpinionMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<communication_interfaces::msg::OpinionMessage *>(message_memory);
  typed_message->~OpinionMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OpinionMessage_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces::msg::OpinionMessage, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "opinion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces::msg::OpinionMessage, opinion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OpinionMessage_message_members = {
  "communication_interfaces::msg",  // message namespace
  "OpinionMessage",  // message name
  2,  // number of fields
  sizeof(communication_interfaces::msg::OpinionMessage),
  OpinionMessage_message_member_array,  // message members
  OpinionMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  OpinionMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OpinionMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OpinionMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace communication_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<communication_interfaces::msg::OpinionMessage>()
{
  return &::communication_interfaces::msg::rosidl_typesupport_introspection_cpp::OpinionMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, communication_interfaces, msg, OpinionMessage)() {
  return &::communication_interfaces::msg::rosidl_typesupport_introspection_cpp::OpinionMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
