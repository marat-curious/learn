#include <iostream>

int main()
{
  std::cout << "Input a keyword character: ";

  char ch{};
  std::cin >> ch; // ch = 'a', from "abcd", "bcd" is left queued
  std::cout << "You entered: " << ch << '\n';

  // Note: The following cin doesn't ask the user for input, it grabs queued input!
  std::cin >> ch; // ch = 'b', "cd" is left queued
  std::cout << "You entered: " << ch << '\n';

  return 0;
}
