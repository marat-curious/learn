#include <iostream>

consteval int greater(int x, int y) // available from C++20
{
  return (x > y ? x : y);
}

int main()
{
  constexpr int g {greater(5,6)}; // ok: will evaluate at compile-time
  std::cout << g << '\n';

  std::cout << greater(5, 6) << " is greater!\n"; // ok: will evaluate at compile-time

  int x {5}; // not constexpr
  std::cout << greater(x, 6) << " is greater\n"; // error: consteval function must evaluate at compile-time

  return 0;
}
