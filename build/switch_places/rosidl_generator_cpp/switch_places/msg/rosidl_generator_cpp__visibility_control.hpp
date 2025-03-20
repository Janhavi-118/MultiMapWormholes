// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef SWITCH_PLACES__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define SWITCH_PLACES__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_switch_places __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_switch_places __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_switch_places __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_switch_places __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_switch_places
    #define ROSIDL_GENERATOR_CPP_PUBLIC_switch_places ROSIDL_GENERATOR_CPP_EXPORT_switch_places
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_switch_places ROSIDL_GENERATOR_CPP_IMPORT_switch_places
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_switch_places __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_switch_places
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_switch_places __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_switch_places
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // SWITCH_PLACES__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
