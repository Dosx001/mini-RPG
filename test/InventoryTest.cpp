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

TEST_F(Fixture, getNumItems_Test) {
    ASSERT_EQ(Invy -> getSize(), 10);
    ASSERT_EQ(Invy -> getNumItems(), 0);
    for (int i = 0; i < 5; i++) {
        Invy -> addItem("item");
    }
    ASSERT_EQ(Invy -> getNumItems(), 5);
    Invy -> removeItem("item");
    ASSERT_EQ(Invy -> getNumItems(), 5); //FIX BUG
}

TEST_F(Fixture, getHP_Test) {
    ASSERT_EQ(Invy -> getHP(), 2);
    Invy -> addHP();
    ASSERT_EQ(Invy -> getHP(), 3);
    for (int i = 0; i < 8; i++) {
        Invy -> addHP();
    }
    ASSERT_EQ(Invy -> getHP(), 10);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
