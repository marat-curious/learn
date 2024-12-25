#include <iostream>

int main() {
    double s = 0.0;
    int n;
    std::cin >> n;
    short c = -1;
    for (int i = 1; i <= n; i++) {
        c *= -1;
        s += static_cast<double>(c) / i;
    }
    std::cout << s << std::endl;
    return 0;
}
