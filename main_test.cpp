//
// Created by kamilya on 06.03.2021.
//
#include <gtest/gtest.h>
#include "utils.h"

TEST(Sum1Test, Sum1) {
    int expected_value = 3;

    ASSERT_EQ(expected_value, sum1(1, 2));

}

TEST(Sum1Test, Sum1_2) {
    int expected_value = 0;

    ASSERT_EQ(expected_value, sum1(0, 0));

}

TEST(SumTest, Sum2) {
    int expected_value = 6;

    ASSERT_EQ(expected_value, sum2(1, 2, 3));

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}