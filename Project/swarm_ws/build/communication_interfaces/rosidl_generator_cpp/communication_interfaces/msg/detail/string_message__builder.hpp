// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:msg/StringMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__STRING_MESSAGE__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__STRING_MESSAGE__BUILDER_HPP_

#include "communication_interfaces/msg/detail/string_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace msg
{

namespace builder
{

class Init_StringMessage_data
{
public:
  Init_StringMessage_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_interfaces::msg::StringMessage data(::communication_interfaces::msg::StringMessage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::msg::StringMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::msg::StringMessage>()
{
  return communication_interfaces::msg::builder::Init_StringMessage_data();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__STRING_MESSAGE__BUILDER_HPP_
