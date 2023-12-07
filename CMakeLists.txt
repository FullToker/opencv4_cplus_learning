cmake_minimum_required(VERSION 3.26)
project(opencv_chp1)

set(CMAKE_CXX_STANDARD 11)
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
set(CMAKE_CXX_STANDARD 11)

add_executable(opencv_chp1 main.cpp)
target_link_libraries(opencv_chp1 ${OpenCV_LIBS})
