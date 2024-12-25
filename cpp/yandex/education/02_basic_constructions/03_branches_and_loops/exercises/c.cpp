#include <iostream>

int main() {
    unsigned int y;
    std::cin >> y;
    if (y < 0) {
        std::cout << "NO\n";
        return 0;
    }
    if (y % 400 == 0) {
        std::cout << "YES\n";
        return 0;
    }
    if (y % 100 == 0) {
        std::cout << "NO\n";
        return 0;
    }
    if (y % 4 == 0) {
        std::cout << "YES\n";
        return 0;
    }
    std::cout << "NO\n";
    return 0;
}
