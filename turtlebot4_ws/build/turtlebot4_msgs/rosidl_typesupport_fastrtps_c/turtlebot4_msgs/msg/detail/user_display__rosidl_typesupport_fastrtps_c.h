// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from turtlebot4_msgs:msg/UserDisplay.idl
// generated code does not contain a copyright notice
#ifndef TURTLEBOT4_MSGS__MSG__DETAIL__USER_DISPLAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TURTLEBOT4_MSGS__MSG__DETAIL__USER_DISPLAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlebot4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlebot4_msgs/msg/detail/user_display__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
bool cdr_serialize_turtlebot4_msgs__msg__UserDisplay(
  const turtlebot4_msgs__msg__UserDisplay * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
bool cdr_deserialize_turtlebot4_msgs__msg__UserDisplay(
  eprosima::fastcdr::Cdr &,
  turtlebot4_msgs__msg__UserDisplay * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
size_t get_serialized_size_turtlebot4_msgs__msg__UserDisplay(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
size_t max_serialized_size_turtlebot4_msgs__msg__UserDisplay(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
bool cdr_serialize_key_turtlebot4_msgs__msg__UserDisplay(
  const turtlebot4_msgs__msg__UserDisplay * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
size_t get_serialized_size_key_turtlebot4_msgs__msg__UserDisplay(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
size_t max_serialized_size_key_turtlebot4_msgs__msg__UserDisplay(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot4_msgs, msg, UserDisplay)();

#ifdef __cplusplus
}
#endif

#endif  // TURTLEBOT4_MSGS__MSG__DETAIL__USER_DISPLAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
