#include <algorithm>
#include <iostream>
#include <string>

template <typename Iter, typename Predicate>
Iter find_if(Iter first, Iter last, Predicate p) {
    while (first != last) {
        if (p(*first)) {
            return first;
        }
        ++first;
    }
    return last;
}

int main() {
    std::string s = "iPhone SE";

    std::cout << std::count_if(
        s.begin(),
        s.end(),
        [](char c) {
            return 'A' <= c && c <= 'Z';
        }
    ) << "\n";

    return 0;
}
