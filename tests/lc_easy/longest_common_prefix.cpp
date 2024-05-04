#include "lc_easy/longest_common_prefix.h"
#include <gtest/gtest.h>
#include <string>
#include <vector>

TEST(LongestCommonPrefixTest, Case1) {
  std::vector<std::string> strs{"flower", "flow", "flight"};
  std::string expected = "fl";

  EXPECT_EQ(expected, longestCommonPrefix(strs));
}

TEST(LongestCommonPrefixTest, Case2) {
  std::vector<std::string> strs{"dog", "racecar", "car"};
  std::string expected; // expected = ""

  EXPECT_EQ(expected, longestCommonPrefix(strs));
}
