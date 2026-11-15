cmake_minimum_required(VERSION 3.22)
project(gedouble_sdk VERSION 0.1.0 LANGUAGES CXX)

add_library(gedouble-sdk INTERFACE)
add_library(Gedouble::SDK ALIAS gedouble-sdk)

target_include_directories(gedouble-sdk
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_compile_features(gedouble-sdk INTERFACE cxx_std_20)
