add_executable(mini_RPG.exe ../src/main.cpp)
add_executable(InventoryTest.exe ../test/InventoryTest.cpp)

target_link_libraries(mini_RPG.exe lib)
target_link_libraries(InventoryTest.exe lib ${GTEST_LIBRARIES} pthread)
