// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_interfaces:srv/ItemService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_interfaces/srv/detail/item_service__rosidl_typesupport_introspection_c.h"
#include "communication_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_interfaces/srv/detail/item_service__functions.h"
#include "communication_interfaces/srv/detail/item_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_interfaces__srv__ItemService_Request__init(message_memory);
}

void ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_fini_function(void * message_memory)
{
  communication_interfaces__srv__ItemService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_message_member_array[1] = {
  {
    "item_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces__srv__ItemService_Request, item_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_message_members = {
  "communication_interfaces__srv",  // message namespace
  "ItemService_Request",  // message name
  1,  // number of fields
  sizeof(communication_interfaces__srv__ItemService_Request),
  ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_message_member_array,  // message members
  ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_message_type_support_handle = {
  0,
  &ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, srv, ItemService_Request)() {
  if (!ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_message_type_support_handle.typesupport_identifier) {
    ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ItemService_Request__rosidl_typesupport_introspection_c__ItemService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "communication_interfaces/srv/detail/item_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "communication_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "communication_interfaces/srv/detail/item_service__functions.h"
// already included above
// #include "communication_interfaces/srv/detail/item_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_interfaces__srv__ItemService_Response__init(message_memory);
}

void ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_fini_function(void * message_memory)
{
  communication_interfaces__srv__ItemService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_interfaces__srv__ItemService_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_message_members = {
  "communication_interfaces__srv",  // message namespace
  "ItemService_Response",  // message name
  1,  // number of fields
  sizeof(communication_interfaces__srv__ItemService_Response),
  ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_message_member_array,  // message members
  ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_message_type_support_handle = {
  0,
  &ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, srv, ItemService_Response)() {
  if (!ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_message_type_support_handle.typesupport_identifier) {
    ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ItemService_Response__rosidl_typesupport_introspection_c__ItemService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "communication_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "communication_interfaces/srv/detail/item_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_service_members = {
  "communication_interfaces__srv",  // service namespace
  "ItemService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_Request_message_type_support_handle,
  NULL  // response message
  // communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_Response_message_type_support_handle
};

static rosidl_service_type_support_t communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_service_type_support_handle = {
  0,
  &communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, srv, ItemService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, srv, ItemService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, srv, ItemService)() {
  if (!communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_service_type_support_handle.typesupport_identifier) {
    communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, srv, ItemService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_interfaces, srv, ItemService_Response)()->data;
  }

  return &communication_interfaces__srv__detail__item_service__rosidl_typesupport_introspection_c__ItemService_service_type_support_handle;
}
