#include <iostream>
#include "chapter6.h"

int main()
{
    int n;
    std::cin >> n;
    std::cout << "Factorial of " << n << " is " << fact(n) << std::endl;
    return 0;
}
