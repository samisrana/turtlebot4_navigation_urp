// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav2_msgs/srv/load_map.hpp"


#ifndef NAV2_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/load_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Request_map_url
{
public:
  Init_LoadMap_Request_map_url()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::LoadMap_Request map_url(::nav2_msgs::srv::LoadMap_Request::_map_url_type arg)
  {
    msg_.map_url = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::LoadMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::LoadMap_Request>()
{
  return nav2_msgs::srv::builder::Init_LoadMap_Request_map_url();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Response_result
{
public:
  explicit Init_LoadMap_Response_result(::nav2_msgs::srv::LoadMap_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::LoadMap_Response result(::nav2_msgs::srv::LoadMap_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::LoadMap_Response msg_;
};

class Init_LoadMap_Response_map
{
public:
  Init_LoadMap_Response_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMap_Response_result map(::nav2_msgs::srv::LoadMap_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_LoadMap_Response_result(msg_);
  }

private:
  ::nav2_msgs::srv::LoadMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::LoadMap_Response>()
{
  return nav2_msgs::srv::builder::Init_LoadMap_Response_map();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Event_response
{
public:
  explicit Init_LoadMap_Event_response(::nav2_msgs::srv::LoadMap_Event & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::LoadMap_Event response(::nav2_msgs::srv::LoadMap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::LoadMap_Event msg_;
};

class Init_LoadMap_Event_request
{
public:
  explicit Init_LoadMap_Event_request(::nav2_msgs::srv::LoadMap_Event & msg)
  : msg_(msg)
  {}
  Init_LoadMap_Event_response request(::nav2_msgs::srv::LoadMap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LoadMap_Event_response(msg_);
  }

private:
  ::nav2_msgs::srv::LoadMap_Event msg_;
};

class Init_LoadMap_Event_info
{
public:
  Init_LoadMap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMap_Event_request info(::nav2_msgs::srv::LoadMap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LoadMap_Event_request(msg_);
  }

private:
  ::nav2_msgs::srv::LoadMap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::LoadMap_Event>()
{
  return nav2_msgs::srv::builder::Init_LoadMap_Event_info();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
