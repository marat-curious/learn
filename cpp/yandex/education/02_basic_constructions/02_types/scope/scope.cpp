#include <iostream>

int a = 1; // global variable

int main() {
    int b = 2; // local variable
    {
        int c = 3; // local variable inside block
        std::cout << a << " " << b << " " << c << "\n";
    }

    // Compilation error
    // `c` not visible in this scope
    // std::cout << c << "\n";
}
