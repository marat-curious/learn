#include <iostream>

void reset(int &i)
{
    i = 0;
}

int main()
{
    int j = 0;
    std::cin >> j;
    std::cout << "J: " << j << std::endl;
    reset(j);
    std::cout << "J: " << j << std::endl;
    return 0;
}
