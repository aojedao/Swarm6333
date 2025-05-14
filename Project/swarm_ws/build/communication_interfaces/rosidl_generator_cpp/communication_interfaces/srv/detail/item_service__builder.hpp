// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_interfaces:srv/ItemService.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__BUILDER_HPP_
#define COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__BUILDER_HPP_

#include "communication_interfaces/srv/detail/item_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace communication_interfaces
{

namespace srv
{

namespace builder
{

class Init_ItemService_Request_item_index
{
public:
  Init_ItemService_Request_item_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_interfaces::srv::ItemService_Request item_index(::communication_interfaces::srv::ItemService_Request::_item_index_type arg)
  {
    msg_.item_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::srv::ItemService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::srv::ItemService_Request>()
{
  return communication_interfaces::srv::builder::Init_ItemService_Request_item_index();
}

}  // namespace communication_interfaces


namespace communication_interfaces
{

namespace srv
{

namespace builder
{

class Init_ItemService_Response_success
{
public:
  Init_ItemService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication_interfaces::srv::ItemService_Response success(::communication_interfaces::srv::ItemService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_interfaces::srv::ItemService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_interfaces::srv::ItemService_Response>()
{
  return communication_interfaces::srv::builder::Init_ItemService_Response_success();
}

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__BUILDER_HPP_
