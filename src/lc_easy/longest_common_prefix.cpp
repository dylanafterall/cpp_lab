#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> &strs) {
  // result starts as copy of full first string, then slowly whittled away
  //  by each successive string in the vector, until only common prefix remains
  std::string result = strs[0];

  for (std::string &s : strs) {
    // string_view::starts_with() requires CMAKE_CXX_STANDARD 20 (since C++20)
    while (!std::string_view(s).starts_with(result)) {
      // keep popping the last character from our return value until all that
      //  is left is a common prefix to current string in loop
      result.pop_back();
    }
  }

  return result;
}