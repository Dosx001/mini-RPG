#include <gtest/gtest.h>
#include "Inventory.hpp"

class Fixture: public testing::Test {
    protected:
        Inventory* Invy;
        void SetUp() {
            Invy = new Inventory;
        }
        void TearDown() {
            delete Invy;
        }
};

TEST_F(Fixture, addItems_removeItems_Test) {
    ASSERT_EQ(Invy -> getNumItems(), 0);
    ASSERT_TRUE(Invy -> addItem("item"));
    ASSERT_EQ(Invy -> getNumItems(), 1);
    for (int i = 0; i < 9; i++) {
        Invy -> addItem("item");
    }
    ASSERT_FALSE(Invy -> addItem("item"));
    ASSERT_EQ(Invy -> getNumItems(), Invy -> getSize());
    Invy -> removeItem("item");
    ASSERT_EQ(Invy -> getNumItems(), 9);
    ASSERT_FALSE(Invy -> removeItem("stuff"));
}

TEST_F(Fixture, getHP_Test) {
    ASSERT_EQ(Invy -> getHP(), 2);
    Invy -> addHP();
    ASSERT_EQ(Invy -> getHP(), 3);
    for (int i = 0; i < 8; i++) {
        Invy -> addHP();
    }
    ASSERT_EQ(Invy -> getHP(), Invy -> getMaxPotions());
}

TEST_F(Fixture, getMP_Test) {
    ASSERT_EQ(Invy -> getMP(), 2);
    Invy -> addMP();
    ASSERT_EQ(Invy -> getMP(), 3);
    for (int i = 0; i < 8; i++) {
        Invy -> addMP();
    }
    ASSERT_EQ(Invy -> getMP(), Invy -> getMaxPotions());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
