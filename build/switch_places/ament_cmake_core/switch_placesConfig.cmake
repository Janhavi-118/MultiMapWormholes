# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_switch_places_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED switch_places_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(switch_places_FOUND FALSE)
  elseif(NOT switch_places_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(switch_places_FOUND FALSE)
  endif()
  return()
endif()
set(_switch_places_CONFIG_INCLUDED TRUE)

# output package information
if(NOT switch_places_FIND_QUIETLY)
  message(STATUS "Found switch_places: 0.0.0 (${switch_places_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'switch_places' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${switch_places_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(switch_places_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${switch_places_DIR}/${_extra}")
endforeach()
