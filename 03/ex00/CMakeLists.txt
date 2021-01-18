cmake_minimum_required(VERSION 3.17)
project(ex00)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra" )

include_directories(.)

add_executable(ex00
        FragTrap.cpp
        FragTrap.hpp
        main.cpp)
