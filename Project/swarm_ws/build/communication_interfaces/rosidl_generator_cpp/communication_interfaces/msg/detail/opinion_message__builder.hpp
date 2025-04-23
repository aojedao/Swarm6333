// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:msg/OpinionMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MESSAGE__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MESSAGE__BUILDER_HPP_

#include "communication_interfaces/msg/detail/opinion_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace msg
{

namespace builder
{

class Init_OpinionMessage_opinion
{
public:
  explicit Init_OpinionMessage_opinion(::communication_interfaces::msg::OpinionMessage & msg)
  : msg_(msg)
  {}
  ::communication_interfaces::msg::OpinionMessage opinion(::communication_interfaces::msg::OpinionMessage::_opinion_type arg)
  {
    msg_.opinion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::msg::OpinionMessage msg_;
};

class Init_OpinionMessage_id
{
public:
  Init_OpinionMessage_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpinionMessage_opinion id(::communication_interfaces::msg::OpinionMessage::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_OpinionMessage_opinion(msg_);
  }

private:
  ::communication_interfaces::msg::OpinionMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::msg::OpinionMessage>()
{
  return communication_interfaces::msg::builder::Init_OpinionMessage_id();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MESSAGE__BUILDER_HPP_
