#include <iostream>

int main() {
    int x = 42;
    int* ptr = &x;
    ++x;

    std::cout << *ptr << "\n";

    int y = 2, z = 3;

    std::cout << &x << "\n";
    std::cout << &y << "\n";
    std::cout << &z << "\n";

    int* p; // not initialized, random address memory
    p = nullptr; // null pointer
    p = &x; // address of `x` variable

    std::cout << *p << "\n"; // 43
    p = &y; // change address, in p pointer

    std::cout << *p << "\n"; // 2

    return 0;
}
