#include <iostream>
#include <vector>

int main() {
    unsigned short m = 0;
    unsigned short n = 0;
    unsigned short k = 0;
    std::vector<std::vector<unsigned short>> coordinates;

    std::cin >> m >> n >> k;

    for (unsigned short i = 0; i != k; ++i) {
        unsigned short x, y;
        std::cin >> x >> y;
        coordinates.push_back({x, y});
    }

    for (unsigned short i = 0; i != m; ++i) {
        for (unsigned short j = 0; j != n; ++j) {
        }
    }

    return 0;
}
