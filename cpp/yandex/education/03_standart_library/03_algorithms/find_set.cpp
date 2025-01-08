#include <algorithm>
#include <set>

int main() {
    std::set<int> numbers = {2, 3, 5, 7, 11, 13, 17, 19};

    auto iter1 = numbers.find(15);

    auto iter2 = std::find(number.begin(), numbers.end(), 15);

    return 0;
}
