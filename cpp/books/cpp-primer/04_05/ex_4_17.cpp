#include <iostream>

int main()
{
    int i = 0, j = 0;
    i = ++j;
    std::cout << i << " " << j << std::endl;
    i = j++;
    std::cout << i << " " << j << std::endl;

    return 0;
}
