#include <iostream>

/**
void compilation_error() {
    goto label;
    int x = 42;
    label:
    std::cout << x << "\n";
}
*/

int main() {
    again:  // label
    std::cout << "How old are you?\n";
    int age;
    std::cin >> age;
    if (age < 0 || age >= 128) {
        std::cout << "Wrong age ...\n";
        goto again;  // jump to label "again"
    }
    std::cout << "Your age is " << age << ".\n";
    return 0;
}
