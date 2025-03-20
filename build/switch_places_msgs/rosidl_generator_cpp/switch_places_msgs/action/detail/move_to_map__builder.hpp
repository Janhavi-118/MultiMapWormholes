// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from switch_places_msgs:action/MoveToMap.idl
// generated code does not contain a copyright notice

#ifndef SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__BUILDER_HPP_
#define SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "switch_places_msgs/action/detail/move_to_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace switch_places_msgs
{

namespace action
{

namespace builder
{

class Init_MoveToMap_Goal_y
{
public:
  explicit Init_MoveToMap_Goal_y(::switch_places_msgs::action::MoveToMap_Goal & msg)
  : msg_(msg)
  {}
  ::switch_places_msgs::action::MoveToMap_Goal y(::switch_places_msgs::action::MoveToMap_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_Goal msg_;
};

class Init_MoveToMap_Goal_x
{
public:
  explicit Init_MoveToMap_Goal_x(::switch_places_msgs::action::MoveToMap_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveToMap_Goal_y x(::switch_places_msgs::action::MoveToMap_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveToMap_Goal_y(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_Goal msg_;
};

class Init_MoveToMap_Goal_map_name
{
public:
  Init_MoveToMap_Goal_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToMap_Goal_x map_name(::switch_places_msgs::action::MoveToMap_Goal::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_MoveToMap_Goal_x(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::switch_places_msgs::action::MoveToMap_Goal>()
{
  return switch_places_msgs::action::builder::Init_MoveToMap_Goal_map_name();
}

}  // namespace switch_places_msgs


namespace switch_places_msgs
{

namespace action
{

namespace builder
{

class Init_MoveToMap_Result_message
{
public:
  explicit Init_MoveToMap_Result_message(::switch_places_msgs::action::MoveToMap_Result & msg)
  : msg_(msg)
  {}
  ::switch_places_msgs::action::MoveToMap_Result message(::switch_places_msgs::action::MoveToMap_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_Result msg_;
};

class Init_MoveToMap_Result_success
{
public:
  Init_MoveToMap_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToMap_Result_message success(::switch_places_msgs::action::MoveToMap_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveToMap_Result_message(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::switch_places_msgs::action::MoveToMap_Result>()
{
  return switch_places_msgs::action::builder::Init_MoveToMap_Result_success();
}

}  // namespace switch_places_msgs


namespace switch_places_msgs
{

namespace action
{

namespace builder
{

class Init_MoveToMap_Feedback_current_y
{
public:
  explicit Init_MoveToMap_Feedback_current_y(::switch_places_msgs::action::MoveToMap_Feedback & msg)
  : msg_(msg)
  {}
  ::switch_places_msgs::action::MoveToMap_Feedback current_y(::switch_places_msgs::action::MoveToMap_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_Feedback msg_;
};

class Init_MoveToMap_Feedback_current_x
{
public:
  Init_MoveToMap_Feedback_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToMap_Feedback_current_y current_x(::switch_places_msgs::action::MoveToMap_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_MoveToMap_Feedback_current_y(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::switch_places_msgs::action::MoveToMap_Feedback>()
{
  return switch_places_msgs::action::builder::Init_MoveToMap_Feedback_current_x();
}

}  // namespace switch_places_msgs


namespace switch_places_msgs
{

namespace action
{

namespace builder
{

class Init_MoveToMap_SendGoal_Request_goal
{
public:
  explicit Init_MoveToMap_SendGoal_Request_goal(::switch_places_msgs::action::MoveToMap_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::switch_places_msgs::action::MoveToMap_SendGoal_Request goal(::switch_places_msgs::action::MoveToMap_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_SendGoal_Request msg_;
};

class Init_MoveToMap_SendGoal_Request_goal_id
{
public:
  Init_MoveToMap_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToMap_SendGoal_Request_goal goal_id(::switch_places_msgs::action::MoveToMap_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveToMap_SendGoal_Request_goal(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::switch_places_msgs::action::MoveToMap_SendGoal_Request>()
{
  return switch_places_msgs::action::builder::Init_MoveToMap_SendGoal_Request_goal_id();
}

}  // namespace switch_places_msgs


namespace switch_places_msgs
{

namespace action
{

namespace builder
{

class Init_MoveToMap_SendGoal_Response_stamp
{
public:
  explicit Init_MoveToMap_SendGoal_Response_stamp(::switch_places_msgs::action::MoveToMap_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::switch_places_msgs::action::MoveToMap_SendGoal_Response stamp(::switch_places_msgs::action::MoveToMap_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_SendGoal_Response msg_;
};

class Init_MoveToMap_SendGoal_Response_accepted
{
public:
  Init_MoveToMap_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToMap_SendGoal_Response_stamp accepted(::switch_places_msgs::action::MoveToMap_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveToMap_SendGoal_Response_stamp(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::switch_places_msgs::action::MoveToMap_SendGoal_Response>()
{
  return switch_places_msgs::action::builder::Init_MoveToMap_SendGoal_Response_accepted();
}

}  // namespace switch_places_msgs


namespace switch_places_msgs
{

namespace action
{

namespace builder
{

class Init_MoveToMap_GetResult_Request_goal_id
{
public:
  Init_MoveToMap_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::switch_places_msgs::action::MoveToMap_GetResult_Request goal_id(::switch_places_msgs::action::MoveToMap_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::switch_places_msgs::action::MoveToMap_GetResult_Request>()
{
  return switch_places_msgs::action::builder::Init_MoveToMap_GetResult_Request_goal_id();
}

}  // namespace switch_places_msgs


namespace switch_places_msgs
{

namespace action
{

namespace builder
{

class Init_MoveToMap_GetResult_Response_result
{
public:
  explicit Init_MoveToMap_GetResult_Response_result(::switch_places_msgs::action::MoveToMap_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::switch_places_msgs::action::MoveToMap_GetResult_Response result(::switch_places_msgs::action::MoveToMap_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_GetResult_Response msg_;
};

class Init_MoveToMap_GetResult_Response_status
{
public:
  Init_MoveToMap_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToMap_GetResult_Response_result status(::switch_places_msgs::action::MoveToMap_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveToMap_GetResult_Response_result(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::switch_places_msgs::action::MoveToMap_GetResult_Response>()
{
  return switch_places_msgs::action::builder::Init_MoveToMap_GetResult_Response_status();
}

}  // namespace switch_places_msgs


namespace switch_places_msgs
{

namespace action
{

namespace builder
{

class Init_MoveToMap_FeedbackMessage_feedback
{
public:
  explicit Init_MoveToMap_FeedbackMessage_feedback(::switch_places_msgs::action::MoveToMap_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::switch_places_msgs::action::MoveToMap_FeedbackMessage feedback(::switch_places_msgs::action::MoveToMap_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_FeedbackMessage msg_;
};

class Init_MoveToMap_FeedbackMessage_goal_id
{
public:
  Init_MoveToMap_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToMap_FeedbackMessage_feedback goal_id(::switch_places_msgs::action::MoveToMap_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveToMap_FeedbackMessage_feedback(msg_);
  }

private:
  ::switch_places_msgs::action::MoveToMap_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::switch_places_msgs::action::MoveToMap_FeedbackMessage>()
{
  return switch_places_msgs::action::builder::Init_MoveToMap_FeedbackMessage_goal_id();
}

}  // namespace switch_places_msgs

#endif  // SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__BUILDER_HPP_
