#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a; // type of expression a = b is `int&`

    std::cout << "a: " << a << std::endl;
    std::cout << "d: " << d << std::endl;

    return 0;
}
