#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;

    std::cout << "r1: " << r1 << "\tr2: " << r2 << std::endl;
    std::cout << "i: " << i << "\td: " << d << std::endl;

    return 0;
}
