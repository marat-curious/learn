#include <vector>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};

    data.reserve(10); // change reserve, but not size of vector

    data.resize(3); // remove 4 and 5
    data.resize(6); // vector = {1, 2, 3, 0, 0, 0}

    return 0;
}
