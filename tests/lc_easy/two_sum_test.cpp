#include "lc_easy/two_sum.h"
#include <vector>
#include <gtest/gtest.h>

TEST(TwoSumTest, Case1) {
  std::vector<int> nums{ 2, 7, 11, 15 };
  int target = 9;

  std::vector<int> expected{ 0, 1 };

  EXPECT_EQ(expected, twoSum(nums, target));
}

TEST(TwoSumTest, Case2) {
  std::vector<int> nums{ 3, 2, 4 };
  int target = 6;

  std::vector<int> expected{ 1, 2 };

  EXPECT_EQ(expected, twoSum(nums, target));
}

TEST(TwoSumTest, Case3) {
  std::vector<int> nums{ 3, 3 };
  int target = 6;

  std::vector<int> expected{ 0, 1 };

  EXPECT_EQ(expected, twoSum(nums, target));
}