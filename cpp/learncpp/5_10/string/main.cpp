#include <iostream>
#include <string>

void printString(std::string str) // str makes a copy of its initalizer
{
  std::cout << str << '\n';
}

int main()
{
  std::string s {"Hello, world!"}; // s makes a copy of its initializer
  printString(s);

  return 0;
}
