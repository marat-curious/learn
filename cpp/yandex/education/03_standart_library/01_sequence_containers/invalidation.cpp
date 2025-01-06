#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4};

    auto iter = v.begin(); // iterator
    int* ptr = &v.front(); // pointer
    int& ref = v.front(); // reference

    std::cout << *iter << " " << *ptr << " " << ref << "\n"; // 1 1 1

    v.push_back(5); // reallocation

    // std::cout << *iter << " " << *ptr << " " << ref << "\n"; // undefined behaviour

    return 0;
}
