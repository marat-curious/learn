#include <algorithm>
#include <iterator>
#include <list>
#include <vector>

int main() {
    std::vector<int> v = {3, 14, 15, 92, 6};
    std::list<int> l; // empty list
    std::copy(v.begin(), v.end(), std::back_inserter(l)); // 3, 14, 15, 92, 6

    return 0;
}
