#include <iostream>

int main() {
    double x = 0.1, y = 0.2;

    // Uncorrect comparison
    if (x + y == 0.3) {
        std::cout << "EQUAL ";
    } else {
        std::cout << "NOT EQUAL ";
    }
    std::cout << x + y << "\n";

    // Correct comparison
    double delta = 0.000001;
    double sum = x + y;
    if (std::abs(sum - 0.3) < delta) {
        std::cout << "EQUAL ";
    } else {
        std::cout << "NOT EQUAL ";
    }
    std::cout << sum << "\n";

    return 0;
}
