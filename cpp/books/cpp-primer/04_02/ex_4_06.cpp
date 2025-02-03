#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int mod = n % 2;

    if (mod != 0)
        std::cout << "number is odd" << std::endl;
    else
        std::cout << "number is even" << std::endl;

    return 0;
}
