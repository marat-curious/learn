#include <iostream>
#include <string>

int main() {
    int a = 7, b = 3;
    int q = a / b; // 2
    int r = a % b; // 1

    // static_cast
    int c = 6, d = 4;
    double s = static_cast<double>(c) / d; // 1.5
    // double s = c * 1.0 / d;

    // ASCII
    char e = 'A';
    e += 25;
    std::cout << e << "\n"; // Z

    // Concatination
    std::string f = "Hello, ";
    std::string g = "world!";
    std::string h = f + g; // Hello, world!

    // +=, ++, -- - operators
    int x = 5;
    x += 3; // x = x + 3
    x *= x; // x = x * x

    int y = 5;
    ++y; // 6
    --y; // 5

    // auto
    auto z = 42; // int
    auto pi= 3.14159; // double

    return 0;
}
