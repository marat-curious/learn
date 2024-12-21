#include <iostream>

int main() {
    int x;
    std::cout << x << "\n"; // undefined behaviour
    int y;
    std::cin >> y; // it is avialable scenario
    return 0;
}
