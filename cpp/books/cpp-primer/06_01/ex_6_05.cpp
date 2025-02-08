#include <iostream>

int abs(int v)
{
    return v < 0 ? (v * -1) : v;
}

int main()
{
    int v;
    std::cin >> v;

    std::cout << "Absolute value of " << v << " is " << abs(v) << std::endl;

    return 0;
}
