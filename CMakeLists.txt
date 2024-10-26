cmake_minimum_required(VERSION 3.1.0)

project(interface_sim)

set(INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDES})

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.c")

add_executable(${PROJECT_NAME} main.c ${SOURCES})