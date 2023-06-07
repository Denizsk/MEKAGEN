// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice
#include "kalbot_interfaces/srv/detail/set_motor_speed__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kalbot_interfaces/srv/detail/set_motor_speed__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace kalbot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kalbot_interfaces
cdr_serialize(
  const kalbot_interfaces::srv::SetMotorSpeed_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_speed
  cdr << ros_message.left_speed;
  // Member: right_speed
  cdr << ros_message.right_speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kalbot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kalbot_interfaces::srv::SetMotorSpeed_Request & ros_message)
{
  // Member: left_speed
  cdr >> ros_message.left_speed;

  // Member: right_speed
  cdr >> ros_message.right_speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kalbot_interfaces
get_serialized_size(
  const kalbot_interfaces::srv::SetMotorSpeed_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_speed
  {
    size_t item_size = sizeof(ros_message.left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_speed
  {
    size_t item_size = sizeof(ros_message.right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kalbot_interfaces
max_serialized_size_SetMotorSpeed_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SetMotorSpeed_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kalbot_interfaces::srv::SetMotorSpeed_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetMotorSpeed_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kalbot_interfaces::srv::SetMotorSpeed_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetMotorSpeed_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kalbot_interfaces::srv::SetMotorSpeed_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetMotorSpeed_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetMotorSpeed_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetMotorSpeed_Request__callbacks = {
  "kalbot_interfaces::srv",
  "SetMotorSpeed_Request",
  _SetMotorSpeed_Request__cdr_serialize,
  _SetMotorSpeed_Request__cdr_deserialize,
  _SetMotorSpeed_Request__get_serialized_size,
  _SetMotorSpeed_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMotorSpeed_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMotorSpeed_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace kalbot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kalbot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<kalbot_interfaces::srv::SetMotorSpeed_Request>()
{
  return &kalbot_interfaces::srv::typesupport_fastrtps_cpp::_SetMotorSpeed_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kalbot_interfaces, srv, SetMotorSpeed_Request)() {
  return &kalbot_interfaces::srv::typesupport_fastrtps_cpp::_SetMotorSpeed_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace kalbot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kalbot_interfaces
cdr_serialize(
  const kalbot_interfaces::srv::SetMotorSpeed_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kalbot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kalbot_interfaces::srv::SetMotorSpeed_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kalbot_interfaces
get_serialized_size(
  const kalbot_interfaces::srv::SetMotorSpeed_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kalbot_interfaces
max_serialized_size_SetMotorSpeed_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SetMotorSpeed_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kalbot_interfaces::srv::SetMotorSpeed_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetMotorSpeed_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kalbot_interfaces::srv::SetMotorSpeed_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetMotorSpeed_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kalbot_interfaces::srv::SetMotorSpeed_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetMotorSpeed_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetMotorSpeed_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetMotorSpeed_Response__callbacks = {
  "kalbot_interfaces::srv",
  "SetMotorSpeed_Response",
  _SetMotorSpeed_Response__cdr_serialize,
  _SetMotorSpeed_Response__cdr_deserialize,
  _SetMotorSpeed_Response__get_serialized_size,
  _SetMotorSpeed_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMotorSpeed_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMotorSpeed_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace kalbot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kalbot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<kalbot_interfaces::srv::SetMotorSpeed_Response>()
{
  return &kalbot_interfaces::srv::typesupport_fastrtps_cpp::_SetMotorSpeed_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kalbot_interfaces, srv, SetMotorSpeed_Response)() {
  return &kalbot_interfaces::srv::typesupport_fastrtps_cpp::_SetMotorSpeed_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace kalbot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetMotorSpeed__callbacks = {
  "kalbot_interfaces::srv",
  "SetMotorSpeed",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kalbot_interfaces, srv, SetMotorSpeed_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kalbot_interfaces, srv, SetMotorSpeed_Response)(),
};

static rosidl_service_type_support_t _SetMotorSpeed__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMotorSpeed__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace kalbot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kalbot_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<kalbot_interfaces::srv::SetMotorSpeed>()
{
  return &kalbot_interfaces::srv::typesupport_fastrtps_cpp::_SetMotorSpeed__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kalbot_interfaces, srv, SetMotorSpeed)() {
  return &kalbot_interfaces::srv::typesupport_fastrtps_cpp::_SetMotorSpeed__handle;
}

#ifdef __cplusplus
}
#endif
