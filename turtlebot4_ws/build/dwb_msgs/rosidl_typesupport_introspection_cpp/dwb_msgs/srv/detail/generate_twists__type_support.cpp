// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dwb_msgs:srv/GenerateTwists.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dwb_msgs/srv/detail/generate_twists__functions.h"
#include "dwb_msgs/srv/detail/generate_twists__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dwb_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GenerateTwists_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dwb_msgs::srv::GenerateTwists_Request(_init);
}

void GenerateTwists_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dwb_msgs::srv::GenerateTwists_Request *>(message_memory);
  typed_message->~GenerateTwists_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GenerateTwists_Request_message_member_array[1] = {
  {
    "current_vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_2d_msgs::msg::Twist2D>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::srv::GenerateTwists_Request, current_vel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GenerateTwists_Request_message_members = {
  "dwb_msgs::srv",  // message namespace
  "GenerateTwists_Request",  // message name
  1,  // number of fields
  sizeof(dwb_msgs::srv::GenerateTwists_Request),
  false,  // has_any_key_member_
  GenerateTwists_Request_message_member_array,  // message members
  GenerateTwists_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GenerateTwists_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GenerateTwists_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GenerateTwists_Request_message_members,
  get_message_typesupport_handle_function,
  &dwb_msgs__srv__GenerateTwists_Request__get_type_hash,
  &dwb_msgs__srv__GenerateTwists_Request__get_type_description,
  &dwb_msgs__srv__GenerateTwists_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dwb_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::GenerateTwists_Request>()
{
  return &::dwb_msgs::srv::rosidl_typesupport_introspection_cpp::GenerateTwists_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, srv, GenerateTwists_Request)() {
  return &::dwb_msgs::srv::rosidl_typesupport_introspection_cpp::GenerateTwists_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__functions.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dwb_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GenerateTwists_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dwb_msgs::srv::GenerateTwists_Response(_init);
}

void GenerateTwists_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dwb_msgs::srv::GenerateTwists_Response *>(message_memory);
  typed_message->~GenerateTwists_Response();
}

size_t size_function__GenerateTwists_Response__twists(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nav_2d_msgs::msg::Twist2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GenerateTwists_Response__twists(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nav_2d_msgs::msg::Twist2D> *>(untyped_member);
  return &member[index];
}

void * get_function__GenerateTwists_Response__twists(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nav_2d_msgs::msg::Twist2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__GenerateTwists_Response__twists(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nav_2d_msgs::msg::Twist2D *>(
    get_const_function__GenerateTwists_Response__twists(untyped_member, index));
  auto & value = *reinterpret_cast<nav_2d_msgs::msg::Twist2D *>(untyped_value);
  value = item;
}

void assign_function__GenerateTwists_Response__twists(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nav_2d_msgs::msg::Twist2D *>(
    get_function__GenerateTwists_Response__twists(untyped_member, index));
  const auto & value = *reinterpret_cast<const nav_2d_msgs::msg::Twist2D *>(untyped_value);
  item = value;
}

void resize_function__GenerateTwists_Response__twists(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nav_2d_msgs::msg::Twist2D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GenerateTwists_Response_message_member_array[1] = {
  {
    "twists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_2d_msgs::msg::Twist2D>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::srv::GenerateTwists_Response, twists),  // bytes offset in struct
    nullptr,  // default value
    size_function__GenerateTwists_Response__twists,  // size() function pointer
    get_const_function__GenerateTwists_Response__twists,  // get_const(index) function pointer
    get_function__GenerateTwists_Response__twists,  // get(index) function pointer
    fetch_function__GenerateTwists_Response__twists,  // fetch(index, &value) function pointer
    assign_function__GenerateTwists_Response__twists,  // assign(index, value) function pointer
    resize_function__GenerateTwists_Response__twists  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GenerateTwists_Response_message_members = {
  "dwb_msgs::srv",  // message namespace
  "GenerateTwists_Response",  // message name
  1,  // number of fields
  sizeof(dwb_msgs::srv::GenerateTwists_Response),
  false,  // has_any_key_member_
  GenerateTwists_Response_message_member_array,  // message members
  GenerateTwists_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GenerateTwists_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GenerateTwists_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GenerateTwists_Response_message_members,
  get_message_typesupport_handle_function,
  &dwb_msgs__srv__GenerateTwists_Response__get_type_hash,
  &dwb_msgs__srv__GenerateTwists_Response__get_type_description,
  &dwb_msgs__srv__GenerateTwists_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dwb_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::GenerateTwists_Response>()
{
  return &::dwb_msgs::srv::rosidl_typesupport_introspection_cpp::GenerateTwists_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, srv, GenerateTwists_Response)() {
  return &::dwb_msgs::srv::rosidl_typesupport_introspection_cpp::GenerateTwists_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__functions.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dwb_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GenerateTwists_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dwb_msgs::srv::GenerateTwists_Event(_init);
}

void GenerateTwists_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dwb_msgs::srv::GenerateTwists_Event *>(message_memory);
  typed_message->~GenerateTwists_Event();
}

size_t size_function__GenerateTwists_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dwb_msgs::srv::GenerateTwists_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GenerateTwists_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dwb_msgs::srv::GenerateTwists_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GenerateTwists_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dwb_msgs::srv::GenerateTwists_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GenerateTwists_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dwb_msgs::srv::GenerateTwists_Request *>(
    get_const_function__GenerateTwists_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<dwb_msgs::srv::GenerateTwists_Request *>(untyped_value);
  value = item;
}

void assign_function__GenerateTwists_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dwb_msgs::srv::GenerateTwists_Request *>(
    get_function__GenerateTwists_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const dwb_msgs::srv::GenerateTwists_Request *>(untyped_value);
  item = value;
}

void resize_function__GenerateTwists_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dwb_msgs::srv::GenerateTwists_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GenerateTwists_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dwb_msgs::srv::GenerateTwists_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GenerateTwists_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dwb_msgs::srv::GenerateTwists_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GenerateTwists_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dwb_msgs::srv::GenerateTwists_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GenerateTwists_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dwb_msgs::srv::GenerateTwists_Response *>(
    get_const_function__GenerateTwists_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<dwb_msgs::srv::GenerateTwists_Response *>(untyped_value);
  value = item;
}

void assign_function__GenerateTwists_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dwb_msgs::srv::GenerateTwists_Response *>(
    get_function__GenerateTwists_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const dwb_msgs::srv::GenerateTwists_Response *>(untyped_value);
  item = value;
}

void resize_function__GenerateTwists_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dwb_msgs::srv::GenerateTwists_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GenerateTwists_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs::srv::GenerateTwists_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dwb_msgs::srv::GenerateTwists_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(dwb_msgs::srv::GenerateTwists_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GenerateTwists_Event__request,  // size() function pointer
    get_const_function__GenerateTwists_Event__request,  // get_const(index) function pointer
    get_function__GenerateTwists_Event__request,  // get(index) function pointer
    fetch_function__GenerateTwists_Event__request,  // fetch(index, &value) function pointer
    assign_function__GenerateTwists_Event__request,  // assign(index, value) function pointer
    resize_function__GenerateTwists_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dwb_msgs::srv::GenerateTwists_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(dwb_msgs::srv::GenerateTwists_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GenerateTwists_Event__response,  // size() function pointer
    get_const_function__GenerateTwists_Event__response,  // get_const(index) function pointer
    get_function__GenerateTwists_Event__response,  // get(index) function pointer
    fetch_function__GenerateTwists_Event__response,  // fetch(index, &value) function pointer
    assign_function__GenerateTwists_Event__response,  // assign(index, value) function pointer
    resize_function__GenerateTwists_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GenerateTwists_Event_message_members = {
  "dwb_msgs::srv",  // message namespace
  "GenerateTwists_Event",  // message name
  3,  // number of fields
  sizeof(dwb_msgs::srv::GenerateTwists_Event),
  false,  // has_any_key_member_
  GenerateTwists_Event_message_member_array,  // message members
  GenerateTwists_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GenerateTwists_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GenerateTwists_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GenerateTwists_Event_message_members,
  get_message_typesupport_handle_function,
  &dwb_msgs__srv__GenerateTwists_Event__get_type_hash,
  &dwb_msgs__srv__GenerateTwists_Event__get_type_description,
  &dwb_msgs__srv__GenerateTwists_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dwb_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::GenerateTwists_Event>()
{
  return &::dwb_msgs::srv::rosidl_typesupport_introspection_cpp::GenerateTwists_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, srv, GenerateTwists_Event)() {
  return &::dwb_msgs::srv::rosidl_typesupport_introspection_cpp::GenerateTwists_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__functions.h"
// already included above
// #include "dwb_msgs/srv/detail/generate_twists__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace dwb_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GenerateTwists_service_members = {
  "dwb_msgs::srv",  // service namespace
  "GenerateTwists",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<dwb_msgs::srv::GenerateTwists>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GenerateTwists_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GenerateTwists_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dwb_msgs::srv::GenerateTwists_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dwb_msgs::srv::GenerateTwists_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dwb_msgs::srv::GenerateTwists_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dwb_msgs::srv::GenerateTwists>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dwb_msgs::srv::GenerateTwists>,
  &dwb_msgs__srv__GenerateTwists__get_type_hash,
  &dwb_msgs__srv__GenerateTwists__get_type_description,
  &dwb_msgs__srv__GenerateTwists__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dwb_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dwb_msgs::srv::GenerateTwists>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::dwb_msgs::srv::rosidl_typesupport_introspection_cpp::GenerateTwists_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dwb_msgs::srv::GenerateTwists_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dwb_msgs::srv::GenerateTwists_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dwb_msgs::srv::GenerateTwists_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, srv, GenerateTwists)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<dwb_msgs::srv::GenerateTwists>();
}

#ifdef __cplusplus
}
#endif
