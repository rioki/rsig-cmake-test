cmake_minimum_required(VERSION 3.8)
project(rsig-cmake-test CXX)

find_package(rsig CONFIG REQUIRED)

set(CMAKE_SHARED_LIBRARY_PREFIX)
set(CMAKE_STATIC_LIBRARY_PREFIX)

set(SOURCES
  main.cpp
)

add_executable(rsig-cmake-test ${SOURCES})

include_directories(.)

set_target_properties(rsig-cmake-test PROPERTIES
  CXX_STANDARD 20
)
target_link_libraries(rsig-cmake-test PRIVATE rsig::rsig)
