#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "func_for_test.hpp"

TEST(TestSuiteAdd, HandlesZeroInput) {

    EXPECT_EQ(add(0, 0), 0);
}

TEST(TestSuiteAdd, HandlesPositiveInput) {

    EXPECT_EQ(add(1, 3), 4);
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(2, 3), 5);

}

TEST(TestSuiteAdd, HandlesNegativeInput) {

    EXPECT_EQ(add(-1, -4), -5);
    EXPECT_EQ(add(-1, 2), 1);
}