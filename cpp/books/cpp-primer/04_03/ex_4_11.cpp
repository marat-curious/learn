#include <iostream>

int main()
{
    int a = 8, b = 7, c = 6, d = 5;
    if (a > b && b > c && c > d)
        std::cout << "a is bigger than others" << std::endl;

    return 0;
}
