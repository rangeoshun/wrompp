cmake_minimum_required(VERSION 3.7)
project(wrompp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        lib/color/color.cpp
        lib/color/color.h
        lib/entity/entity.cpp
        lib/entity/entity.h
        lib/game/game.h
        lib/updatable/updatable.cpp
        lib/updatable/updatable.h
        lib/vector/vector.cpp
        lib/vector/vector.h
        main.cpp)

add_executable(wrompp ${SOURCE_FILES})