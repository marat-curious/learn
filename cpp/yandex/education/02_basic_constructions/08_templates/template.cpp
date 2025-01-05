#include <iostream>
#include <string>

/**
int Max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

double Max(double x, double y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

std::string Max(std::string& x, std::string& y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}
*/

// or template

template <typename T>
T Max(const T& x, const T& y) {
    if (x > y) { // here defined operator `>`, if structure not support it, returns compilation error
        return x;
    } else {
        return y;
    }
}

struct Point {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
};

int main() {
    std::cout << Max<int>(1, 2) << "\n"; // 2
    std::cout << Max<double>(3.14159, 2.71828) << "\n"; // before overloading function Max: 3

    std::string word1 = "hello";
    std::string word2 = "world";
    std::cout << Max<std::string>(word1, word2) << "\n"; // compilation error, if Max hasn't overloading for over argument types

    Point p1, p2;
    // compilation error: invalid operands to binary expression ('const Point' and 'const Point')
    // struct Point not supports `>` operator
    // Point p = Max(p1, p2);

    return 0;
}
