#include <cstdint>
#include <iostream>

std::uint64_t Factorial(std::uint64_t n) {
    if (n == 0) {
        return 1;
    }
    return n * Factorial(n - 1); // recurtion call
}

int main() {
    std::cout << Factorial(5) << "\n"; // 120
    return 0;
}
