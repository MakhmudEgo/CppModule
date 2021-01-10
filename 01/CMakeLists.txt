cmake_minimum_required(VERSION 3.17)
project(01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra" )

add_executable(ex00
        ex00/Pony.cpp
        ex00/Pony.hpp
        ex00/main.cpp
        )

add_executable(ex01
        ex01/ex01.cpp
        )

add_executable(ex02
        ex02/main.cpp
        ex02/Zombie.cpp
        ex02/Zombie.hpp
        ex02/ZombieEvent.cpp
        ex02/ZombieEvent.hpp
        )

add_executable(ex03
        ex03/main.cpp
        ex03/Zombie.cpp
        ex03/Zombie.hpp
        ex03/ZombieEvent.cpp
        ex03/ZombieEvent.hpp
        ex03/ZombieHorde.cpp
        ex03/ZombieHorde.hpp
        )

add_executable(ex04
        ex04/ex04.cpp
        )

add_executable(ex05
        ex05/main.cpp
        ex05/Brain.cpp
        ex05/Brain.hpp
        ex05/Human.cpp
        ex05/Human.hpp
        )

add_executable(ex06
        ex06/main.cpp
        ex06/Weapon.cpp
        ex06/Weapon.hpp
        ex06/HumanA.cpp
        ex06/HumanA.hpp
        ex06/HumanB.cpp
        ex06/HumanB.hpp
        )

add_executable(ex07
        ex07/mySed.cpp
        )

add_executable(1
        main.cpp
        )
