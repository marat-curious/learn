#include <iostream>

int main()
{
  unsigned short x{ 65'535 };
  std::cout << "x was: " << x << '\n';

  x = 65536;
  std::cout << "x is now: " << x << '\n';

  x = 65537;
  std::cout << "x is now: " << x << '\n';

  unsigned short y{ 0 };
  std::cout << "y was: " << y << '\n';

  y = -1;
  std::cout << "y is now: " << y << '\n';

  y = -2;
  std::cout << "y is now: " << y << '\n';

  return 0;
}
