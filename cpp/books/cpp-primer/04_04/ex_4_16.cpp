#include <iostream>

int *getPtr()
{
    int p = 42;
    int *pi = &p;
    return pi;
}

int main()
{
    int *p;
    if (p = getPtr() != 0)
        std::cout << p << " in if statement" << std::endl;

    int i;
    if (i = 1024)
        std::cout << i << " in if statement" << std::endl;

    return 0;
}
