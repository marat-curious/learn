#include <iostream>
#include <vector>

int main() {
    size_t m, n;
    std::cin >> m >> n; // rows and columns count

    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));

    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout <<  "\n";
    }

    return 0;
}
