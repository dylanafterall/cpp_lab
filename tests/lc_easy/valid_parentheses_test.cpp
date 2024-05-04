#include "lc_easy/valid_parentheses.h"
#include <string>
#include <gtest/gtest.h>

TEST(ValidParenthesesTest, Case1) {
  std::string s = "()";

  EXPECT_TRUE(isValidParentheses(s));
}

TEST(ValidParenthesesTest, Case2) {
  std::string s = "()[]{}";

  EXPECT_TRUE(isValidParentheses(s));
}

TEST(ValidParenthesesTest, Case3) {
  std::string s = "(]";

  EXPECT_FALSE(isValidParentheses(s));
}

TEST(ValidParenthesesTest, Case4) {
  std::string s = "]";

  EXPECT_FALSE(isValidParentheses(s));
}