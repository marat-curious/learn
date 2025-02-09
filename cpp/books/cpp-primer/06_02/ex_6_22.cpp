#include <iostream>

void swap(int *p1, int *p2)
{
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}

int main()
{
    int i1, i2;
    std::cin >> i1 >> i2;
    swap(&i1, &i2);
    std::cout << i1 << " " << i2 << std::endl;
    return 0;
}
