#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<const int> l)
{
    int s = 0;
    for (const int &i : l)
        s += i;
    return s;
}

int main()
{
    std::cout << sum({1, 2, 3, 4, 5}) << std::endl;
    return 0;
}
