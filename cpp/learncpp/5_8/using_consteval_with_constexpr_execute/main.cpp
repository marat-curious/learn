#include <iostream>

// Uses abbreviated function template (C++20) and `auto` return type to make this function work with any type of value
consteval auto compileTime(auto value)
{
  return value;
}

constexpr int greater(int x, int y)
{
  return (x > y ? x : y);
}

int main()
{
  std::cout << greater(5, 6) << '\n'; // may or may not execute at compile-time
  std::cout << compileTime(greater(5, 6)) << '\n'; // will execute at compile-time

  int x {5};
  std::cout << greater(x, 6) << '\n'; // we can still call the constexpr version at runctime if we wish

  return 0;
}
