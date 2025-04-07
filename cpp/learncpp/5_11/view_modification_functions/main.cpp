#include <iostream>
#include <string_view>

// The remove_prefix() member function removes characters from the left side of the view
// The remove_suffix() member function removes characters from the right side of the view

int main()
{
  std::string_view str {"Peach"};
  std::cout << str << '\n';

  // Remove 1 character from the left side of the view
  str.remove_prefix(1);
  std::cout << str << '\n';

  // Remove 2 characters from the right side of the view
  str.remove_suffix(2);
  std::cout << str << '\n';

  str = "Peach"; // reset the view
  std::cout << str << '\n';

  return 0;
}
