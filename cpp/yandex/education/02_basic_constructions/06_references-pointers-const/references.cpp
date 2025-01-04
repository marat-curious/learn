#include <iostream>
#include <string>

int main() {
    int x = 42;
    int& ref = x; // reference to x
    ++x;

    std::cout << ref << "\n"; // 43

    std::string s1 = "Elementary, my dear Watson!";
    std::string& s2 = s1; // reference
    s1.clear();

    std::cout << s2.size() << "\n"; // 0

    int my_var = 42;
    // int& my_ref; // error
    // my_ref = my_var;

    int another_var = 13;
    int& another_ref = another_var; // OK
    another_ref = my_var; // reference still linked to `another-ref`, `another_var` changed to 42

    return 0;
}
