// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/SetInitialPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/set_initial_pose.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/set_initial_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetInitialPose_Request_pose
{
public:
  Init_SetInitialPose_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::SetInitialPose_Request pose(::nav2_msgs::srv::SetInitialPose_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::SetInitialPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::SetInitialPose_Request>()
{
  return nav2_msgs::srv::builder::Init_SetInitialPose_Request_pose();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::SetInitialPose_Response>()
{
  return ::nav2_msgs::srv::SetInitialPose_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetInitialPose_Event_response
{
public:
  explicit Init_SetInitialPose_Event_response(::nav2_msgs::srv::SetInitialPose_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::SetInitialPose_Event response(::nav2_msgs::srv::SetInitialPose_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::SetInitialPose_Event msg_;
};

class Init_SetInitialPose_Event_request
{
public:
  explicit Init_SetInitialPose_Event_request(::nav2_msgs::srv::SetInitialPose_Event & msg)
  : msg_(msg)
  {}
  Init_SetInitialPose_Event_response request(::nav2_msgs::srv::SetInitialPose_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetInitialPose_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::SetInitialPose_Event msg_;
};

class Init_SetInitialPose_Event_info
{
public:
  Init_SetInitialPose_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetInitialPose_Event_request info(::nav2_msgs::srv::SetInitialPose_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetInitialPose_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::SetInitialPose_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::SetInitialPose_Event>()
{
  return nav2_msgs::srv::builder::Init_SetInitialPose_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__BUILDER_HPP_
