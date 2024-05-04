#include <string>

int romanToInt(std::string s) {
  int result = 0;
  int prev = 0;

  // using rbegin and rend for REVERSE iteration through the string
  std::for_each(s.rbegin(), s.rend(), [&prev, &result](char const &numeral) {
    int curr;

    // set val integer equal to the current roman numeral char in the loop
    switch (numeral) {
    case 'I':
      curr = 1;
      break;
    case 'V':
      curr = 5;
      break;
    case 'X':
      curr = 10;
      break;
    case 'L':
      curr = 50;
      break;
    case 'C':
      curr = 100;
      break;
    case 'D':
      curr = 500;
      break;
    case 'M':
      curr = 1000;
      break;
    default:
      throw std::runtime_error("Only valid roman numerals should be provided");
    }

    // account for following scenarios: "IV", "IX", "XL", "XC", "CD", "CM"
    if (curr < prev) {
      result -= curr;
    } else {
      result += curr;
    }

    prev = curr;
  });

  return result;
}