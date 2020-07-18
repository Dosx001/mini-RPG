#include <gtest/gtest.h>
#include "Enemy.hpp"

class Fixture: public testing::Test {
    protected:
        Enemy* Ey;
        void SetUp() {
            Ey = new Enemy;
        }
        void TearDown() {
            delete Ey;
        }
};

TEST_F(Fixture, gitter_Test) {
    ASSERT_EQ(Ey -> getName(), "Knight");
    ASSERT_EQ(Ey -> getHealth(), 100);
}

TEST_F(Fixture, fight_Test) {
    int health = 100;
    for (int i = 0; i < 9; i++) {
        int dmg = Ey -> attack();
        ASSERT_EQ(dmg, 10);
        bool result = Ey -> block(dmg);
        ASSERT_TRUE(Ey -> takeDamage(dmg));
        health -= 10;
        if (result) {
            ASSERT_GT(Ey -> getHealth(), health);
        } else {
            ASSERT_EQ(Ey -> getHealth(), health);
        }
        health = Ey -> getHealth();
    }
}

TEST_F(Fixture, death_Test) {
    int dmg = 100;
    ASSERT_FALSE(Ey -> takeDamage(dmg));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
