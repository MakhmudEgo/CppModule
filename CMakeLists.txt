cmake_minimum_required(VERSION 3.17)
project(CppModule)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall  -Wextra" )#-Werror

add_executable(DAY03 03/exp.cpp)

add_executable(DAY03EX00 03/ex00/main.cpp 03/ex00/FragTrap.cpp 03/ex00/FragTrap.hpp)

add_executable(CppModule
        main.cpp)
