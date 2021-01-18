cmake_minimum_required(VERSION 3.17)
project(d3e01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra" )

include_directories(.)

add_executable(ex01
        FragTrap.cpp
        FragTrap.hpp
        main.cpp
        ScavTrap.cpp
        ScavTrap.hpp)
