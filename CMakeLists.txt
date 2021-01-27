cmake_minimum_required(VERSION 3.17)
project(CppModule)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra" )

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

#add_executable(d05e01
#        )
#
#add_executable(d05e02
#        )
#
#add_executable(d05e03
#        )

add_executable(d06e00
        06/main.cpp)

add_executable(CppModule main.cpp
                )

add_executable(ABSTRACT ABSTRACT.cpp
        04/ex02/main.cpp
        )
