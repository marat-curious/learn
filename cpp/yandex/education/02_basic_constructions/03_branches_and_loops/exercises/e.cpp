#include <iostream>

int main() {
    unsigned short w, c;
    std::cin >> w >> c;
    for (short i = 1; i < w; i++) {
        if (i == 1) {
            std::cout << "  ";
            continue;
        }
        std::cout << "   ";
    }
    unsigned short i = 1;
    bool n = false;
    while(i <= c) {
        unsigned short s = 1;
        if (i == 1 && w == 1) {
            s = 1;
        } else if (n) {
            n = false;
            if (i >= 10) {
                s = 0;
            }
        } else if (i < 10) {
            s = 2;
        }
        for (short j = 0; j < s; j++) {
            std::cout << " ";
        }
        std::cout << i;
        if ((i + w - 1) % 7 == 0) {
            n = true;
            std::cout << "\n";
        }
        ++i;
    }
    std::cout << "\n";
    return 0;
}
