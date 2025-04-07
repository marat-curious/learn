#include <iostream>

int getNumber()
{
  std::cout << "Enter a number: ";
  int y{};
  std::cin >> y;
  return y;
}

int main()
{
  int a {5}; // 5 is a constant expression
  double b {1.2 + 3.4}; // 1.2 + 3.4 is a constant expression

  const int c {5}; // 5 is a constant expression
  const int d {c}; // c is a constant expression
  const long e {c + 2}; // c + 2 is constant expression

  const int f {a}; // a is not a constant expression
  const int g {a + 1}; // a + 1 is not a constant expression
  const long h {a + c}; // a + c is not a constant expression
  const int i {getNumber()}; // getNumber() is not a constant expression

  const double j {b}; // b is not constant expression
  const double k {1.2}; // 1.2 is not constant expression

  return 0;
}
