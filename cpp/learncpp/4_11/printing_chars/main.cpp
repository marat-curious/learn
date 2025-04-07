#include <iostream>

int main()
{
  char ch1{'a'}; // (preffered)
  std::cout << ch1; // prints character 'a'

  char ch2{98}; // code point to 'b' (not preffered)
  std::cout << ch2;

  std::cout << '\n';

  return 0;
}
