cmake_minimum_required(VERSION 3.17)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)

add_executable(ex03
        FragTrap.cpp
        FragTrap.hpp
        main.cpp
        ScavTrap.cpp
        ScavTrap.hpp
        ClapTrap.hpp
        ClapTrap.cpp
        NinjaTrap.cpp
        NinjaTrap.hpp
        )
