#include "gtest/gtest.h"
#include "../oddEven.cpp"

TEST(TestOddEvent, HandleEvenInput) {
    ASSERT_EQ("Even", oddEven(1, 2));
}

TEST(TestOddEvent, HandleOddInput) {
    ASSERT_EQ("Odd", oddEven(1, 3));
}
