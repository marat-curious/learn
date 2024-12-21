#include <iostream>

int main() {
    unsigned int a = 12345; // on 64 bits platform sizeof(a) = 4

    std::cout << a * a << "\n"; // overflow int type
    return 0;
}
