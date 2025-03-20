// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from switch_places:action/MoveToMap.idl
// generated code does not contain a copyright notice
#include "switch_places/action/detail/move_to_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
switch_places__action__MoveToMap_Goal__init(switch_places__action__MoveToMap_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    switch_places__action__MoveToMap_Goal__fini(msg);
    return false;
  }
  // x
  // y
  return true;
}

void
switch_places__action__MoveToMap_Goal__fini(switch_places__action__MoveToMap_Goal * msg)
{
  if (!msg) {
    return;
  }
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // x
  // y
}

bool
switch_places__action__MoveToMap_Goal__are_equal(const switch_places__action__MoveToMap_Goal * lhs, const switch_places__action__MoveToMap_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
switch_places__action__MoveToMap_Goal__copy(
  const switch_places__action__MoveToMap_Goal * input,
  switch_places__action__MoveToMap_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

switch_places__action__MoveToMap_Goal *
switch_places__action__MoveToMap_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Goal * msg = (switch_places__action__MoveToMap_Goal *)allocator.allocate(sizeof(switch_places__action__MoveToMap_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(switch_places__action__MoveToMap_Goal));
  bool success = switch_places__action__MoveToMap_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
switch_places__action__MoveToMap_Goal__destroy(switch_places__action__MoveToMap_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    switch_places__action__MoveToMap_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
switch_places__action__MoveToMap_Goal__Sequence__init(switch_places__action__MoveToMap_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Goal * data = NULL;

  if (size) {
    data = (switch_places__action__MoveToMap_Goal *)allocator.zero_allocate(size, sizeof(switch_places__action__MoveToMap_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = switch_places__action__MoveToMap_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        switch_places__action__MoveToMap_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
switch_places__action__MoveToMap_Goal__Sequence__fini(switch_places__action__MoveToMap_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      switch_places__action__MoveToMap_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

switch_places__action__MoveToMap_Goal__Sequence *
switch_places__action__MoveToMap_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Goal__Sequence * array = (switch_places__action__MoveToMap_Goal__Sequence *)allocator.allocate(sizeof(switch_places__action__MoveToMap_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = switch_places__action__MoveToMap_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
switch_places__action__MoveToMap_Goal__Sequence__destroy(switch_places__action__MoveToMap_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    switch_places__action__MoveToMap_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
switch_places__action__MoveToMap_Goal__Sequence__are_equal(const switch_places__action__MoveToMap_Goal__Sequence * lhs, const switch_places__action__MoveToMap_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!switch_places__action__MoveToMap_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
switch_places__action__MoveToMap_Goal__Sequence__copy(
  const switch_places__action__MoveToMap_Goal__Sequence * input,
  switch_places__action__MoveToMap_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(switch_places__action__MoveToMap_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    switch_places__action__MoveToMap_Goal * data =
      (switch_places__action__MoveToMap_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!switch_places__action__MoveToMap_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          switch_places__action__MoveToMap_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!switch_places__action__MoveToMap_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
switch_places__action__MoveToMap_Result__init(switch_places__action__MoveToMap_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    switch_places__action__MoveToMap_Result__fini(msg);
    return false;
  }
  return true;
}

void
switch_places__action__MoveToMap_Result__fini(switch_places__action__MoveToMap_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
switch_places__action__MoveToMap_Result__are_equal(const switch_places__action__MoveToMap_Result * lhs, const switch_places__action__MoveToMap_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
switch_places__action__MoveToMap_Result__copy(
  const switch_places__action__MoveToMap_Result * input,
  switch_places__action__MoveToMap_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

switch_places__action__MoveToMap_Result *
switch_places__action__MoveToMap_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Result * msg = (switch_places__action__MoveToMap_Result *)allocator.allocate(sizeof(switch_places__action__MoveToMap_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(switch_places__action__MoveToMap_Result));
  bool success = switch_places__action__MoveToMap_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
switch_places__action__MoveToMap_Result__destroy(switch_places__action__MoveToMap_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    switch_places__action__MoveToMap_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
switch_places__action__MoveToMap_Result__Sequence__init(switch_places__action__MoveToMap_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Result * data = NULL;

  if (size) {
    data = (switch_places__action__MoveToMap_Result *)allocator.zero_allocate(size, sizeof(switch_places__action__MoveToMap_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = switch_places__action__MoveToMap_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        switch_places__action__MoveToMap_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
switch_places__action__MoveToMap_Result__Sequence__fini(switch_places__action__MoveToMap_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      switch_places__action__MoveToMap_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

switch_places__action__MoveToMap_Result__Sequence *
switch_places__action__MoveToMap_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Result__Sequence * array = (switch_places__action__MoveToMap_Result__Sequence *)allocator.allocate(sizeof(switch_places__action__MoveToMap_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = switch_places__action__MoveToMap_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
switch_places__action__MoveToMap_Result__Sequence__destroy(switch_places__action__MoveToMap_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    switch_places__action__MoveToMap_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
switch_places__action__MoveToMap_Result__Sequence__are_equal(const switch_places__action__MoveToMap_Result__Sequence * lhs, const switch_places__action__MoveToMap_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!switch_places__action__MoveToMap_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
switch_places__action__MoveToMap_Result__Sequence__copy(
  const switch_places__action__MoveToMap_Result__Sequence * input,
  switch_places__action__MoveToMap_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(switch_places__action__MoveToMap_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    switch_places__action__MoveToMap_Result * data =
      (switch_places__action__MoveToMap_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!switch_places__action__MoveToMap_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          switch_places__action__MoveToMap_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!switch_places__action__MoveToMap_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
switch_places__action__MoveToMap_Feedback__init(switch_places__action__MoveToMap_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_x
  // current_y
  return true;
}

void
switch_places__action__MoveToMap_Feedback__fini(switch_places__action__MoveToMap_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_x
  // current_y
}

bool
switch_places__action__MoveToMap_Feedback__are_equal(const switch_places__action__MoveToMap_Feedback * lhs, const switch_places__action__MoveToMap_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_x
  if (lhs->current_x != rhs->current_x) {
    return false;
  }
  // current_y
  if (lhs->current_y != rhs->current_y) {
    return false;
  }
  return true;
}

bool
switch_places__action__MoveToMap_Feedback__copy(
  const switch_places__action__MoveToMap_Feedback * input,
  switch_places__action__MoveToMap_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_x
  output->current_x = input->current_x;
  // current_y
  output->current_y = input->current_y;
  return true;
}

switch_places__action__MoveToMap_Feedback *
switch_places__action__MoveToMap_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Feedback * msg = (switch_places__action__MoveToMap_Feedback *)allocator.allocate(sizeof(switch_places__action__MoveToMap_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(switch_places__action__MoveToMap_Feedback));
  bool success = switch_places__action__MoveToMap_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
switch_places__action__MoveToMap_Feedback__destroy(switch_places__action__MoveToMap_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    switch_places__action__MoveToMap_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
switch_places__action__MoveToMap_Feedback__Sequence__init(switch_places__action__MoveToMap_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Feedback * data = NULL;

  if (size) {
    data = (switch_places__action__MoveToMap_Feedback *)allocator.zero_allocate(size, sizeof(switch_places__action__MoveToMap_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = switch_places__action__MoveToMap_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        switch_places__action__MoveToMap_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
switch_places__action__MoveToMap_Feedback__Sequence__fini(switch_places__action__MoveToMap_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      switch_places__action__MoveToMap_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

switch_places__action__MoveToMap_Feedback__Sequence *
switch_places__action__MoveToMap_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_Feedback__Sequence * array = (switch_places__action__MoveToMap_Feedback__Sequence *)allocator.allocate(sizeof(switch_places__action__MoveToMap_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = switch_places__action__MoveToMap_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
switch_places__action__MoveToMap_Feedback__Sequence__destroy(switch_places__action__MoveToMap_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    switch_places__action__MoveToMap_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
switch_places__action__MoveToMap_Feedback__Sequence__are_equal(const switch_places__action__MoveToMap_Feedback__Sequence * lhs, const switch_places__action__MoveToMap_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!switch_places__action__MoveToMap_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
switch_places__action__MoveToMap_Feedback__Sequence__copy(
  const switch_places__action__MoveToMap_Feedback__Sequence * input,
  switch_places__action__MoveToMap_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(switch_places__action__MoveToMap_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    switch_places__action__MoveToMap_Feedback * data =
      (switch_places__action__MoveToMap_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!switch_places__action__MoveToMap_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          switch_places__action__MoveToMap_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!switch_places__action__MoveToMap_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "switch_places/action/detail/move_to_map__functions.h"

bool
switch_places__action__MoveToMap_SendGoal_Request__init(switch_places__action__MoveToMap_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    switch_places__action__MoveToMap_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!switch_places__action__MoveToMap_Goal__init(&msg->goal)) {
    switch_places__action__MoveToMap_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
switch_places__action__MoveToMap_SendGoal_Request__fini(switch_places__action__MoveToMap_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  switch_places__action__MoveToMap_Goal__fini(&msg->goal);
}

bool
switch_places__action__MoveToMap_SendGoal_Request__are_equal(const switch_places__action__MoveToMap_SendGoal_Request * lhs, const switch_places__action__MoveToMap_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!switch_places__action__MoveToMap_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
switch_places__action__MoveToMap_SendGoal_Request__copy(
  const switch_places__action__MoveToMap_SendGoal_Request * input,
  switch_places__action__MoveToMap_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!switch_places__action__MoveToMap_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

switch_places__action__MoveToMap_SendGoal_Request *
switch_places__action__MoveToMap_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_SendGoal_Request * msg = (switch_places__action__MoveToMap_SendGoal_Request *)allocator.allocate(sizeof(switch_places__action__MoveToMap_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(switch_places__action__MoveToMap_SendGoal_Request));
  bool success = switch_places__action__MoveToMap_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
switch_places__action__MoveToMap_SendGoal_Request__destroy(switch_places__action__MoveToMap_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    switch_places__action__MoveToMap_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
switch_places__action__MoveToMap_SendGoal_Request__Sequence__init(switch_places__action__MoveToMap_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_SendGoal_Request * data = NULL;

  if (size) {
    data = (switch_places__action__MoveToMap_SendGoal_Request *)allocator.zero_allocate(size, sizeof(switch_places__action__MoveToMap_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = switch_places__action__MoveToMap_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        switch_places__action__MoveToMap_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
switch_places__action__MoveToMap_SendGoal_Request__Sequence__fini(switch_places__action__MoveToMap_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      switch_places__action__MoveToMap_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

switch_places__action__MoveToMap_SendGoal_Request__Sequence *
switch_places__action__MoveToMap_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_SendGoal_Request__Sequence * array = (switch_places__action__MoveToMap_SendGoal_Request__Sequence *)allocator.allocate(sizeof(switch_places__action__MoveToMap_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = switch_places__action__MoveToMap_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
switch_places__action__MoveToMap_SendGoal_Request__Sequence__destroy(switch_places__action__MoveToMap_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    switch_places__action__MoveToMap_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
switch_places__action__MoveToMap_SendGoal_Request__Sequence__are_equal(const switch_places__action__MoveToMap_SendGoal_Request__Sequence * lhs, const switch_places__action__MoveToMap_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!switch_places__action__MoveToMap_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
switch_places__action__MoveToMap_SendGoal_Request__Sequence__copy(
  const switch_places__action__MoveToMap_SendGoal_Request__Sequence * input,
  switch_places__action__MoveToMap_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(switch_places__action__MoveToMap_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    switch_places__action__MoveToMap_SendGoal_Request * data =
      (switch_places__action__MoveToMap_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!switch_places__action__MoveToMap_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          switch_places__action__MoveToMap_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!switch_places__action__MoveToMap_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
switch_places__action__MoveToMap_SendGoal_Response__init(switch_places__action__MoveToMap_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    switch_places__action__MoveToMap_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
switch_places__action__MoveToMap_SendGoal_Response__fini(switch_places__action__MoveToMap_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
switch_places__action__MoveToMap_SendGoal_Response__are_equal(const switch_places__action__MoveToMap_SendGoal_Response * lhs, const switch_places__action__MoveToMap_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
switch_places__action__MoveToMap_SendGoal_Response__copy(
  const switch_places__action__MoveToMap_SendGoal_Response * input,
  switch_places__action__MoveToMap_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

switch_places__action__MoveToMap_SendGoal_Response *
switch_places__action__MoveToMap_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_SendGoal_Response * msg = (switch_places__action__MoveToMap_SendGoal_Response *)allocator.allocate(sizeof(switch_places__action__MoveToMap_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(switch_places__action__MoveToMap_SendGoal_Response));
  bool success = switch_places__action__MoveToMap_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
switch_places__action__MoveToMap_SendGoal_Response__destroy(switch_places__action__MoveToMap_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    switch_places__action__MoveToMap_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
switch_places__action__MoveToMap_SendGoal_Response__Sequence__init(switch_places__action__MoveToMap_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_SendGoal_Response * data = NULL;

  if (size) {
    data = (switch_places__action__MoveToMap_SendGoal_Response *)allocator.zero_allocate(size, sizeof(switch_places__action__MoveToMap_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = switch_places__action__MoveToMap_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        switch_places__action__MoveToMap_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
switch_places__action__MoveToMap_SendGoal_Response__Sequence__fini(switch_places__action__MoveToMap_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      switch_places__action__MoveToMap_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

switch_places__action__MoveToMap_SendGoal_Response__Sequence *
switch_places__action__MoveToMap_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_SendGoal_Response__Sequence * array = (switch_places__action__MoveToMap_SendGoal_Response__Sequence *)allocator.allocate(sizeof(switch_places__action__MoveToMap_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = switch_places__action__MoveToMap_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
switch_places__action__MoveToMap_SendGoal_Response__Sequence__destroy(switch_places__action__MoveToMap_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    switch_places__action__MoveToMap_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
switch_places__action__MoveToMap_SendGoal_Response__Sequence__are_equal(const switch_places__action__MoveToMap_SendGoal_Response__Sequence * lhs, const switch_places__action__MoveToMap_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!switch_places__action__MoveToMap_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
switch_places__action__MoveToMap_SendGoal_Response__Sequence__copy(
  const switch_places__action__MoveToMap_SendGoal_Response__Sequence * input,
  switch_places__action__MoveToMap_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(switch_places__action__MoveToMap_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    switch_places__action__MoveToMap_SendGoal_Response * data =
      (switch_places__action__MoveToMap_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!switch_places__action__MoveToMap_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          switch_places__action__MoveToMap_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!switch_places__action__MoveToMap_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
switch_places__action__MoveToMap_GetResult_Request__init(switch_places__action__MoveToMap_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    switch_places__action__MoveToMap_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
switch_places__action__MoveToMap_GetResult_Request__fini(switch_places__action__MoveToMap_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
switch_places__action__MoveToMap_GetResult_Request__are_equal(const switch_places__action__MoveToMap_GetResult_Request * lhs, const switch_places__action__MoveToMap_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
switch_places__action__MoveToMap_GetResult_Request__copy(
  const switch_places__action__MoveToMap_GetResult_Request * input,
  switch_places__action__MoveToMap_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

switch_places__action__MoveToMap_GetResult_Request *
switch_places__action__MoveToMap_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_GetResult_Request * msg = (switch_places__action__MoveToMap_GetResult_Request *)allocator.allocate(sizeof(switch_places__action__MoveToMap_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(switch_places__action__MoveToMap_GetResult_Request));
  bool success = switch_places__action__MoveToMap_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
switch_places__action__MoveToMap_GetResult_Request__destroy(switch_places__action__MoveToMap_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    switch_places__action__MoveToMap_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
switch_places__action__MoveToMap_GetResult_Request__Sequence__init(switch_places__action__MoveToMap_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_GetResult_Request * data = NULL;

  if (size) {
    data = (switch_places__action__MoveToMap_GetResult_Request *)allocator.zero_allocate(size, sizeof(switch_places__action__MoveToMap_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = switch_places__action__MoveToMap_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        switch_places__action__MoveToMap_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
switch_places__action__MoveToMap_GetResult_Request__Sequence__fini(switch_places__action__MoveToMap_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      switch_places__action__MoveToMap_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

switch_places__action__MoveToMap_GetResult_Request__Sequence *
switch_places__action__MoveToMap_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_GetResult_Request__Sequence * array = (switch_places__action__MoveToMap_GetResult_Request__Sequence *)allocator.allocate(sizeof(switch_places__action__MoveToMap_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = switch_places__action__MoveToMap_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
switch_places__action__MoveToMap_GetResult_Request__Sequence__destroy(switch_places__action__MoveToMap_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    switch_places__action__MoveToMap_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
switch_places__action__MoveToMap_GetResult_Request__Sequence__are_equal(const switch_places__action__MoveToMap_GetResult_Request__Sequence * lhs, const switch_places__action__MoveToMap_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!switch_places__action__MoveToMap_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
switch_places__action__MoveToMap_GetResult_Request__Sequence__copy(
  const switch_places__action__MoveToMap_GetResult_Request__Sequence * input,
  switch_places__action__MoveToMap_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(switch_places__action__MoveToMap_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    switch_places__action__MoveToMap_GetResult_Request * data =
      (switch_places__action__MoveToMap_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!switch_places__action__MoveToMap_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          switch_places__action__MoveToMap_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!switch_places__action__MoveToMap_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "switch_places/action/detail/move_to_map__functions.h"

bool
switch_places__action__MoveToMap_GetResult_Response__init(switch_places__action__MoveToMap_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!switch_places__action__MoveToMap_Result__init(&msg->result)) {
    switch_places__action__MoveToMap_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
switch_places__action__MoveToMap_GetResult_Response__fini(switch_places__action__MoveToMap_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  switch_places__action__MoveToMap_Result__fini(&msg->result);
}

bool
switch_places__action__MoveToMap_GetResult_Response__are_equal(const switch_places__action__MoveToMap_GetResult_Response * lhs, const switch_places__action__MoveToMap_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!switch_places__action__MoveToMap_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
switch_places__action__MoveToMap_GetResult_Response__copy(
  const switch_places__action__MoveToMap_GetResult_Response * input,
  switch_places__action__MoveToMap_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!switch_places__action__MoveToMap_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

switch_places__action__MoveToMap_GetResult_Response *
switch_places__action__MoveToMap_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_GetResult_Response * msg = (switch_places__action__MoveToMap_GetResult_Response *)allocator.allocate(sizeof(switch_places__action__MoveToMap_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(switch_places__action__MoveToMap_GetResult_Response));
  bool success = switch_places__action__MoveToMap_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
switch_places__action__MoveToMap_GetResult_Response__destroy(switch_places__action__MoveToMap_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    switch_places__action__MoveToMap_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
switch_places__action__MoveToMap_GetResult_Response__Sequence__init(switch_places__action__MoveToMap_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_GetResult_Response * data = NULL;

  if (size) {
    data = (switch_places__action__MoveToMap_GetResult_Response *)allocator.zero_allocate(size, sizeof(switch_places__action__MoveToMap_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = switch_places__action__MoveToMap_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        switch_places__action__MoveToMap_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
switch_places__action__MoveToMap_GetResult_Response__Sequence__fini(switch_places__action__MoveToMap_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      switch_places__action__MoveToMap_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

switch_places__action__MoveToMap_GetResult_Response__Sequence *
switch_places__action__MoveToMap_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_GetResult_Response__Sequence * array = (switch_places__action__MoveToMap_GetResult_Response__Sequence *)allocator.allocate(sizeof(switch_places__action__MoveToMap_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = switch_places__action__MoveToMap_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
switch_places__action__MoveToMap_GetResult_Response__Sequence__destroy(switch_places__action__MoveToMap_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    switch_places__action__MoveToMap_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
switch_places__action__MoveToMap_GetResult_Response__Sequence__are_equal(const switch_places__action__MoveToMap_GetResult_Response__Sequence * lhs, const switch_places__action__MoveToMap_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!switch_places__action__MoveToMap_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
switch_places__action__MoveToMap_GetResult_Response__Sequence__copy(
  const switch_places__action__MoveToMap_GetResult_Response__Sequence * input,
  switch_places__action__MoveToMap_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(switch_places__action__MoveToMap_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    switch_places__action__MoveToMap_GetResult_Response * data =
      (switch_places__action__MoveToMap_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!switch_places__action__MoveToMap_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          switch_places__action__MoveToMap_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!switch_places__action__MoveToMap_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "switch_places/action/detail/move_to_map__functions.h"

bool
switch_places__action__MoveToMap_FeedbackMessage__init(switch_places__action__MoveToMap_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    switch_places__action__MoveToMap_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!switch_places__action__MoveToMap_Feedback__init(&msg->feedback)) {
    switch_places__action__MoveToMap_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
switch_places__action__MoveToMap_FeedbackMessage__fini(switch_places__action__MoveToMap_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  switch_places__action__MoveToMap_Feedback__fini(&msg->feedback);
}

bool
switch_places__action__MoveToMap_FeedbackMessage__are_equal(const switch_places__action__MoveToMap_FeedbackMessage * lhs, const switch_places__action__MoveToMap_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!switch_places__action__MoveToMap_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
switch_places__action__MoveToMap_FeedbackMessage__copy(
  const switch_places__action__MoveToMap_FeedbackMessage * input,
  switch_places__action__MoveToMap_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!switch_places__action__MoveToMap_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

switch_places__action__MoveToMap_FeedbackMessage *
switch_places__action__MoveToMap_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_FeedbackMessage * msg = (switch_places__action__MoveToMap_FeedbackMessage *)allocator.allocate(sizeof(switch_places__action__MoveToMap_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(switch_places__action__MoveToMap_FeedbackMessage));
  bool success = switch_places__action__MoveToMap_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
switch_places__action__MoveToMap_FeedbackMessage__destroy(switch_places__action__MoveToMap_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    switch_places__action__MoveToMap_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
switch_places__action__MoveToMap_FeedbackMessage__Sequence__init(switch_places__action__MoveToMap_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_FeedbackMessage * data = NULL;

  if (size) {
    data = (switch_places__action__MoveToMap_FeedbackMessage *)allocator.zero_allocate(size, sizeof(switch_places__action__MoveToMap_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = switch_places__action__MoveToMap_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        switch_places__action__MoveToMap_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
switch_places__action__MoveToMap_FeedbackMessage__Sequence__fini(switch_places__action__MoveToMap_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      switch_places__action__MoveToMap_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

switch_places__action__MoveToMap_FeedbackMessage__Sequence *
switch_places__action__MoveToMap_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  switch_places__action__MoveToMap_FeedbackMessage__Sequence * array = (switch_places__action__MoveToMap_FeedbackMessage__Sequence *)allocator.allocate(sizeof(switch_places__action__MoveToMap_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = switch_places__action__MoveToMap_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
switch_places__action__MoveToMap_FeedbackMessage__Sequence__destroy(switch_places__action__MoveToMap_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    switch_places__action__MoveToMap_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
switch_places__action__MoveToMap_FeedbackMessage__Sequence__are_equal(const switch_places__action__MoveToMap_FeedbackMessage__Sequence * lhs, const switch_places__action__MoveToMap_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!switch_places__action__MoveToMap_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
switch_places__action__MoveToMap_FeedbackMessage__Sequence__copy(
  const switch_places__action__MoveToMap_FeedbackMessage__Sequence * input,
  switch_places__action__MoveToMap_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(switch_places__action__MoveToMap_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    switch_places__action__MoveToMap_FeedbackMessage * data =
      (switch_places__action__MoveToMap_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!switch_places__action__MoveToMap_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          switch_places__action__MoveToMap_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!switch_places__action__MoveToMap_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
