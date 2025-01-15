#include <iostream> // header

int main()
{
    std::cout << "Enter two numbers: " << std::endl; // expression
    // `<<` - output operator
    // std::endl - special value called a manipulator
    // std:: prefix indicates namespace named `std`
    // :: - scope operator

    int v1 = 0, v2 = 0; // v1 nad v2 - variables of type `int`

    std::cin >> v1 >> v2;
    // `>>` - input operator

    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
