#include <iostream>

int main()
{
    int v1 = 0;
    int v2 = 10;
    int *p1 = &v1;
    int *p2 = &v2;
    int *p3 = p1 + p2;
    std::cout << p3 << " -> " << *p3 << std::endl;
    return 0;
}
