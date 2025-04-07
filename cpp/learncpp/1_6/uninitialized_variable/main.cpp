#include <iostream>

int main()
{
  int x; // this variable is uninitialized because we haven't given it a value
  std::cout << x << '\n';
  return 0;
}
