#include "lc_easy/palindrome_number.h"
#include <gtest/gtest.h>

TEST(PalindromeNumberTest, Case1) {
  int x = 121;

  EXPECT_TRUE(isPalindrome(x));
}

TEST(PalindromeNumberTest, Case2) {
  int x = -121;

  EXPECT_FALSE(isPalindrome(x));
}

TEST(PalindromeNumberTest, Case3) {
  int x = 10;

  EXPECT_FALSE(isPalindrome(x));
}