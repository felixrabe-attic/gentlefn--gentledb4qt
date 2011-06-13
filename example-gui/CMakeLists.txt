# Project parameters

cmake_minimum_required(VERSION 2.8)
project(example-gui)


# Dependencies

find_package(Qt4 4.7 REQUIRED)
include(${QT_USE_FILE})

find_package(GentleDB4Qt REQUIRED)
include_directories(${GentleDB4Qt_INCLUDE_DIRS})


# Sources

set(example_srcs example.cpp)
set(example_moc_headers example.h)


# Build

qt4_wrap_cpp(example_moc_output ${example_moc_headers})
include_directories(${CMAKE_BINARY_DIR})

add_executable(example-gui ${example_srcs} ${example_moc_output})
target_link_libraries(example-gui ${QT_LIBRARIES} ${GentleDB4Qt_LIBRARIES})


# Installation

install(TARGETS example-gui DESTINATION bin)
