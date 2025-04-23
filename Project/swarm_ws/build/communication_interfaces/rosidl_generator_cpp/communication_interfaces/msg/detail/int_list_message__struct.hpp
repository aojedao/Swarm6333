// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces:msg/IntListMessage.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__MSG__DETAIL__INT_LIST_MESSAGE__STRUCT_HPP_
#define COMMUNICATION_INTERFACES__MSG__DETAIL__INT_LIST_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces__msg__IntListMessage __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces__msg__IntListMessage __declspec(deprecated)
#endif

namespace communication_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntListMessage_
{
  using Type = IntListMessage_<ContainerAllocator>;

  explicit IntListMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IntListMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces::msg::IntListMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces::msg::IntListMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces::msg::IntListMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces::msg::IntListMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::IntListMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::IntListMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::msg::IntListMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::msg::IntListMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces::msg::IntListMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces::msg::IntListMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces__msg__IntListMessage
    std::shared_ptr<communication_interfaces::msg::IntListMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces__msg__IntListMessage
    std::shared_ptr<communication_interfaces::msg::IntListMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntListMessage_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntListMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntListMessage_

// alias to use template instance with default allocator
using IntListMessage =
  communication_interfaces::msg::IntListMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__MSG__DETAIL__INT_LIST_MESSAGE__STRUCT_HPP_
