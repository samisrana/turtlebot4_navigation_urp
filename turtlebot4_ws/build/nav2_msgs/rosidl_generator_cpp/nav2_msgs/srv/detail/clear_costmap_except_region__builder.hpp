// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/ClearCostmapExceptRegion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/clear_costmap_except_region.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_EXCEPT_REGION__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_EXCEPT_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/clear_costmap_except_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearCostmapExceptRegion_Request_reset_distance
{
public:
  Init_ClearCostmapExceptRegion_Request_reset_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ClearCostmapExceptRegion_Request reset_distance(::nav2_msgs::srv::ClearCostmapExceptRegion_Request::_reset_distance_type arg)
  {
    msg_.reset_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ClearCostmapExceptRegion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ClearCostmapExceptRegion_Request>()
{
  return nav2_msgs::srv::builder::Init_ClearCostmapExceptRegion_Request_reset_distance();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearCostmapExceptRegion_Response_response
{
public:
  Init_ClearCostmapExceptRegion_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ClearCostmapExceptRegion_Response response(::nav2_msgs::srv::ClearCostmapExceptRegion_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ClearCostmapExceptRegion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ClearCostmapExceptRegion_Response>()
{
  return nav2_msgs::srv::builder::Init_ClearCostmapExceptRegion_Response_response();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearCostmapExceptRegion_Event_response
{
public:
  explicit Init_ClearCostmapExceptRegion_Event_response(::nav2_msgs::srv::ClearCostmapExceptRegion_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::ClearCostmapExceptRegion_Event response(::nav2_msgs::srv::ClearCostmapExceptRegion_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ClearCostmapExceptRegion_Event msg_;
};

class Init_ClearCostmapExceptRegion_Event_request
{
public:
  explicit Init_ClearCostmapExceptRegion_Event_request(::nav2_msgs::srv::ClearCostmapExceptRegion_Event & msg)
  : msg_(msg)
  {}
  Init_ClearCostmapExceptRegion_Event_response request(::nav2_msgs::srv::ClearCostmapExceptRegion_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ClearCostmapExceptRegion_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::ClearCostmapExceptRegion_Event msg_;
};

class Init_ClearCostmapExceptRegion_Event_info
{
public:
  Init_ClearCostmapExceptRegion_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearCostmapExceptRegion_Event_request info(::nav2_msgs::srv::ClearCostmapExceptRegion_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ClearCostmapExceptRegion_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::ClearCostmapExceptRegion_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ClearCostmapExceptRegion_Event>()
{
  return nav2_msgs::srv::builder::Init_ClearCostmapExceptRegion_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_EXCEPT_REGION__BUILDER_HPP_
