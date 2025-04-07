#include <iostream>

int main()
{
  std::cout << true << '\n'; // true evaluates to 1
  std::cout << !true << '\n'; // !true evaluates to 0

  bool b{false};
  std::cout << b << '\n';
  std::cout << !b << '\n';
  std::cout << '\n';

  std::cout << std::boolalpha; // print bools as true and false

  std::cout << true << '\n';
  std::cout << false << '\n';
  std::cout << '\n';

  std::cout << std::noboolalpha; // turn off prints true and false;

  std::cout << true << '\n';
  std::cout << false << '\n';
  std::cout << '\n';

  bool bFalse{0}; // initialized to false
  bool bTrue{1}; // initialized to true
  // bool bNo{2}; // error: narrowing conversions disallowed

  std::cout << bFalse << bTrue << '\n';
  std::cout << '\n';

  std::cout << std::boolalpha;

  bool b1 = 5; // copy initialization allows implicit conversion from int to bool
  std::cout << b1 << '\n';

  bool b2 = 0; // copy initialization allows implicit conversion from int to bool
  std::cout << b2 << '\n';

  return 0;
}
