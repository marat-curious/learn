#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {5, 5, 3, 2, 2, 5, 9, 11};
    auto iter = std::unique(v.begin(), v.end());
    // 5, 3, 2, 5, 9, 1, 9, 1
    //                   ^ iter position
    v.erase(iter, v.end());
    return 0;
}
