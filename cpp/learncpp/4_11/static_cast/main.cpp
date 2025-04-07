#include <iostream>

void print(int x)
{
  std::cout << x << '\n';
}

int main()
{
  print(static_cast<int>(5.5)); // explicitly convert  double value 5.5 to an int

  char ch{97}; // 97 is ASCII code for 'a'
  // print value of variable ch as int
  std::cout << ch << " has value " << static_cast<int>(ch) << '\n';

  return 0;
}
