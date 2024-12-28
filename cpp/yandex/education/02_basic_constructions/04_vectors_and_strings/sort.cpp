#include <algorithm>
#include <vector>

int main() {
    std::vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6};

    std::sort(data.begin(), data.end()); // {1, 1, 2, 3, 4, 5, 6, 9}
    std::sort(data.rbegin(), data.rend()); // {9, 6, 5, 4, 3, 2, 1, 1}

    std::ranges::sort(data); // C++20

    return 0;
}
