#include <iostream>

int main() {
    unsigned int s = 0;
    unsigned long n;
    std::cin >> n;
    while(n >= 10) {
        unsigned short i = n % 10;
        s += i;
        n = n / 10;
    }
    std::cout << s + n << std::endl;
    return 0;
}
