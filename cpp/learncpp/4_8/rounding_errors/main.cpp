#include <iomanip>
#include <iostream>

int main()
{
  double d{0.1};
  std::cout << d << '\n'; // use default cout precision of 6
  std::cout << std::setprecision(17);
  std::cout << d << '\n';
  std::cout << '\n';

  double d1{1.0};
  std::cout << d1 << '\n';

  double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
  std::cout << d2 << '\n';

  return 0;
}
