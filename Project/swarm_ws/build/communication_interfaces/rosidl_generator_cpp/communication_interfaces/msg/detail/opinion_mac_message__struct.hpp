// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces:msg/OpinionMACMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__STRUCT_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces__msg__OpinionMACMessage __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces__msg__OpinionMACMessage __declspec(deprecated)
#endif

namespace communication_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpinionMACMessage_
{
  using Type = OpinionMACMessage_<ContainerAllocator>;

  explicit OpinionMACMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->opinion = 0ll;
      this->mac = "";
    }
  }

  explicit OpinionMACMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mac(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->opinion = 0ll;
      this->mac = "";
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _opinion_type =
    int64_t;
  _opinion_type opinion;
  using _mac_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mac_type mac;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__opinion(
    const int64_t & _arg)
  {
    this->opinion = _arg;
    return *this;
  }
  Type & set__mac(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mac = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces__msg__OpinionMACMessage
    std::shared_ptr<communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces__msg__OpinionMACMessage
    std::shared_ptr<communication_interfaces::msg::OpinionMACMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpinionMACMessage_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->opinion != other.opinion) {
      return false;
    }
    if (this->mac != other.mac) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpinionMACMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpinionMACMessage_

// alias to use template instance with default allocator
using OpinionMACMessage =
  communication_interfaces::msg::OpinionMACMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__OPINION_MAC_MESSAGE__STRUCT_HPP_
