add_library(
    lib
    ../src/Player.cpp
    ../src/Player.cpp
    ../src/Inventory.cpp
    ../src/Trials.cpp
    ../src/Menu.cpp
    ../src/Classes.cpp
    ../src/pch.cpp
    Player.hpp
    Inventory.hpp
    Trials.hpp
    Menu.hpp
    Classes.hpp
    pch.hpp
    ../test/InventoryTest.cpp
    )

target_include_directories(lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

