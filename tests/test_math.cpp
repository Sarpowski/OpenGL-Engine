#include <gtest/gtest.h>
#include "math.h"

TEST(MathTest, AddWorks) {
EXPECT_EQ(add(2, 3), 5);
EXPECT_EQ(add(-1, 1), 0);
EXPECT_EQ(add(0, 0), 0);
}

TEST(MathTest, SubtractWorks) {
EXPECT_EQ(subtract(5, 3), 2);
EXPECT_EQ(subtract(2, 4), -2);
EXPECT_EQ(subtract(0, 0), 0);
}
