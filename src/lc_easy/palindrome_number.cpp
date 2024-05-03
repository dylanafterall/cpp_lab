bool isPalindrome(int x) {
  // palindromes must be positive integers (due to negative sign)
  if (x < 0) {
    return false;
  }

  // make a copy of input int, will use to build reverse int
  int temp = x;

  // will build reverse with each iteration of following while-loop
  long reverse = 0;

  // while temp != 0
  while (temp) {
    // use modulus to copy right-most digit of temp
    //  "reverse * 10" will add a 0 to the right side of reverse
    //  " + temp % 10" will change that 0 digit to the last digit of temp
    reverse = reverse * 10 + temp % 10;
    // use division to cut right-most digit of temp, will eventually reach 0
    temp /= 10;
  }

  return reverse == x;
}