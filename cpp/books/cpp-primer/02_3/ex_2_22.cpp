#include <iostream>

int main()
{
    int i = 42;
    int *p = &i;

    if (p)
        std::cout << "p: " << p << std::endl;

    if (*p)
        std::cout << "*p: " << *p << std::endl;

    return 0;
}
