#include <iostream>

int main()
{
    int x = 1, y = 2;
    bool someValue = true;
    someValue ? ++x, ++y : --x, --y;
    std::cout << "x: " << x << " " << "y: " << y << std::endl;

    return 0;
}
