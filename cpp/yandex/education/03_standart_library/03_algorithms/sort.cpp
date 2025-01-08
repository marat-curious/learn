#include <algorithm>
#include <list>
#include <vector>

int main() {
    std::list<int> data = {3, 14, 15, 92, 6};
    std::sort(data.begin(), data.end()); // compilation error
    data.sort(); // OK

    std::vector<int> v = {2, 14, 15, 92, 6};
    std::partial_sort(data.begin(), data.begin() + 3, data.end());
    // first three elements: 3, 6, 14
    return 0;
}
