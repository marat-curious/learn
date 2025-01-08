#include <algorithm>
#include <map>
#include <utility>

int main() {
    std::map<int, int> m = {
        {1, 30},
        {2, 28},
        {3, 31},
        // ...
    };

    auto it1 = m.find(12); // correct version of search
    // auto it2 = std::find(m.begin(), m.end(), 12); // compilation error

    std::pair<const int, int> value = {12, 31};
    auto it3 = std::find(m.begin(), m.end(), value); // compiled, but not effective

    return 0;
}
