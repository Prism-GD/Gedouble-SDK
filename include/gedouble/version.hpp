#pragma once

#define GEDOUBLE_SDK_VERSION_MAJOR 0
#define GEDOUBLE_SDK_VERSION_MINOR 1
#define GEDOUBLE_SDK_VERSION_PATCH 0
#define GEDOUBLE_SDK_VERSION_STRING "0.1.0-dev"

namespace gedouble::sdk {

inline constexpr unsigned int api_version_major = GEDOUBLE_SDK_VERSION_MAJOR;
inline constexpr unsigned int api_version_minor = GEDOUBLE_SDK_VERSION_MINOR;
inline constexpr unsigned int api_version_patch = GEDOUBLE_SDK_VERSION_PATCH;

} // namespace gedouble::sdk
