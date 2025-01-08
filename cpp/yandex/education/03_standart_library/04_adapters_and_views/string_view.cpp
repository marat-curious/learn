#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string s = "Hello, world! How do you do?";
    std::string_view sv = s;

    auto sub = sv.substr(7, 5); // sub - std::string_view

    // sub[0] = 'W';

    std::cout << sub << "\n"; // world
    std::cout << s << "\n"; // Hello, world! How do you do?

    return 0;
}
