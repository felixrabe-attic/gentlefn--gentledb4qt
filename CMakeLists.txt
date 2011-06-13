# Project parameters

cmake_minimum_required(VERSION 2.8)
project(GentleDB4Qt)

set(GentleDB4Qt_major_version "1")
set(GentleDB4Qt_minor_version "0")
set(GentleDB4Qt_patch_version "0")

option(BUILD_SHARED_LIBS "Set to OFF to build static libraries" ON)


# Dependencies

find_package(Qt4 4.7.0 COMPONENTS QtCore REQUIRED)
include(${QT_USE_FILE})

find_package(OpenSSL 0.9.8 REQUIRED)
include_directories(OPENSSL_INCLUDE_DIR)


# Sources

set(GentleDB4Qt_includedir "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(GentleDB4Qt_public_headers
    ${GentleDB4Qt_includedir}/GentleDB4Qt/GentleDB4Qt
    ${GentleDB4Qt_includedir}/GentleDB4Qt/gentledb4qt.h
    ${GentleDB4Qt_includedir}/GentleDB4Qt/gentledb4qt_libexport.h
)


# Build

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_INCLUDE_DIRECTORIES_PROJECT_BEFORE ON)

include_directories(include/GentleDB4Qt)


# Installation

install(FILES ${GentleDB4Qt_public_headers} DESTINATION include/GentleDB4Qt)
install(FILES GentleDB4QtConfig.cmake DESTINATION lib/cmake/GentleDB4Qt)


# Subdirectories

add_subdirectory(src)
