add_executable(mini_RPG.exe ../src/main.cpp)
add_executable(InventoryTest.exe ../test/InventoryTest.cpp)

target_precompile_headers(mini_RPG.exe PUBLIC ../include/pch.hpp)
target_precompile_headers(InventoryTest.exe REUSE_FROM mini_RPG.exe)

target_link_libraries(mini_RPG.exe lib)
target_link_libraries(InventoryTest.exe lib ${GTEST_LIBRARIES} pthread)
