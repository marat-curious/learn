#include <iostream>

int main() {
    unsigned short fc, fr, sc, sr;
    std::cin >> fc >> fr >> sc >> sr;
    if ((fc == sc || fr == sr) || (std::abs(sc - fc) == std::abs(sr - fr))) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}
