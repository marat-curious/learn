#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "What is your name?\n";
    // Read input only to space, enter or tab sign
    // std::cin >> name;
    // Read line
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "\n";
    return 0;
}
