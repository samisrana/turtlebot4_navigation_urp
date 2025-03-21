// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dwb_msgs:srv/GetCriticScore.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dwb_msgs/srv/get_critic_score.hpp"


#ifndef DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__STRUCT_HPP_
#define DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__struct.hpp"
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.hpp"
// Member 'global_plan'
#include "nav_2d_msgs/msg/detail/path2_d__struct.hpp"
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__srv__GetCriticScore_Request __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__srv__GetCriticScore_Request __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCriticScore_Request_
{
  using Type = GetCriticScore_Request_<ContainerAllocator>;

  explicit GetCriticScore_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    velocity(_init),
    global_plan(_init),
    traj(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->critic_name = "";
    }
  }

  explicit GetCriticScore_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    velocity(_alloc, _init),
    global_plan(_alloc, _init),
    traj(_alloc, _init),
    critic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->critic_name = "";
    }
  }

  // field types and members
  using _pose_type =
    nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    nav_2d_msgs::msg::Twist2D_<ContainerAllocator>;
  _velocity_type velocity;
  using _global_plan_type =
    nav_2d_msgs::msg::Path2D_<ContainerAllocator>;
  _global_plan_type global_plan;
  using _traj_type =
    dwb_msgs::msg::Trajectory2D_<ContainerAllocator>;
  _traj_type traj;
  using _critic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _critic_name_type critic_name;

  // setters for named parameter idiom
  Type & set__pose(
    const nav_2d_msgs::msg::Pose2DStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const nav_2d_msgs::msg::Twist2D_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__global_plan(
    const nav_2d_msgs::msg::Path2D_<ContainerAllocator> & _arg)
  {
    this->global_plan = _arg;
    return *this;
  }
  Type & set__traj(
    const dwb_msgs::msg::Trajectory2D_<ContainerAllocator> & _arg)
  {
    this->traj = _arg;
    return *this;
  }
  Type & set__critic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->critic_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__srv__GetCriticScore_Request
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__srv__GetCriticScore_Request
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCriticScore_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->global_plan != other.global_plan) {
      return false;
    }
    if (this->traj != other.traj) {
      return false;
    }
    if (this->critic_name != other.critic_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCriticScore_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCriticScore_Request_

// alias to use template instance with default allocator
using GetCriticScore_Request =
  dwb_msgs::srv::GetCriticScore_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dwb_msgs


// Include directives for member types
// Member 'score'
#include "dwb_msgs/msg/detail/critic_score__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__srv__GetCriticScore_Response __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__srv__GetCriticScore_Response __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCriticScore_Response_
{
  using Type = GetCriticScore_Response_<ContainerAllocator>;

  explicit GetCriticScore_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : score(_init)
  {
    (void)_init;
  }

  explicit GetCriticScore_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : score(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _score_type =
    dwb_msgs::msg::CriticScore_<ContainerAllocator>;
  _score_type score;

  // setters for named parameter idiom
  Type & set__score(
    const dwb_msgs::msg::CriticScore_<ContainerAllocator> & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__srv__GetCriticScore_Response
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__srv__GetCriticScore_Response
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCriticScore_Response_ & other) const
  {
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCriticScore_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCriticScore_Response_

// alias to use template instance with default allocator
using GetCriticScore_Response =
  dwb_msgs::srv::GetCriticScore_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dwb_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__srv__GetCriticScore_Event __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__srv__GetCriticScore_Event __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCriticScore_Event_
{
  using Type = GetCriticScore_Event_<ContainerAllocator>;

  explicit GetCriticScore_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetCriticScore_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dwb_msgs::srv::GetCriticScore_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dwb_msgs::srv::GetCriticScore_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__srv__GetCriticScore_Event
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__srv__GetCriticScore_Event
    std::shared_ptr<dwb_msgs::srv::GetCriticScore_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCriticScore_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCriticScore_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCriticScore_Event_

// alias to use template instance with default allocator
using GetCriticScore_Event =
  dwb_msgs::srv::GetCriticScore_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dwb_msgs

namespace dwb_msgs
{

namespace srv
{

struct GetCriticScore
{
  using Request = dwb_msgs::srv::GetCriticScore_Request;
  using Response = dwb_msgs::srv::GetCriticScore_Response;
  using Event = dwb_msgs::srv::GetCriticScore_Event;
};

}  // namespace srv

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__STRUCT_HPP_
