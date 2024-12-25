#include <iostream>

int main() {
    int sum = 0;
    while (true) {
        int x;
        std::cin >> x;
        if (x == 0) {
            break;
        }
        sum += x;
    }
    std::cout << sum << "\n";
    return 0;
}
