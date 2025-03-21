// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/ClearEntireCostmap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/clear_entire_costmap.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__CLEAR_ENTIRE_COSTMAP__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__CLEAR_ENTIRE_COSTMAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/clear_entire_costmap__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearEntireCostmap_Request_request
{
public:
  Init_ClearEntireCostmap_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ClearEntireCostmap_Request request(::nav2_msgs::srv::ClearEntireCostmap_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ClearEntireCostmap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ClearEntireCostmap_Request>()
{
  return nav2_msgs::srv::builder::Init_ClearEntireCostmap_Request_request();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearEntireCostmap_Response_response
{
public:
  Init_ClearEntireCostmap_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ClearEntireCostmap_Response response(::nav2_msgs::srv::ClearEntireCostmap_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ClearEntireCostmap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ClearEntireCostmap_Response>()
{
  return nav2_msgs::srv::builder::Init_ClearEntireCostmap_Response_response();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearEntireCostmap_Event_response
{
public:
  explicit Init_ClearEntireCostmap_Event_response(::nav2_msgs::srv::ClearEntireCostmap_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::ClearEntireCostmap_Event response(::nav2_msgs::srv::ClearEntireCostmap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ClearEntireCostmap_Event msg_;
};

class Init_ClearEntireCostmap_Event_request
{
public:
  explicit Init_ClearEntireCostmap_Event_request(::nav2_msgs::srv::ClearEntireCostmap_Event & msg)
  : msg_(msg)
  {}
  Init_ClearEntireCostmap_Event_response request(::nav2_msgs::srv::ClearEntireCostmap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ClearEntireCostmap_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::ClearEntireCostmap_Event msg_;
};

class Init_ClearEntireCostmap_Event_info
{
public:
  Init_ClearEntireCostmap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearEntireCostmap_Event_request info(::nav2_msgs::srv::ClearEntireCostmap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ClearEntireCostmap_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::ClearEntireCostmap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ClearEntireCostmap_Event>()
{
  return nav2_msgs::srv::builder::Init_ClearEntireCostmap_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__CLEAR_ENTIRE_COSTMAP__BUILDER_HPP_
