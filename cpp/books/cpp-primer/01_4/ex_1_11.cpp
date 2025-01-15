#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;

    int i = a;
    while (i <= b) {
        std::cout << i << std::endl;
        ++i;
    }

    return 0;
}
