#include <iostream>
#include <utility>

int main() {
    std::pair<int, double> p = {42, 3.14};

    std::cout << p.first << "\n";
    std::cout << p.second << "\n";

    auto [num, pi] = p; // num = 42; pi = 3.14;

    return 0;
}
