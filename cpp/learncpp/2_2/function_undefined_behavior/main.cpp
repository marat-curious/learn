#include <iostream>

int getValueFromUser() // this function returns an integer value
{
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  // note: no return statement
}

int main()
{
  int num{ getValueFromUser() };
  std::cout << num << " doubled is: " << num * 2 << '\n';

  return 0;
}
