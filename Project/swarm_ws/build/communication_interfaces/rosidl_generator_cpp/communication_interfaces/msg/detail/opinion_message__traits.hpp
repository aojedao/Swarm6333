// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_interfaces:msg/OpinionMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MESSAGE__TRAITS_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MESSAGE__TRAITS_HPP_

#include "communication_interfaces/msg/detail/opinion_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_interfaces::msg::OpinionMessage>()
{
  return "communication_interfaces::msg::OpinionMessage";
}

template<>
inline const char * name<communication_interfaces::msg::OpinionMessage>()
{
  return "communication_interfaces/msg/OpinionMessage";
}

template<>
struct has_fixed_size<communication_interfaces::msg::OpinionMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication_interfaces::msg::OpinionMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication_interfaces::msg::OpinionMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MESSAGE__TRAITS_HPP_
