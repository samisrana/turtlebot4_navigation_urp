// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nav_2d_msgs:msg/Pose2DStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__functions.h"
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav_2d_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pose2DStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav_2d_msgs::msg::Pose2DStamped(_init);
}

void Pose2DStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav_2d_msgs::msg::Pose2DStamped *>(message_memory);
  typed_message->~Pose2DStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pose2DStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_2d_msgs::msg::Pose2DStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_2d_msgs::msg::Pose2DStamped, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pose2DStamped_message_members = {
  "nav_2d_msgs::msg",  // message namespace
  "Pose2DStamped",  // message name
  2,  // number of fields
  sizeof(nav_2d_msgs::msg::Pose2DStamped),
  false,  // has_any_key_member_
  Pose2DStamped_message_member_array,  // message members
  Pose2DStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  Pose2DStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pose2DStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pose2DStamped_message_members,
  get_message_typesupport_handle_function,
  &nav_2d_msgs__msg__Pose2DStamped__get_type_hash,
  &nav_2d_msgs__msg__Pose2DStamped__get_type_description,
  &nav_2d_msgs__msg__Pose2DStamped__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nav_2d_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_2d_msgs::msg::Pose2DStamped>()
{
  return &::nav_2d_msgs::msg::rosidl_typesupport_introspection_cpp::Pose2DStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav_2d_msgs, msg, Pose2DStamped)() {
  return &::nav_2d_msgs::msg::rosidl_typesupport_introspection_cpp::Pose2DStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
