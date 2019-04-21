#include "gtest/gtest.h"
#include "../split.cpp"

TEST(TestSplit, DelimSpace) {
    vector<string> elements = split("A B C", ' ');
    ASSERT_EQ(3, elements.size());
    ASSERT_EQ("A", elements[0]);
    ASSERT_EQ("B", elements[1]);
    ASSERT_EQ("C", elements[2]);
}

TEST(TestSplit, DelimConnma) {
    vector<string> elements = split("A,B,C", ',');
    ASSERT_EQ(3, elements.size());
    ASSERT_EQ("A", elements[0]);
    ASSERT_EQ("B", elements[1]);
    ASSERT_EQ("C", elements[2]);
}
