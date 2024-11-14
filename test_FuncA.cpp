#include <gtest/gtest.h>
#include "FuncA.h"

TEST(FuncATest, TestFuncA) {
    FuncA funcA;
    EXPECT_EQ(funcA.calculate(3,1.0), 0.541667);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

