cmake_minimum_required(VERSION 3.17)
project(CppModule)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra" )

add_executable(d05e01
        main.cpp
        Bureaucrat.cpp
        Form.cpp
        Form.hpp
        )