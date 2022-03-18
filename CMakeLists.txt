cmake_minimum_required(VERSION 3.6)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Create project
project(heat-maps)

find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS})


add_executable(generate src/generate.cpp)
target_link_libraries(generate ${OpenCV_LIBS})
