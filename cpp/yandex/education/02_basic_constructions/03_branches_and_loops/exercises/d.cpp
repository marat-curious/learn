#include<iostream>

int main() {
    unsigned short m, y;
    short d = -1;
    std::cin >> m >> y;
    if (m == 2) {
        if (y % 400 == 0 || (!(y % 100 == 0) && y % 4 == 0)) {
            d = 0;
        }
        std::cout << 29 + d << "\n";
        return 0;
    } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m ==12) {
        std::cout << "31\n";
        return 0;
    }
    std::cout << "30\n";
    return 0;
}
