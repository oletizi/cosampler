cmake_minimum_required(VERSION 3.20)
project(osampler VERSION 0.1)

set(CMAKE_CXX_STANDARD 14)
configure_file(src/main/config.hpp.in config.hpp)
add_executable(osampler src/main/main.cpp src/main/config.hpp.in)

target_include_directories(osampler PUBLIC
        "${PROJECT_BINARY_DIR}"
        )
