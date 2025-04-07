#include <cassert> // for assert
#include <cstdint> // for std::int64_t
#include <iostream>

// NOTE: exp must be non-nagative
// NOTE: does not perform range/overflow cheking, use with coution
constexpr std::int64_t powint(std::int64_t base, int exp)
{
  assert(exp >= 0 && "powint: exp parameter has negative value");

  // Handle 0 case
  if (base == 0) {
    return (exp == 0) ? 1 : 0;
  }

  std::int64_t result{1};
  while(exp > 0)
  {
    if (exp & 1) // if exp is odd
      result *= base;
    exp /= 2;
    base *= base;
  }

  return result;
}

int main()
{
  std::cout << powint(7, 12) << '\n'; // 7 to the 12th power
  return 0;
}
