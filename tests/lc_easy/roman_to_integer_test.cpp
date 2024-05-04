#include "lc_easy/roman_to_integer.h"
#include <gtest/gtest.h>

TEST(RomanToIntegerTest, Case1) {
  std::string input = "III";
  int expected = 3;

  EXPECT_EQ(expected, romanToInt(input));
}

TEST(RomanToIntegerTest, Case2) {
  std::string input = "LVIII";
  int expected = 58;

  EXPECT_EQ(expected, romanToInt(input));
}

TEST(RomanToIntegerTest, Case3) {
  std::string input = "MCMXCIV";
  int expected = 1994;

  EXPECT_EQ(expected, romanToInt(input));
}