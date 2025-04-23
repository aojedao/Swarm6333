// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_interfaces:srv/ItemService.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__STRUCT_HPP_
#define COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__communication_interfaces__srv__ItemService_Request __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces__srv__ItemService_Request __declspec(deprecated)
#endif

namespace communication_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ItemService_Request_
{
  using Type = ItemService_Request_<ContainerAllocator>;

  explicit ItemService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_index = 0;
    }
  }

  explicit ItemService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_index = 0;
    }
  }

  // field types and members
  using _item_index_type =
    int16_t;
  _item_index_type item_index;

  // setters for named parameter idiom
  Type & set__item_index(
    const int16_t & _arg)
  {
    this->item_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces::srv::ItemService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces::srv::ItemService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces::srv::ItemService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces::srv::ItemService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::srv::ItemService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::srv::ItemService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::srv::ItemService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::srv::ItemService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces::srv::ItemService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces::srv::ItemService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces__srv__ItemService_Request
    std::shared_ptr<communication_interfaces::srv::ItemService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces__srv__ItemService_Request
    std::shared_ptr<communication_interfaces::srv::ItemService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemService_Request_ & other) const
  {
    if (this->item_index != other.item_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemService_Request_

// alias to use template instance with default allocator
using ItemService_Request =
  communication_interfaces::srv::ItemService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication_interfaces


#ifndef _WIN32
# define DEPRECATED__communication_interfaces__srv__ItemService_Response __attribute__((deprecated))
#else
# define DEPRECATED__communication_interfaces__srv__ItemService_Response __declspec(deprecated)
#endif

namespace communication_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ItemService_Response_
{
  using Type = ItemService_Response_<ContainerAllocator>;

  explicit ItemService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ItemService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_interfaces::srv::ItemService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_interfaces::srv::ItemService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_interfaces::srv::ItemService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_interfaces::srv::ItemService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::srv::ItemService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::srv::ItemService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_interfaces::srv::ItemService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_interfaces::srv::ItemService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_interfaces::srv::ItemService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_interfaces::srv::ItemService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_interfaces__srv__ItemService_Response
    std::shared_ptr<communication_interfaces::srv::ItemService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_interfaces__srv__ItemService_Response
    std::shared_ptr<communication_interfaces::srv::ItemService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemService_Response_

// alias to use template instance with default allocator
using ItemService_Response =
  communication_interfaces::srv::ItemService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication_interfaces

namespace communication_interfaces
{

namespace srv
{

struct ItemService
{
  using Request = communication_interfaces::srv::ItemService_Request;
  using Response = communication_interfaces::srv::ItemService_Response;
};

}  // namespace srv

}  // namespace communication_interfaces

#endif  // COMMUNICATION_INTERFACES__SRV__DETAIL__ITEM_SERVICE__STRUCT_HPP_
