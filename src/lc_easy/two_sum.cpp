#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target) {
  // key = nums element
  // value = associated nums index
  std::unordered_map<int, int> num_map;

  // populate the hashmap as we iterate through nums, all in one pass
  for (int i = 0; i < nums.size(); i++) {
    // find() returns iterator to element in hashmap, otherwise returns end()
    if (num_map.find(target - nums[i]) == num_map.end()) {
      // matching element not in hashmap, so add the current nums element to it
      num_map[nums[i]] = i;
    } else {
      // a match was found, so return the two matching indices
      return {num_map[target - nums[i]], i};
    }
  }

  throw std::runtime_error("twoSum() failed to identify solution pair");
}