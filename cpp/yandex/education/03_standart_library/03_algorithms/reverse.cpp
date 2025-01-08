#include <algorithm>
#include <iostream>
#include <string>

template <typename Iter>
void reverse(Iter first, Iter last) {
    while (first != last) {
        --last;
        if (first == last) {
            break;
        }
        std::swap(*first, *last);
        ++first;
    }
}

int main() {
    std::string s = "No lemon, no melon!";
    std::reverse(s.begin(), s.end());
    std::cout << s << "\n";

    return 0;
}
