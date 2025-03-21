// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:srv/ClearEntireCostmap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/clear_entire_costmap.h"


#ifndef NAV2_MSGS__SRV__DETAIL__CLEAR_ENTIRE_COSTMAP__STRUCT_H_
#define NAV2_MSGS__SRV__DETAIL__CLEAR_ENTIRE_COSTMAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in srv/ClearEntireCostmap in the package nav2_msgs.
typedef struct nav2_msgs__srv__ClearEntireCostmap_Request
{
  std_msgs__msg__Empty request;
} nav2_msgs__srv__ClearEntireCostmap_Request;

// Struct for a sequence of nav2_msgs__srv__ClearEntireCostmap_Request.
typedef struct nav2_msgs__srv__ClearEntireCostmap_Request__Sequence
{
  nav2_msgs__srv__ClearEntireCostmap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__ClearEntireCostmap_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in srv/ClearEntireCostmap in the package nav2_msgs.
typedef struct nav2_msgs__srv__ClearEntireCostmap_Response
{
  std_msgs__msg__Empty response;
} nav2_msgs__srv__ClearEntireCostmap_Response;

// Struct for a sequence of nav2_msgs__srv__ClearEntireCostmap_Response.
typedef struct nav2_msgs__srv__ClearEntireCostmap_Response__Sequence
{
  nav2_msgs__srv__ClearEntireCostmap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__ClearEntireCostmap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav2_msgs__srv__ClearEntireCostmap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav2_msgs__srv__ClearEntireCostmap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ClearEntireCostmap in the package nav2_msgs.
typedef struct nav2_msgs__srv__ClearEntireCostmap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav2_msgs__srv__ClearEntireCostmap_Request__Sequence request;
  nav2_msgs__srv__ClearEntireCostmap_Response__Sequence response;
} nav2_msgs__srv__ClearEntireCostmap_Event;

// Struct for a sequence of nav2_msgs__srv__ClearEntireCostmap_Event.
typedef struct nav2_msgs__srv__ClearEntireCostmap_Event__Sequence
{
  nav2_msgs__srv__ClearEntireCostmap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__srv__ClearEntireCostmap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__SRV__DETAIL__CLEAR_ENTIRE_COSTMAP__STRUCT_H_
