#include <iostream>
#include <vector>

int main() {
    const size_t m = 1000000;
    const size_t n = 1000;
    std::vector<std::string> v(m);

    // for (size_t i = 0; i != m; ++i) {
    for (auto& row : v) {
        // v[i].resize(n, '@'); // string of `@` of length `n`
        row.resize(n, '@');
    }

    size_t sum = 0;
    // for (auto row : v) {
    for (auto& row : v) {
        sum += row.size();
    }

    std::cout << sum << "\n";

    return 0;
}
