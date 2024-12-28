#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> v1; // initialization empty vector
    std::vector<std::string> v2(5); // initialization with 5 empty strings
    std::vector<std::string> v3(5, "hello"); // initialization with 5 string "hello"

    std::vector<int> data = {1, 2, 3, 4, 5}; // initialization with data
    for (int elem : data) {
        std::cout << elem << " ";
    }
    std::cout << "\n";

    // get element in vector by index
    int a = data[0]; // 1
    int b = data[4]; // 5
    data[2] = -3; // replace 'data' vector element with index 2 to value -3

    // get vector size
    std::cout << data.size() << "\n";

    // 'at' function to check index existance
    std::cout << data[42] << "\n"; // undefined behaviour, index 42 not exists in 'data' vector
    std::cout << data.at(0) << "\n"; // 1
    std::cout << data.at(42) << "\n"; // exeption: std::out_of_range

    // 'front' and 'back' functions
    std::cout << data.front() << "\n"; // data[0];
    std::cout << data.back() << "\n"; // data[data.size() - 1]
    // call this function for empty vector executes undefined behaviour

    // 'empty' function
    if (!data.empty()) {
        // do something
    }

    // iteration
    for (size_t i = 0; i != data.size(); i++) {
        std::cout << data[i] << " ";
    }

    return 0;
}
