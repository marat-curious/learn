#include <iostream>
#include <limits>

int main() {
    unsigned int ui = 4294967295; // 2^32 - 1

    std::cout << "minimum value: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "maximum value: " << std::numeric_limits<int>::max() << "\n";

    return 0;
}
