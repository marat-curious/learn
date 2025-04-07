#include <iostream>
#include <string>
#include <string_view>

int main()
{
  using namespace std::string_literals; // access the s suffix
  using namespace std::string_view_literals; // access the sv suffix

  std::cout << "foo\n"; // no suffix is a C-style string literal
  std::cout << "goo\n"; // s suffix is std::string literal
  std::cout << "moo\n"; // sv suffix is std::string_view literal

  return 0;
}
