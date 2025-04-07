#include <iostream>
#include <string_view>

int main()
{
  // Unlike std::string, std::string_view has full support for constexpr
  constexpr std::string_view s {"Hello world!"}; // s is a string symbolic constant
  std::cout << s << '\n'; // s will be replaced widh "Hello, world!" at compile time

  return 0;
}
