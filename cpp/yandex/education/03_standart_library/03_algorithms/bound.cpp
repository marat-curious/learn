#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 4, 5, 9, 9, 13, 47};

    auto iter1 = std::lower_bound(data.begin(), data.end(), 8);
    auto iter2 = std::upper_bound(data.begin(), data.end(), 47);

    for (auto iter = iter1; iter != iter2; ++iter) {
        std::cout << *iter << " "; // 9 9 13 47
    }

    std::cout << std::endl;

    return 0;
}
