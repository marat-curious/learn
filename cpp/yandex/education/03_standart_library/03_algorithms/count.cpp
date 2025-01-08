#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

// template of std::count function
template <typename Iter, typename Value>
int count(Iter first, Iter last, const Value& value) {
    int counter = 0;
    for (Iter iter = first; iter != last; ++iter) {
        if (*iter == value) {
            ++counter;
        }
    }
    return counter;
}

int main() {
    std::vector<int> v = {2, 7, 1, 8, 2, 8};

    int counter = 0;
    for (int elem : v) {
        if (elem == 8) {
            ++counter;
        }
    }

    std::cout << counter << "\n";

    // or

    std::cout << std::count(v.begin(), v.end(), 8) << "\n";

    // apply std::count for std::list
    std::list<int> l = {2, 7, 1, 8, 2, 8};
    std::cout << std::count(l.begin(), l.end(), 8) << "\n";

    return 0;
}
