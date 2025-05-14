// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:msg/OpinionMACMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__BUILDER_HPP_

#include "communication_interfaces/msg/detail/opinion_mac_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace msg
{

namespace builder
{

class Init_OpinionMACMessage_mac
{
public:
  explicit Init_OpinionMACMessage_mac(::communication_interfaces::msg::OpinionMACMessage & msg)
  : msg_(msg)
  {}
  ::communication_interfaces::msg::OpinionMACMessage mac(::communication_interfaces::msg::OpinionMACMessage::_mac_type arg)
  {
    msg_.mac = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::msg::OpinionMACMessage msg_;
};

class Init_OpinionMACMessage_opinion
{
public:
  explicit Init_OpinionMACMessage_opinion(::communication_interfaces::msg::OpinionMACMessage & msg)
  : msg_(msg)
  {}
  Init_OpinionMACMessage_mac opinion(::communication_interfaces::msg::OpinionMACMessage::_opinion_type arg)
  {
    msg_.opinion = std::move(arg);
    return Init_OpinionMACMessage_mac(msg_);
  }

private:
  ::communication_interfaces::msg::OpinionMACMessage msg_;
};

class Init_OpinionMACMessage_id
{
public:
  Init_OpinionMACMessage_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpinionMACMessage_opinion id(::communication_interfaces::msg::OpinionMACMessage::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_OpinionMACMessage_opinion(msg_);
  }

private:
  ::communication_interfaces::msg::OpinionMACMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::msg::OpinionMACMessage>()
{
  return communication_interfaces::msg::builder::Init_OpinionMACMessage_id();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__BUILDER_HPP_
