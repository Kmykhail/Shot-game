cmake_minimum_required(VERSION 3.9)
project(rush00)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_FLAGS "{CMAKE_C_FLAGS} −lncurses")

add_executable(rush00
        IFlyObj.hpp
        AShips.cpp
        AShips.hpp
        PlayerShip.hpp
        PlayerShip.cpp
        EnemyShip.hpp
        EnemyShip.cpp
        ABang.hpp
        ABang.cpp
        Bullet.hpp
        Bullet.cpp
        LinkedList.hpp
        LinkedList.cpp
        GameObject.hpp
        GameObject.cpp
        main.cpp)
