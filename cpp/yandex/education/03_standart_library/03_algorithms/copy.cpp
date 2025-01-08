#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

template <typename InputIter, typename OuterIter>
OutputIter copy(InputIter first, InputIter last, OutputIter out) {
    while (first != last) {
        *out = *first;
        ++first;
        ++out
    }
    return out;
}

int main() {
    std::vector<int> v = {3, 14, 15, 92, 6};
    std::list<int> l;

    l.resize(v.size()); // l = {0, 0, 0, 0, 0}

    std::copy(v.rbegin(), v.rend(), l.begin());

    for (int x : l) {
        std::cout << x << " ";
    }

    std::cout << std::endl;

    return 0;
}
