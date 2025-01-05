#include <iostream>
#include <string>
#include <vector>

std::string Concatenate(std::vector<std::string>& parts) {
    std::string result;
    for (const auto& part : parts) {
        result += part;
    }
    return result;
}

int& Sum(int a, int b) { // error, returns reference on local variable
    int result = a + b;
    return result;
}

int main() {
    std::vector<std::string> parts = {"abra", "ca", "dabra"};
    std::cout << Concatenate(parts) << "\n"; // abracadabra

    std::cout << Sum(2, 3) << "\n"; // undefined behaviour
    return 0;
}
