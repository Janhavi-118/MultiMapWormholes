// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from switch_places_msgs:action/MoveToMap.idl
// generated code does not contain a copyright notice

#ifndef SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__STRUCT_H_
#define SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveToMap in the package switch_places_msgs.
typedef struct switch_places_msgs__action__MoveToMap_Goal
{
  /// Target map name
  rosidl_runtime_c__String map_name;
  /// Target x-coordinate
  double x;
  /// Target y-coordinate
  double y;
} switch_places_msgs__action__MoveToMap_Goal;

// Struct for a sequence of switch_places_msgs__action__MoveToMap_Goal.
typedef struct switch_places_msgs__action__MoveToMap_Goal__Sequence
{
  switch_places_msgs__action__MoveToMap_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} switch_places_msgs__action__MoveToMap_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveToMap in the package switch_places_msgs.
typedef struct switch_places_msgs__action__MoveToMap_Result
{
  /// Whether the robot reached the target or not
  bool success;
  /// Additional message
  rosidl_runtime_c__String message;
} switch_places_msgs__action__MoveToMap_Result;

// Struct for a sequence of switch_places_msgs__action__MoveToMap_Result.
typedef struct switch_places_msgs__action__MoveToMap_Result__Sequence
{
  switch_places_msgs__action__MoveToMap_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} switch_places_msgs__action__MoveToMap_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveToMap in the package switch_places_msgs.
typedef struct switch_places_msgs__action__MoveToMap_Feedback
{
  /// Current x-coordinate
  double current_x;
  /// Current y-coordinate
  double current_y;
} switch_places_msgs__action__MoveToMap_Feedback;

// Struct for a sequence of switch_places_msgs__action__MoveToMap_Feedback.
typedef struct switch_places_msgs__action__MoveToMap_Feedback__Sequence
{
  switch_places_msgs__action__MoveToMap_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} switch_places_msgs__action__MoveToMap_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "switch_places_msgs/action/detail/move_to_map__struct.h"

/// Struct defined in action/MoveToMap in the package switch_places_msgs.
typedef struct switch_places_msgs__action__MoveToMap_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  switch_places_msgs__action__MoveToMap_Goal goal;
} switch_places_msgs__action__MoveToMap_SendGoal_Request;

// Struct for a sequence of switch_places_msgs__action__MoveToMap_SendGoal_Request.
typedef struct switch_places_msgs__action__MoveToMap_SendGoal_Request__Sequence
{
  switch_places_msgs__action__MoveToMap_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} switch_places_msgs__action__MoveToMap_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveToMap in the package switch_places_msgs.
typedef struct switch_places_msgs__action__MoveToMap_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} switch_places_msgs__action__MoveToMap_SendGoal_Response;

// Struct for a sequence of switch_places_msgs__action__MoveToMap_SendGoal_Response.
typedef struct switch_places_msgs__action__MoveToMap_SendGoal_Response__Sequence
{
  switch_places_msgs__action__MoveToMap_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} switch_places_msgs__action__MoveToMap_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveToMap in the package switch_places_msgs.
typedef struct switch_places_msgs__action__MoveToMap_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} switch_places_msgs__action__MoveToMap_GetResult_Request;

// Struct for a sequence of switch_places_msgs__action__MoveToMap_GetResult_Request.
typedef struct switch_places_msgs__action__MoveToMap_GetResult_Request__Sequence
{
  switch_places_msgs__action__MoveToMap_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} switch_places_msgs__action__MoveToMap_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "switch_places_msgs/action/detail/move_to_map__struct.h"

/// Struct defined in action/MoveToMap in the package switch_places_msgs.
typedef struct switch_places_msgs__action__MoveToMap_GetResult_Response
{
  int8_t status;
  switch_places_msgs__action__MoveToMap_Result result;
} switch_places_msgs__action__MoveToMap_GetResult_Response;

// Struct for a sequence of switch_places_msgs__action__MoveToMap_GetResult_Response.
typedef struct switch_places_msgs__action__MoveToMap_GetResult_Response__Sequence
{
  switch_places_msgs__action__MoveToMap_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} switch_places_msgs__action__MoveToMap_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "switch_places_msgs/action/detail/move_to_map__struct.h"

/// Struct defined in action/MoveToMap in the package switch_places_msgs.
typedef struct switch_places_msgs__action__MoveToMap_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  switch_places_msgs__action__MoveToMap_Feedback feedback;
} switch_places_msgs__action__MoveToMap_FeedbackMessage;

// Struct for a sequence of switch_places_msgs__action__MoveToMap_FeedbackMessage.
typedef struct switch_places_msgs__action__MoveToMap_FeedbackMessage__Sequence
{
  switch_places_msgs__action__MoveToMap_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} switch_places_msgs__action__MoveToMap_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWITCH_PLACES_MSGS__ACTION__DETAIL__MOVE_TO_MAP__STRUCT_H_
