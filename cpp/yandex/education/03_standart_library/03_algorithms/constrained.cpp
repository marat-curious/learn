#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {100, 42, 17, 80, 20, 0};
    // C++20 version
    std::ranges::sort(data);

    for (auto& item : data) {
        std::cout << item << " ";
    }

    std::cout << std::endl;

    return 0;
}
