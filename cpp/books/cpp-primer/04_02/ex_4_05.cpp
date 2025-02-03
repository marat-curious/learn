#include <iostream>

int main()
{
    double a = -30 * 3 + 21 / 5;
    double b = -30 + 3 * 21 / 5;
    double c = 30 / 3 * 21 % 5;
    double d = -30 / 3 * 21 % 4;

    std::cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;

    return 0;
}
