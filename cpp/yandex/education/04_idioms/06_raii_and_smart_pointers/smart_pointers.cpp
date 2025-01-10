#include <iostream>
#include <memory>

int main() {
    int* ptr = new int(17); // ordinary pointer
    std::cout << *ptr << "\n"; // 17
    delete ptr;

    std::unique_ptr<int> smart = std::make_unique<int>(17); // instead new int(17)

    // auto smart2 = smart; // compilation error

    std::cout << *smart << "\n"; // 17

    return 0;
} // not need call delete 