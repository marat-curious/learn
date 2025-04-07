#include <iomanip> // for output manipulator std::setprecision()
#include <iostream>

int main()
{
  std::cout << 9.87654321f << '\n';
  std::cout << 987.654321f << '\n';
  std::cout << 987654.321f << '\n';
  std::cout << 9876543.21f << '\n';
  std::cout << 0.0000987654321f << '\n';
  std::cout << '\n';

  std::cout << std::setprecision(17); // show 17 digits of precision
  std::cout << 3.33333333333333333333333333333333333333f << '\n'; // f suffix means float
  std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double
  std::cout << '\n';

  float f {123456789.0f}; // f has 10 significant digits
  std::cout << std::setprecision(9); // to show 9 digits in f
  std::cout << f << '\n';

  return 0;
}
