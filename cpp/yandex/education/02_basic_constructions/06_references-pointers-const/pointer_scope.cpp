#include <iostream>

int main() {
    int* ptr = nullptr;

    {
        int x = 42;
        ptr = &x;
    }

    std::cout << *ptr << "\n"; // undefined behaviour

    return 0;
}
