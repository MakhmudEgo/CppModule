cmake_minimum_required(VERSION 3.17)
project(CppModule)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra -std=c++98" )

add_executable(DAY03 03/exp.cpp)

add_executable(DAY03EX00
        03/ex00/main.cpp
        03/ex00/FragTrap.cpp
        03/ex00/FragTrap.hpp)

add_executable(DAY03EX01
        03/ex01/main.cpp
        03/ex01/FragTrap.cpp
        03/ex01/FragTrap.hpp
        03/ex01/ScavTrap.cpp
        03/ex01/ScavTrap.hpp
        )

add_executable(d04e00
        04/ex00/main.cpp
        04/ex00/Sorcerer.cpp
        04/ex00/Victim.cpp
        04/ex00/Peon.cpp
        )

add_executable(d04e01
        04/ex01/AWeapon.cpp
        04/ex01/PlasmaRifle.cpp
        04/ex01/PowerFist.cpp
        04/ex01/main.cpp
        04/ex01/Enemy.cpp
        04/ex01/SuperMutant.cpp
        04/ex01/RadScorpion.cpp
        04/ex01/Character.cpp
        )

add_executable(d04e02
        04/ex02/main.cpp
        04/ex02/Squad.cpp
        04/ex02/TacticalMarine.cpp
        04/ex02/AssaultTerminator.cpp
        )

add_executable(d04e03
        04/ex03/main.cpp
        04/ex03/AMateria.cpp
        04/ex03/Ice.cpp
        04/ex03/Cure.cpp
        04/ex03/Character.cpp
        )

add_executable(d05e00
        05/ex00/Bureaucrat.cpp
        05/ex00/main.cpp
        )
add_executable(d05e01
        05/ex01/Bureaucrat.cpp
        05/ex01/main.cpp
        05/ex01/Form.cpp
        )
add_executable(d05e02
        05/ex02/Bureaucrat.cpp
        05/ex02/main.cpp
        05/ex02/Form.cpp
        05/ex02/ShrubberyCreationForm.cpp
        05/ex02/RobotomyRequestForm.cpp
        05/ex02/PresidentialPardonForm.cpp
        )

#add_executable(d05e01
#        )
#
#add_executable(d05e02
#        )
#
#add_executable(d05e03
#        )

add_executable(d06e00
        06/ex00/main.cpp
        06/ex00/Convert.cpp
        )

add_executable(d06e01
        06/ex01/main.cpp
        )

add_executable(d06e02
        06/ex02/main.cpp
        06/ex02/Base.cpp
        06/ex02/Base.hpp
        06/ex02/A.cpp
        06/ex02/A.hpp
        06/ex02/B.cpp
        06/ex02/B.hpp
        06/ex02/C.cpp
        06/ex02/C.hpp
        )

add_executable(d07e00
        07/ex00/main.cpp
        07/ex00/whatever.hpp)

add_executable(d07e01
        07/ex01/main.cpp
        07/ex01/iter.hpp)

add_executable(d07e02
        07/ex02/main.cpp
        07/ex02/Array.tpp)

add_executable(d08e00
        08/ex00/main.cpp
        08/ex00/easyfind.hpp)

add_executable(d08e01
        08/ex01/main.cpp
        08/ex01/Span.cpp 08/ex01/Span.hpp)

add_executable(d08e02
        08/ex02/main.cpp
        08/ex02/MutantStack.cpp
        08/ex02/MutantStack.hpp
        )

add_executable(CppModule main.cpp
                )

add_executable(ABSTRACT ABSTRACT.cpp
        04/ex02/main.cpp
        )
