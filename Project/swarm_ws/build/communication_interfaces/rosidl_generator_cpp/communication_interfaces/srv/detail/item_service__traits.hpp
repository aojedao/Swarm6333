// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_interfaces:srv/ItemService.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__TRAITS_HPP_
#define COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__TRAITS_HPP_

#include "communication_interfaces/srv/detail/item_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces::srv::ItemService_Request>()
{
  return "communication_interfaces::srv::ItemService_Request";
}

template<>
inline const char * name<communication_interfaces::srv::ItemService_Request>()
{
  return "communication_interfaces/srv/ItemService_Request";
}

template<>
struct has_fixed_size<communication_interfaces::srv::ItemService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication_interfaces::srv::ItemService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication_interfaces::srv::ItemService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces::srv::ItemService_Response>()
{
  return "communication_interfaces::srv::ItemService_Response";
}

template<>
inline const char * name<communication_interfaces::srv::ItemService_Response>()
{
  return "communication_interfaces/srv/ItemService_Response";
}

template<>
struct has_fixed_size<communication_interfaces::srv::ItemService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication_interfaces::srv::ItemService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication_interfaces::srv::ItemService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces::srv::ItemService>()
{
  return "communication_interfaces::srv::ItemService";
}

template<>
inline const char * name<communication_interfaces::srv::ItemService>()
{
  return "communication_interfaces/srv/ItemService";
}

template<>
struct has_fixed_size<communication_interfaces::srv::ItemService>
  : std::integral_constant<
    bool,
    has_fixed_size<communication_interfaces::srv::ItemService_Request>::value &&
    has_fixed_size<communication_interfaces::srv::ItemService_Response>::value
  >
{
};

template<>
struct has_bounded_size<communication_interfaces::srv::ItemService>
  : std::integral_constant<
    bool,
    has_bounded_size<communication_interfaces::srv::ItemService_Request>::value &&
    has_bounded_size<communication_interfaces::srv::ItemService_Response>::value
  >
{
};

template<>
struct is_service<communication_interfaces::srv::ItemService>
  : std::true_type
{
};

template<>
struct is_service_request<communication_interfaces::srv::ItemService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<communication_interfaces::srv::ItemService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__TRAITS_HPP_
