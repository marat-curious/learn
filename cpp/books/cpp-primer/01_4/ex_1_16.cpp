#include <iostream>

int main()
{
    int sum = 0;
    int val = 0;
    std::cout << "Press Ctrl + d to stop entering numbers: " << std::endl;
    while (std::cin >> val)
        sum += val;
    std::cout << sum << std::endl;
    return 0;
}
