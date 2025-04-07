#include <iostream>
#include <string>
#include <string_view>

int main()
{
  std::string_view sv {};

  { // create a nested block
    // create a std::string local for this nested block
    std::string s{"Hello, world!"};
    sv = s; // sv now viewing s
  } // s is destroyed here, so sv is now viewing on invalid string

  std::cout << sv << "\n"; // endefined behaviour
  return 0;
}
