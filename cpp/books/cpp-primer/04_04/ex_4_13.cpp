#include <iostream>

int main()
{
    int i;
    double d;
    d = i = 3.5;
    std::cout << d << " " << i << std::endl;
    i = d = 3.5;
    std::cout << d << " " << i << std::endl;

    return 0;
}
