cmake_minimum_required(VERSION 3.17)
project(CppModule)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra" )

add_executable(d05e03
        main.cpp
        Bureaucrat.cpp
        Form.cpp
        ShrubberyCreationForm.cpp
        ShrubberyCreationForm.hpp
        RobotomyRequestForm.cpp
        RobotomyRequestForm.hpp
        PresidentialPardonForm.cpp
        PresidentialPardonForm.hpp
        Intern.cpp
        Intern.hpp
        )