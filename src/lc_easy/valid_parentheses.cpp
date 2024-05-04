#include <string>
#include <stack>

bool isValidParentheses(std::string s) {
  // the order of parentheses 'type: {}()[]' matters, so build a LIFO stack
  std::stack<char> stack;

  for (char &parenthesis : s) {
    switch (parenthesis) {
    case '{':
      stack.push('}');
      break;
    case '(':
      stack.push(')');
      break;
    case '[':
      stack.push(']');
      break;
    case '}':
      [[fallthrough]];
    case ')':
      [[fallthrough]];
    case ']':
      // when a closing parenthesis is encountered,
      //  check if the last stack element matches the type required by the order
      //  if not, this means the sequence of closing parentheses is out of order
      if (stack.empty() || stack.top() != parenthesis) {
        return false;
      } else {
        stack.pop();
        break;
      }
    default:
      // input should only contain characters '(', ')', '{', '}', '[', and ']'
      throw std::runtime_error("Only valid parentheses should be provided");
    }
  }

  return stack.empty();
}