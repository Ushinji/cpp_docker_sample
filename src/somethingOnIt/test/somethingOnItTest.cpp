#include "gtest/gtest.h"
#include "../somethingOnIt.cpp"

TEST(TestOddEvent, HandleOXOInput) {
    const string input = "oxo";
    ASSERT_EQ(900, somethingOnIt(input));
}

TEST(TestOddEvent, HandleOOOInput) {
    const string input = "ooo";
    ASSERT_EQ(1000, somethingOnIt(input));
}

TEST(TestOddEvent, HandleXXXInput) {
    const string input = "xxx";
    ASSERT_EQ(700, somethingOnIt(input));
}
