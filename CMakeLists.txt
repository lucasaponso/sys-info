cmake_minimum_required(VERSION 3.10)

project(sys-info LANGUAGES C)

set(CMAKE_C_STANDARD 11)                  # or 99, 17, whichever you want
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB SOURCES src/*.c)                # Change from *.cpp to *.c

add_executable(sys-info ${SOURCES})
