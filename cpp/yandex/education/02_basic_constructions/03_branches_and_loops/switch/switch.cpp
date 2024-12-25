#include <cstdint>
#include <iostream>

int main() {
    int64_t a, b;
    char operation;
    std::cin >> a >> operation >> b;
    int64_t result;
    switch(operation) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            result = 0;
    }
    std::cout << result << "\n";
    return 0;
}
