// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtlebot4_msgs:msg/UserLed.idl
// generated code does not contain a copyright notice
#include "turtlebot4_msgs/msg/detail/user_led__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtlebot4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlebot4_msgs/msg/detail/user_led__struct.h"
#include "turtlebot4_msgs/msg/detail/user_led__functions.h"
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


// forward declare type support functions


using _UserLed__ros_msg_type = turtlebot4_msgs__msg__UserLed;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
bool cdr_serialize_turtlebot4_msgs__msg__UserLed(
  const turtlebot4_msgs__msg__UserLed * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: led
  {
    cdr << ros_message->led;
  }

  // Field name: color
  {
    cdr << ros_message->color;
  }

  // Field name: blink_period
  {
    cdr << ros_message->blink_period;
  }

  // Field name: duty_cycle
  {
    cdr << ros_message->duty_cycle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
bool cdr_deserialize_turtlebot4_msgs__msg__UserLed(
  eprosima::fastcdr::Cdr & cdr,
  turtlebot4_msgs__msg__UserLed * ros_message)
{
  // Field name: led
  {
    cdr >> ros_message->led;
  }

  // Field name: color
  {
    cdr >> ros_message->color;
  }

  // Field name: blink_period
  {
    cdr >> ros_message->blink_period;
  }

  // Field name: duty_cycle
  {
    cdr >> ros_message->duty_cycle;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
size_t get_serialized_size_turtlebot4_msgs__msg__UserLed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UserLed__ros_msg_type * ros_message = static_cast<const _UserLed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: led
  {
    size_t item_size = sizeof(ros_message->led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: color
  {
    size_t item_size = sizeof(ros_message->color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: blink_period
  {
    size_t item_size = sizeof(ros_message->blink_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: duty_cycle
  {
    size_t item_size = sizeof(ros_message->duty_cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
size_t max_serialized_size_turtlebot4_msgs__msg__UserLed(
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

  // Field name: led
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: blink_period
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: duty_cycle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = turtlebot4_msgs__msg__UserLed;
    is_plain =
      (
      offsetof(DataType, duty_cycle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
bool cdr_serialize_key_turtlebot4_msgs__msg__UserLed(
  const turtlebot4_msgs__msg__UserLed * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: led
  {
    cdr << ros_message->led;
  }

  // Field name: color
  {
    cdr << ros_message->color;
  }

  // Field name: blink_period
  {
    cdr << ros_message->blink_period;
  }

  // Field name: duty_cycle
  {
    cdr << ros_message->duty_cycle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
size_t get_serialized_size_key_turtlebot4_msgs__msg__UserLed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UserLed__ros_msg_type * ros_message = static_cast<const _UserLed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: led
  {
    size_t item_size = sizeof(ros_message->led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: color
  {
    size_t item_size = sizeof(ros_message->color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: blink_period
  {
    size_t item_size = sizeof(ros_message->blink_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: duty_cycle
  {
    size_t item_size = sizeof(ros_message->duty_cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot4_msgs
size_t max_serialized_size_key_turtlebot4_msgs__msg__UserLed(
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
  // Field name: led
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: blink_period
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: duty_cycle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = turtlebot4_msgs__msg__UserLed;
    is_plain =
      (
      offsetof(DataType, duty_cycle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _UserLed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const turtlebot4_msgs__msg__UserLed * ros_message = static_cast<const turtlebot4_msgs__msg__UserLed *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_turtlebot4_msgs__msg__UserLed(ros_message, cdr);
}

static bool _UserLed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  turtlebot4_msgs__msg__UserLed * ros_message = static_cast<turtlebot4_msgs__msg__UserLed *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_turtlebot4_msgs__msg__UserLed(cdr, ros_message);
}

static uint32_t _UserLed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlebot4_msgs__msg__UserLed(
      untyped_ros_message, 0));
}

static size_t _UserLed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_turtlebot4_msgs__msg__UserLed(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UserLed = {
  "turtlebot4_msgs::msg",
  "UserLed",
  _UserLed__cdr_serialize,
  _UserLed__cdr_deserialize,
  _UserLed__get_serialized_size,
  _UserLed__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UserLed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UserLed,
  get_message_typesupport_handle_function,
  &turtlebot4_msgs__msg__UserLed__get_type_hash,
  &turtlebot4_msgs__msg__UserLed__get_type_description,
  &turtlebot4_msgs__msg__UserLed__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot4_msgs, msg, UserLed)() {
  return &_UserLed__type_support;
}

#if defined(__cplusplus)
}
#endif
