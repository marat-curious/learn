#include <iostream>
#include <string>

int main() {
    std::string s = "Some string";
    s += ' ';
    s += "functions";
    std::cout << s << "\n"; // Some string functions

    std::string sub1 = s.substr(5, 6); // string
    std::string sub2 = s.substr(12); // functions

    size_t pos1 = s.find(' '); // 4
    size_t pos2 = s.find(' ', pos1 + 1); // 11
    size_t pos3 = s.find("str"); // 5
    size_t pos4 = s.find("#"); // std::string::npos

    s.insert(5, "std::");
    std::cout << s << "\n"; // Some std::string functions

    s.replace(0, 4, "Special");
    std::cout << s << "\n"; // Special std::string functions

    s.erase(8, 5); // Special string functions

    // C++20 starts_with and ends_with functions
    std::string phrase;
    std::getline(std::cin, phrase);

    if (phrase.starts_with("hello")) {
        std::cout << "Greeting\n";
    }

    if (phrase.ends_with("bye")) {
        std::cout << "Farewell\n";
    }

    return 0;
}
