cmake_minimum_required(VERSION 3.17)
project(CppModule)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra" )

add_executable(DAY03 03/exp.cpp)

add_executable(DAY03EX00 03/ex00/main.cpp 03/ex00/FragTrap.cpp 03/ex00/FragTrap.hpp)

add_executable(DAY03EX01 03/ex01/main.cpp 03/ex01/FragTrap.cpp 03/ex01/FragTrap.hpp 03/ex01/ScavTrap.cpp 03/ex01/ScavTrap.hpp)

add_executable(d04e00 04/ex00/main.cpp 04/ex00/Sorcerer.cpp 04/ex00/Sorcerer.hpp 04/ex00/Victim.cpp 04/ex00/Victim.hpp 04/ex00/Peon.cpp 04/ex00/Peon.hpp)

add_executable(CppModule
        main.cpp 04/ex00/main.cpp)
