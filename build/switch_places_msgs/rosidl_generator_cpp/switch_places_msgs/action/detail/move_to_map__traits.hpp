// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from switch_places_msgs:action/MoveToMap.idl
// generated code does not contain a copyright notice

#ifndef SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__TRAITS_HPP_
#define SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "switch_places_msgs/action/detail/move_to_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace switch_places_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToMap_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToMap_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToMap_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace switch_places_msgs

namespace rosidl_generator_traits
{

[[deprecated("use switch_places_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const switch_places_msgs::action::MoveToMap_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  switch_places_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use switch_places_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const switch_places_msgs::action::MoveToMap_Goal & msg)
{
  return switch_places_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_Goal>()
{
  return "switch_places_msgs::action::MoveToMap_Goal";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_Goal>()
{
  return "switch_places_msgs/action/MoveToMap_Goal";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<switch_places_msgs::action::MoveToMap_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace switch_places_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToMap_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToMap_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToMap_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace switch_places_msgs

namespace rosidl_generator_traits
{

[[deprecated("use switch_places_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const switch_places_msgs::action::MoveToMap_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  switch_places_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use switch_places_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const switch_places_msgs::action::MoveToMap_Result & msg)
{
  return switch_places_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_Result>()
{
  return "switch_places_msgs::action::MoveToMap_Result";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_Result>()
{
  return "switch_places_msgs/action/MoveToMap_Result";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<switch_places_msgs::action::MoveToMap_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace switch_places_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToMap_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_x
  {
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << ", ";
  }

  // member: current_y
  {
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToMap_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << "\n";
  }

  // member: current_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToMap_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace switch_places_msgs

namespace rosidl_generator_traits
{

[[deprecated("use switch_places_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const switch_places_msgs::action::MoveToMap_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  switch_places_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use switch_places_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const switch_places_msgs::action::MoveToMap_Feedback & msg)
{
  return switch_places_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_Feedback>()
{
  return "switch_places_msgs::action::MoveToMap_Feedback";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_Feedback>()
{
  return "switch_places_msgs/action/MoveToMap_Feedback";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<switch_places_msgs::action::MoveToMap_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "switch_places_msgs/action/detail/move_to_map__traits.hpp"

namespace switch_places_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToMap_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToMap_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToMap_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace switch_places_msgs

namespace rosidl_generator_traits
{

[[deprecated("use switch_places_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const switch_places_msgs::action::MoveToMap_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  switch_places_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use switch_places_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const switch_places_msgs::action::MoveToMap_SendGoal_Request & msg)
{
  return switch_places_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_SendGoal_Request>()
{
  return "switch_places_msgs::action::MoveToMap_SendGoal_Request";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_SendGoal_Request>()
{
  return "switch_places_msgs/action/MoveToMap_SendGoal_Request";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<switch_places_msgs::action::MoveToMap_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<switch_places_msgs::action::MoveToMap_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<switch_places_msgs::action::MoveToMap_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace switch_places_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToMap_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToMap_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToMap_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace switch_places_msgs

namespace rosidl_generator_traits
{

[[deprecated("use switch_places_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const switch_places_msgs::action::MoveToMap_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  switch_places_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use switch_places_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const switch_places_msgs::action::MoveToMap_SendGoal_Response & msg)
{
  return switch_places_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_SendGoal_Response>()
{
  return "switch_places_msgs::action::MoveToMap_SendGoal_Response";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_SendGoal_Response>()
{
  return "switch_places_msgs/action/MoveToMap_SendGoal_Response";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<switch_places_msgs::action::MoveToMap_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_SendGoal>()
{
  return "switch_places_msgs::action::MoveToMap_SendGoal";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_SendGoal>()
{
  return "switch_places_msgs/action/MoveToMap_SendGoal";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<switch_places_msgs::action::MoveToMap_SendGoal_Request>::value &&
    has_fixed_size<switch_places_msgs::action::MoveToMap_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<switch_places_msgs::action::MoveToMap_SendGoal_Request>::value &&
    has_bounded_size<switch_places_msgs::action::MoveToMap_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<switch_places_msgs::action::MoveToMap_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<switch_places_msgs::action::MoveToMap_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<switch_places_msgs::action::MoveToMap_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace switch_places_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToMap_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToMap_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToMap_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace switch_places_msgs

namespace rosidl_generator_traits
{

[[deprecated("use switch_places_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const switch_places_msgs::action::MoveToMap_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  switch_places_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use switch_places_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const switch_places_msgs::action::MoveToMap_GetResult_Request & msg)
{
  return switch_places_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_GetResult_Request>()
{
  return "switch_places_msgs::action::MoveToMap_GetResult_Request";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_GetResult_Request>()
{
  return "switch_places_msgs/action/MoveToMap_GetResult_Request";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<switch_places_msgs::action::MoveToMap_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "switch_places_msgs/action/detail/move_to_map__traits.hpp"

namespace switch_places_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToMap_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToMap_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToMap_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace switch_places_msgs

namespace rosidl_generator_traits
{

[[deprecated("use switch_places_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const switch_places_msgs::action::MoveToMap_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  switch_places_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use switch_places_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const switch_places_msgs::action::MoveToMap_GetResult_Response & msg)
{
  return switch_places_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_GetResult_Response>()
{
  return "switch_places_msgs::action::MoveToMap_GetResult_Response";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_GetResult_Response>()
{
  return "switch_places_msgs/action/MoveToMap_GetResult_Response";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<switch_places_msgs::action::MoveToMap_Result>::value> {};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<switch_places_msgs::action::MoveToMap_Result>::value> {};

template<>
struct is_message<switch_places_msgs::action::MoveToMap_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_GetResult>()
{
  return "switch_places_msgs::action::MoveToMap_GetResult";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_GetResult>()
{
  return "switch_places_msgs/action/MoveToMap_GetResult";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<switch_places_msgs::action::MoveToMap_GetResult_Request>::value &&
    has_fixed_size<switch_places_msgs::action::MoveToMap_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<switch_places_msgs::action::MoveToMap_GetResult_Request>::value &&
    has_bounded_size<switch_places_msgs::action::MoveToMap_GetResult_Response>::value
  >
{
};

template<>
struct is_service<switch_places_msgs::action::MoveToMap_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<switch_places_msgs::action::MoveToMap_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<switch_places_msgs::action::MoveToMap_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "switch_places_msgs/action/detail/move_to_map__traits.hpp"

namespace switch_places_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToMap_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToMap_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToMap_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace switch_places_msgs

namespace rosidl_generator_traits
{

[[deprecated("use switch_places_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const switch_places_msgs::action::MoveToMap_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  switch_places_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use switch_places_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const switch_places_msgs::action::MoveToMap_FeedbackMessage & msg)
{
  return switch_places_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<switch_places_msgs::action::MoveToMap_FeedbackMessage>()
{
  return "switch_places_msgs::action::MoveToMap_FeedbackMessage";
}

template<>
inline const char * name<switch_places_msgs::action::MoveToMap_FeedbackMessage>()
{
  return "switch_places_msgs/action/MoveToMap_FeedbackMessage";
}

template<>
struct has_fixed_size<switch_places_msgs::action::MoveToMap_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<switch_places_msgs::action::MoveToMap_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<switch_places_msgs::action::MoveToMap_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<switch_places_msgs::action::MoveToMap_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<switch_places_msgs::action::MoveToMap_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<switch_places_msgs::action::MoveToMap>
  : std::true_type
{
};

template<>
struct is_action_goal<switch_places_msgs::action::MoveToMap_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<switch_places_msgs::action::MoveToMap_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<switch_places_msgs::action::MoveToMap_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__TRAITS_HPP_
