// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice
#ifndef DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/msg/detail/trajectory2_d__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_dwb_msgs__msg__Trajectory2D(
  const dwb_msgs__msg__Trajectory2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_deserialize_dwb_msgs__msg__Trajectory2D(
  eprosima::fastcdr::Cdr &,
  dwb_msgs__msg__Trajectory2D * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_key_dwb_msgs__msg__Trajectory2D(
  const dwb_msgs__msg__Trajectory2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_key_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_key_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D)();

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
