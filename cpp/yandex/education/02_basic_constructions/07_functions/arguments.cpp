#include <iostream>

void Swap(int& x, int&y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int a = 1, b = 2;
    std::cout << a << " " << b << "\n";
    // Swap(a, b);
    // or
    {
        int& x = a;
        int& y = b;
        int z = x;
        x = y;
        y = z;
    }
    std::cout << a << " " << b << "\n";
    return 0;
}
