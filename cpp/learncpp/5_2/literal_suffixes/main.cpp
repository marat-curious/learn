#include <iostream>

int main()
{
  // Integral literals
  std::cout << 5 << '\n'; // 5 (no suffix) is type in (by default)
  std::cout << 5L << '\n'; // 5L is type long
  std::cout << 5u << '\n'; // 5u is type unsigned int

  // Floating point literals
  std::cout << 5.0 << '\n'; // 5.0 (no suffix) is type double (by default)
  std::cout << 5.0f << '\n'; // 5.0f is type float

  // Scientific notation
  double avogardo{6.02e23}; // type double in scientific notation
  std::cout << avogardo << '\n';

  // String
  std::cout << "Hello, world!\n";

  return 0;
}
