#include <iostream>

typedef std::string string10;

string10 (&get_ten_strings_type_alias())[10];

auto get_ten_strings_trailing_return_type() -> std::string (&)[10];

std::string ten_strings[10];
decltype(ten_strings) &get_ten_strings_decltype();

int main()
{
    return 0;
}
