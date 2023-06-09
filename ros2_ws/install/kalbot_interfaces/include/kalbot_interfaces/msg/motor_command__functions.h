// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kalbot_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__MSG__MOTOR_COMMAND__FUNCTIONS_H_
#define KALBOT_INTERFACES__MSG__MOTOR_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "kalbot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kalbot_interfaces/msg/motor_command__struct.h"

/// Initialize msg/MotorCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kalbot_interfaces__msg__MotorCommand
 * )) before or use
 * kalbot_interfaces__msg__MotorCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kalbot_interfaces
bool
kalbot_interfaces__msg__MotorCommand__init(kalbot_interfaces__msg__MotorCommand * msg);

/// Finalize msg/MotorCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalbot_interfaces
void
kalbot_interfaces__msg__MotorCommand__fini(kalbot_interfaces__msg__MotorCommand * msg);

/// Create msg/MotorCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kalbot_interfaces__msg__MotorCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kalbot_interfaces
kalbot_interfaces__msg__MotorCommand *
kalbot_interfaces__msg__MotorCommand__create();

/// Destroy msg/MotorCommand message.
/**
 * It calls
 * kalbot_interfaces__msg__MotorCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalbot_interfaces
void
kalbot_interfaces__msg__MotorCommand__destroy(kalbot_interfaces__msg__MotorCommand * msg);


/// Initialize array of msg/MotorCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kalbot_interfaces__msg__MotorCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalbot_interfaces
bool
kalbot_interfaces__msg__MotorCommand__Sequence__init(kalbot_interfaces__msg__MotorCommand__Sequence * array, size_t size);

/// Finalize array of msg/MotorCommand messages.
/**
 * It calls
 * kalbot_interfaces__msg__MotorCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalbot_interfaces
void
kalbot_interfaces__msg__MotorCommand__Sequence__fini(kalbot_interfaces__msg__MotorCommand__Sequence * array);

/// Create array of msg/MotorCommand messages.
/**
 * It allocates the memory for the array and calls
 * kalbot_interfaces__msg__MotorCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kalbot_interfaces
kalbot_interfaces__msg__MotorCommand__Sequence *
kalbot_interfaces__msg__MotorCommand__Sequence__create(size_t size);

/// Destroy array of msg/MotorCommand messages.
/**
 * It calls
 * kalbot_interfaces__msg__MotorCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalbot_interfaces
void
kalbot_interfaces__msg__MotorCommand__Sequence__destroy(kalbot_interfaces__msg__MotorCommand__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // KALBOT_INTERFACES__MSG__MOTOR_COMMAND__FUNCTIONS_H_
