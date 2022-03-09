add_library(log_lib STATIC
            log_lib/log.h log_lib/log.cpp)
set_target_properties(log_lib PROPERTIES POSITION_INDEPENDENT_CODE ON)
target_include_directories(log_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
add_subdirectory(pybind11)
