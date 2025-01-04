#include <iostream>
#include <string>

int main() {
    std::string s1 = "Elementary, my dear Watson!";
    std::string s2 = s1; // copy string into new memory block

    s1.clear();

    std::cout << s1 << "\n"; // empty string
    std::cout << s2 << "\n"; // Elementary, my dear Watson!

    return 0;
}
