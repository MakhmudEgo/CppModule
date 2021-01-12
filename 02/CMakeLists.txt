cmake_minimum_required(VERSION 3.17)
project(02)

set(CMAKE_CXX_STANDARD 98)

add_executable(02 main.cpp Test.cpp Test.hpp)

add_executable(ex00 ex00/main.cpp ex00/Fixed.cpp ex00/Fixed.hpp)

add_executable(ex01 ex01/main.cpp ex01/Fixed.cpp ex01/Fixed.hpp)
