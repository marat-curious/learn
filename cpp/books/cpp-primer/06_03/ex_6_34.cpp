#include <iostream>

int factorial(int n)
{
    if (n != 0)
        return factorial(n - 1) * n;
    return 1;
}

int main()
{
    std::cout << factorial(5) << std::endl;
    return 0;
}
