#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 4, 5, 9, 9, 13, 47};

    if (std::binary_search(data.begin(), data.end(), 5)) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not found\n";
    }

    return 0;
}
