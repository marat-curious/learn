#include <iostream>

int main()
{
    int n;
    while (n != 42) {
        std::cin >> n;
        std::cout << n * 2 << std::endl;
    }

    return 0;
}
