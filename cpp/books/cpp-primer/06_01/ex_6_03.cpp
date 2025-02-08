#include <iostream>

int fact(int v)
{
    int result  = 1;
    while (v > 1) {
        result *= v;
        v--;
    }
    return result;
}

int main()
{
    int v;
    std::cin >> v;
    std::cout << "Factorial of " << v << " is " << fact(v) << std::endl;
    return 0;
}
