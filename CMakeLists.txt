cmake_minimum_required(VERSION 3.20)
project(cosampler VERSION 0.1)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_CXX_STANDARD 17)
configure_file(src/main/config.hpp.in config.hpp)
add_executable(cosampler src/main/main.cpp src/main/config.hpp.in)

target_include_directories(cosampler PUBLIC
        "${PROJECT_BINARY_DIR}"
        )
target_link_libraries(cosampler ${CONAN_LIBS})