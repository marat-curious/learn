#include <iostream>

int get_max(const int n1, const int *n2)
{
    return (n1 > *n2) ? n1 : *n2;
}

int main()
{
    int m1, m2;
    std::cin >> m1 >> m2;

    std::cout << "bigger number is: " << get_max(m1, &m2) << std::endl;
    return 0;
}
