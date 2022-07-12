cmake_minimum_required(VERSION 3.8)
project(rsig-cmake-test CXX)

find_path(RSIG_INCLUDE_DIRS "rsig/rsig.h")

set(CMAKE_SHARED_LIBRARY_PREFIX)
set(CMAKE_STATIC_LIBRARY_PREFIX)

set(SOURCES
  main.cpp
)

add_executable(rsig-cmake-test ${SOURCES})

target_include_directories(rsig-cmake-test PRIVATE ${RSIG_INCLUDE_DIRS})

set_target_properties(rsig-cmake-test PROPERTIES
  CXX_STANDARD 20
)
