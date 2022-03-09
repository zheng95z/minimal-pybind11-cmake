cmake_minimum_required(VERSION 3.11)
set(CMAKE_CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED ON)

project(minimal-pybind11-cmake VERSION 1.0
                               DESCRIPTION "Build pybind-11 projects using CMake from here."
                               LANGUAGES C CXX)

if (PROJECT_BINARY_DIR STREQUAL PROJECT_SOURCE_DIR)
    message(WARNING "The binray directory cannot be the same as source directory!")
endif()

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message("Setting build type to 'Release' as none was specified.")
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
    # Set the possible values of build type for cmake-gui
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
        "MinSizeRel" "RelWithDebInfo")
endif()

find_package(pybind11 CONFIG REQUIRED)

add_subdirectory(ext)

pybind11_add_module(example src/main.cpp)

target_link_libraries(example PRIVATE log_lib)

set(CMAKE_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}" CACHE STRING "The path to use for make install" FORCE)

install (TARGETS example
    LIBRARY DESTINATION ./)
