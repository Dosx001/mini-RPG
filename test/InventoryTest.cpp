#include <gtest/gtest.h>
#include "../include/Inventory.hpp"

TEST(Inventory, items) {
    Inventory Invy;
    ASSERT_EQ(Invy.getSize(), 10);
    ASSERT_EQ(Invy.getNumItems(), 0);
    for (int i = 0; i < 5; i++) {
        Invy.addItem("item");
    }
    ASSERT_EQ(Invy.getNumItems(), 5);
    Invy.removeItem("item");
    ASSERT_EQ(Invy.getNumItems(), 5);
}

TEST(Inventory, potions) {
    Inventory Invy;
    ASSERT_EQ(Invy.getHP(), 2);
    Invy.addHP();
    ASSERT_EQ(Invy.getHP(), 3);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
