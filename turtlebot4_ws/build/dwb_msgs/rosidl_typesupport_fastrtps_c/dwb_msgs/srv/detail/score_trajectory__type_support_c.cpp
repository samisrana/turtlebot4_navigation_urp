// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dwb_msgs:srv/ScoreTrajectory.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/srv/detail/score_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/srv/detail/score_trajectory__struct.h"
#include "dwb_msgs/srv/detail/score_trajectory__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"  // traj
#include "nav_2d_msgs/msg/detail/path2_d__functions.h"  // global_plan
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__functions.h"  // pose
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"  // velocity

// forward declare type support functions

bool cdr_serialize_dwb_msgs__msg__Trajectory2D(
  const dwb_msgs__msg__Trajectory2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dwb_msgs__msg__Trajectory2D(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__msg__Trajectory2D * ros_message);

size_t get_serialized_size_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dwb_msgs__msg__Trajectory2D(
  const dwb_msgs__msg__Trajectory2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dwb_msgs__msg__Trajectory2D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dwb_msgs__msg__Trajectory2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, Trajectory2D)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_serialize_nav_2d_msgs__msg__Path2D(
  const nav_2d_msgs__msg__Path2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_deserialize_nav_2d_msgs__msg__Path2D(
  eprosima::fastcdr::Cdr & cdr,
  nav_2d_msgs__msg__Path2D * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_nav_2d_msgs__msg__Path2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_nav_2d_msgs__msg__Path2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_serialize_key_nav_2d_msgs__msg__Path2D(
  const nav_2d_msgs__msg__Path2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_key_nav_2d_msgs__msg__Path2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_key_nav_2d_msgs__msg__Path2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Path2D)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_serialize_nav_2d_msgs__msg__Pose2DStamped(
  const nav_2d_msgs__msg__Pose2DStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_deserialize_nav_2d_msgs__msg__Pose2DStamped(
  eprosima::fastcdr::Cdr & cdr,
  nav_2d_msgs__msg__Pose2DStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_nav_2d_msgs__msg__Pose2DStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_nav_2d_msgs__msg__Pose2DStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_serialize_key_nav_2d_msgs__msg__Pose2DStamped(
  const nav_2d_msgs__msg__Pose2DStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_key_nav_2d_msgs__msg__Pose2DStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_key_nav_2d_msgs__msg__Pose2DStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Pose2DStamped)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_serialize_nav_2d_msgs__msg__Twist2D(
  const nav_2d_msgs__msg__Twist2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_deserialize_nav_2d_msgs__msg__Twist2D(
  eprosima::fastcdr::Cdr & cdr,
  nav_2d_msgs__msg__Twist2D * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_nav_2d_msgs__msg__Twist2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_nav_2d_msgs__msg__Twist2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_serialize_key_nav_2d_msgs__msg__Twist2D(
  const nav_2d_msgs__msg__Twist2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_key_nav_2d_msgs__msg__Twist2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_key_nav_2d_msgs__msg__Twist2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_2d_msgs, msg, Twist2D)();


using _ScoreTrajectory_Request__ros_msg_type = dwb_msgs__srv__ScoreTrajectory_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Request(
  const dwb_msgs__srv__ScoreTrajectory_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pose
  {
    cdr_serialize_nav_2d_msgs__msg__Pose2DStamped(
      &ros_message->pose, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_nav_2d_msgs__msg__Twist2D(
      &ros_message->velocity, cdr);
  }

  // Field name: global_plan
  {
    cdr_serialize_nav_2d_msgs__msg__Path2D(
      &ros_message->global_plan, cdr);
  }

  // Field name: traj
  {
    cdr_serialize_dwb_msgs__msg__Trajectory2D(
      &ros_message->traj, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Request(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__srv__ScoreTrajectory_Request * ros_message)
{
  // Field name: pose
  {
    cdr_deserialize_nav_2d_msgs__msg__Pose2DStamped(cdr, &ros_message->pose);
  }

  // Field name: velocity
  {
    cdr_deserialize_nav_2d_msgs__msg__Twist2D(cdr, &ros_message->velocity);
  }

  // Field name: global_plan
  {
    cdr_deserialize_nav_2d_msgs__msg__Path2D(cdr, &ros_message->global_plan);
  }

  // Field name: traj
  {
    cdr_deserialize_dwb_msgs__msg__Trajectory2D(cdr, &ros_message->traj);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScoreTrajectory_Request__ros_msg_type * ros_message = static_cast<const _ScoreTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pose
  current_alignment += get_serialized_size_nav_2d_msgs__msg__Pose2DStamped(
    &(ros_message->pose), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_nav_2d_msgs__msg__Twist2D(
    &(ros_message->velocity), current_alignment);

  // Field name: global_plan
  current_alignment += get_serialized_size_nav_2d_msgs__msg__Path2D(
    &(ros_message->global_plan), current_alignment);

  // Field name: traj
  current_alignment += get_serialized_size_dwb_msgs__msg__Trajectory2D(
    &(ros_message->traj), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_2d_msgs__msg__Pose2DStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_2d_msgs__msg__Twist2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: global_plan
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_2d_msgs__msg__Path2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: traj
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dwb_msgs__msg__Trajectory2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__srv__ScoreTrajectory_Request;
    is_plain =
      (
      offsetof(DataType, traj) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_key_dwb_msgs__srv__ScoreTrajectory_Request(
  const dwb_msgs__srv__ScoreTrajectory_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pose
  {
    cdr_serialize_key_nav_2d_msgs__msg__Pose2DStamped(
      &ros_message->pose, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_key_nav_2d_msgs__msg__Twist2D(
      &ros_message->velocity, cdr);
  }

  // Field name: global_plan
  {
    cdr_serialize_key_nav_2d_msgs__msg__Path2D(
      &ros_message->global_plan, cdr);
  }

  // Field name: traj
  {
    cdr_serialize_key_dwb_msgs__msg__Trajectory2D(
      &ros_message->traj, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScoreTrajectory_Request__ros_msg_type * ros_message = static_cast<const _ScoreTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pose
  current_alignment += get_serialized_size_key_nav_2d_msgs__msg__Pose2DStamped(
    &(ros_message->pose), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_key_nav_2d_msgs__msg__Twist2D(
    &(ros_message->velocity), current_alignment);

  // Field name: global_plan
  current_alignment += get_serialized_size_key_nav_2d_msgs__msg__Path2D(
    &(ros_message->global_plan), current_alignment);

  // Field name: traj
  current_alignment += get_serialized_size_key_dwb_msgs__msg__Trajectory2D(
    &(ros_message->traj), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_nav_2d_msgs__msg__Pose2DStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_nav_2d_msgs__msg__Twist2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: global_plan
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_nav_2d_msgs__msg__Path2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: traj
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dwb_msgs__msg__Trajectory2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__srv__ScoreTrajectory_Request;
    is_plain =
      (
      offsetof(DataType, traj) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ScoreTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dwb_msgs__srv__ScoreTrajectory_Request * ros_message = static_cast<const dwb_msgs__srv__ScoreTrajectory_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Request(ros_message, cdr);
}

static bool _ScoreTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dwb_msgs__srv__ScoreTrajectory_Request * ros_message = static_cast<dwb_msgs__srv__ScoreTrajectory_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Request(cdr, ros_message);
}

static uint32_t _ScoreTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Request(
      untyped_ros_message, 0));
}

static size_t _ScoreTrajectory_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ScoreTrajectory_Request = {
  "dwb_msgs::srv",
  "ScoreTrajectory_Request",
  _ScoreTrajectory_Request__cdr_serialize,
  _ScoreTrajectory_Request__cdr_deserialize,
  _ScoreTrajectory_Request__get_serialized_size,
  _ScoreTrajectory_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ScoreTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScoreTrajectory_Request,
  get_message_typesupport_handle_function,
  &dwb_msgs__srv__ScoreTrajectory_Request__get_type_hash,
  &dwb_msgs__srv__ScoreTrajectory_Request__get_type_description,
  &dwb_msgs__srv__ScoreTrajectory_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, ScoreTrajectory_Request)() {
  return &_ScoreTrajectory_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/score_trajectory__struct.h"
// already included above
// #include "dwb_msgs/srv/detail/score_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "dwb_msgs/msg/detail/trajectory_score__functions.h"  // score

// forward declare type support functions

bool cdr_serialize_dwb_msgs__msg__TrajectoryScore(
  const dwb_msgs__msg__TrajectoryScore * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dwb_msgs__msg__TrajectoryScore(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__msg__TrajectoryScore * ros_message);

size_t get_serialized_size_dwb_msgs__msg__TrajectoryScore(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__msg__TrajectoryScore(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dwb_msgs__msg__TrajectoryScore(
  const dwb_msgs__msg__TrajectoryScore * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dwb_msgs__msg__TrajectoryScore(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dwb_msgs__msg__TrajectoryScore(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, TrajectoryScore)();


using _ScoreTrajectory_Response__ros_msg_type = dwb_msgs__srv__ScoreTrajectory_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Response(
  const dwb_msgs__srv__ScoreTrajectory_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: score
  {
    cdr_serialize_dwb_msgs__msg__TrajectoryScore(
      &ros_message->score, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Response(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__srv__ScoreTrajectory_Response * ros_message)
{
  // Field name: score
  {
    cdr_deserialize_dwb_msgs__msg__TrajectoryScore(cdr, &ros_message->score);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScoreTrajectory_Response__ros_msg_type * ros_message = static_cast<const _ScoreTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: score
  current_alignment += get_serialized_size_dwb_msgs__msg__TrajectoryScore(
    &(ros_message->score), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: score
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dwb_msgs__msg__TrajectoryScore(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__srv__ScoreTrajectory_Response;
    is_plain =
      (
      offsetof(DataType, score) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_key_dwb_msgs__srv__ScoreTrajectory_Response(
  const dwb_msgs__srv__ScoreTrajectory_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: score
  {
    cdr_serialize_key_dwb_msgs__msg__TrajectoryScore(
      &ros_message->score, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScoreTrajectory_Response__ros_msg_type * ros_message = static_cast<const _ScoreTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: score
  current_alignment += get_serialized_size_key_dwb_msgs__msg__TrajectoryScore(
    &(ros_message->score), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: score
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dwb_msgs__msg__TrajectoryScore(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__srv__ScoreTrajectory_Response;
    is_plain =
      (
      offsetof(DataType, score) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ScoreTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dwb_msgs__srv__ScoreTrajectory_Response * ros_message = static_cast<const dwb_msgs__srv__ScoreTrajectory_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Response(ros_message, cdr);
}

static bool _ScoreTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dwb_msgs__srv__ScoreTrajectory_Response * ros_message = static_cast<dwb_msgs__srv__ScoreTrajectory_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Response(cdr, ros_message);
}

static uint32_t _ScoreTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Response(
      untyped_ros_message, 0));
}

static size_t _ScoreTrajectory_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ScoreTrajectory_Response = {
  "dwb_msgs::srv",
  "ScoreTrajectory_Response",
  _ScoreTrajectory_Response__cdr_serialize,
  _ScoreTrajectory_Response__cdr_deserialize,
  _ScoreTrajectory_Response__get_serialized_size,
  _ScoreTrajectory_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ScoreTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScoreTrajectory_Response,
  get_message_typesupport_handle_function,
  &dwb_msgs__srv__ScoreTrajectory_Response__get_type_hash,
  &dwb_msgs__srv__ScoreTrajectory_Response__get_type_description,
  &dwb_msgs__srv__ScoreTrajectory_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, ScoreTrajectory_Response)() {
  return &_ScoreTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/score_trajectory__struct.h"
// already included above
// #include "dwb_msgs/srv/detail/score_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Request(
  const dwb_msgs__srv__ScoreTrajectory_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Request(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__srv__ScoreTrajectory_Request * ros_message);

size_t get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dwb_msgs__srv__ScoreTrajectory_Request(
  const dwb_msgs__srv__ScoreTrajectory_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, ScoreTrajectory_Request)();

bool cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Response(
  const dwb_msgs__srv__ScoreTrajectory_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Response(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__srv__ScoreTrajectory_Response * ros_message);

size_t get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_dwb_msgs__srv__ScoreTrajectory_Response(
  const dwb_msgs__srv__ScoreTrajectory_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, ScoreTrajectory_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _ScoreTrajectory_Event__ros_msg_type = dwb_msgs__srv__ScoreTrajectory_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Event(
  const dwb_msgs__srv__ScoreTrajectory_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Event(
  eprosima::fastcdr::Cdr & cdr,
  dwb_msgs__srv__ScoreTrajectory_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      dwb_msgs__srv__ScoreTrajectory_Request__Sequence__fini(&ros_message->request);
    }
    if (!dwb_msgs__srv__ScoreTrajectory_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      dwb_msgs__srv__ScoreTrajectory_Response__Sequence__fini(&ros_message->response);
    }
    if (!dwb_msgs__srv__ScoreTrajectory_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScoreTrajectory_Event__ros_msg_type * ros_message = static_cast<const _ScoreTrajectory_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__srv__ScoreTrajectory_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
bool cdr_serialize_key_dwb_msgs__srv__ScoreTrajectory_Event(
  const dwb_msgs__srv__ScoreTrajectory_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_dwb_msgs__srv__ScoreTrajectory_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_dwb_msgs__srv__ScoreTrajectory_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScoreTrajectory_Event__ros_msg_type * ros_message = static_cast<const _ScoreTrajectory_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_dwb_msgs__srv__ScoreTrajectory_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dwb_msgs__srv__ScoreTrajectory_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ScoreTrajectory_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const dwb_msgs__srv__ScoreTrajectory_Event * ros_message = static_cast<const dwb_msgs__srv__ScoreTrajectory_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_dwb_msgs__srv__ScoreTrajectory_Event(ros_message, cdr);
}

static bool _ScoreTrajectory_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  dwb_msgs__srv__ScoreTrajectory_Event * ros_message = static_cast<dwb_msgs__srv__ScoreTrajectory_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_dwb_msgs__srv__ScoreTrajectory_Event(cdr, ros_message);
}

static uint32_t _ScoreTrajectory_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__srv__ScoreTrajectory_Event(
      untyped_ros_message, 0));
}

static size_t _ScoreTrajectory_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dwb_msgs__srv__ScoreTrajectory_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ScoreTrajectory_Event = {
  "dwb_msgs::srv",
  "ScoreTrajectory_Event",
  _ScoreTrajectory_Event__cdr_serialize,
  _ScoreTrajectory_Event__cdr_deserialize,
  _ScoreTrajectory_Event__get_serialized_size,
  _ScoreTrajectory_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ScoreTrajectory_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScoreTrajectory_Event,
  get_message_typesupport_handle_function,
  &dwb_msgs__srv__ScoreTrajectory_Event__get_type_hash,
  &dwb_msgs__srv__ScoreTrajectory_Event__get_type_description,
  &dwb_msgs__srv__ScoreTrajectory_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, ScoreTrajectory_Event)() {
  return &_ScoreTrajectory_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/srv/score_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ScoreTrajectory__callbacks = {
  "dwb_msgs::srv",
  "ScoreTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, ScoreTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, ScoreTrajectory_Response)(),
};

static rosidl_service_type_support_t ScoreTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ScoreTrajectory__callbacks,
  get_service_typesupport_handle_function,
  &_ScoreTrajectory_Request__type_support,
  &_ScoreTrajectory_Response__type_support,
  &_ScoreTrajectory_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dwb_msgs,
    srv,
    ScoreTrajectory
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dwb_msgs,
    srv,
    ScoreTrajectory
  ),
  &dwb_msgs__srv__ScoreTrajectory__get_type_hash,
  &dwb_msgs__srv__ScoreTrajectory__get_type_description,
  &dwb_msgs__srv__ScoreTrajectory__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, srv, ScoreTrajectory)() {
  return &ScoreTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
