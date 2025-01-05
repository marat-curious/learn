#include <iostream>
#include <string>

void Print(int value) {
    std::cout << value << "\n";
}

void Print(const std::string& name, int value) {
    std::cout << name << ": " << value << "\n";
}

void Print(const std::string& str) {
    std::cout << str << "\n";
}

int f(int x) {
    return x;
}

int f(int y) { // compilation error, function with this name and argument type exists
    return 2 * y;
}

double f(int x) { // compilation error, overload function by return type is not valid
    return 3.0 * x;
}

int main() {
    Print(42);
    Print("x", 42);
    Print("Hello");
    return 0;
}
