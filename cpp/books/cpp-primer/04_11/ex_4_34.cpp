#include <iostream>

int main()
{
    char cval = 'a';
    int ival = 1;
    float fval = 1.0;
    double dval = 1.0;

    if (fval)
        std::cout << "fval converted to bool" << std::endl;

    dval = fval + ival;
    std::cout << dval << std::endl;

    std::cout << (dval + ival * cval) << std::endl;

    return 0;
}
