#include "gtest/gtest.h"
#include "../fizzbuzz.cpp"

TEST(TestFizzBuzz, HandlesThreeMultiplesInput) {
    ASSERT_EQ("Fizz", fizzbuzz(3));
}

TEST(TestFizzBuzz, HandlesFiveMultiplesInput) {
    ASSERT_EQ("Buzz", fizzbuzz(5));
}

TEST(TestFizzBuzz, HandlesFiffteenMultiplesInput) {
    ASSERT_EQ("FizzBuzz", fizzbuzz(15));
}

TEST(TestFizzBuzz, HandlesOtherInput) {
    ASSERT_EQ("1", fizzbuzz(1));
}
