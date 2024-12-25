#include <iostream>

int main() {
    // Simple condition
    int x;
    std::cin >> x;
    if (x <= 0) {
        std::cout << "zero or negative\n";
    } else if (x == 1) {
        std::cout << "one\n";
    } else if (x == 2) {
        std::cout << "two\n";
    } else {
        std::cout << "many\n";
    }

    // Complex condition
    int a, b, y;
    a = 0;
    b = 9;
    std::cin >> y;
    if (a <= x && x <= b) {
        std::cout << "inside [0, 9]\n";
    } else {
        std::cout << "outside [0, 9]\n";
    }

    return 0;
}
