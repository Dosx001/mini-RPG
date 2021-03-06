cmake_minimum_required(VERSION 3.16.3)
project(mini_RPG VERSION 1.0.0)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(${PROJECT_NAME}_FLAGS "-g -O0 -Wall -Wextra -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS "${${PROJECT_NAME}_FLAGS}")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

add_library(
    lib
    src/Player.cpp
    src/Inventory.cpp
    src/Trials.cpp
    src/Menu.cpp
    src/Classes.cpp
    src/Enemy.cpp
    src/Battle.cpp
    src/Maze.cpp
    include/Player.hpp
    include/Inventory.hpp
    include/Trials.hpp
    include/Menu.hpp
    include/Classes.hpp
    include/Enemy.hpp
    include/Battle.hpp
    include/Maze.hpp
    )
target_include_directories(lib PUBLIC include)

file(MAKE_DIRECTORY bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(mini_RPG.exe src/main.cpp)
target_precompile_headers(mini_RPG.exe PUBLIC include/pch.hpp)
target_link_libraries(mini_RPG.exe lib)

set(files Inventory Enemy)
foreach(file ${files})
    add_executable(${file}Test.exe test/${file}Test.cpp)
    target_precompile_headers(${file}Test.exe REUSE_FROM mini_RPG.exe)
    target_link_libraries(${file}Test.exe lib ${GTEST_LIBRARIES} pthread)
endforeach()

ADD_SUBDIRECTORY(spike)
