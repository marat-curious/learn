#include <iostream>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int i1, i2;
    std::cin >> i1 >> i2;

    std::cout << "You entered: " << i1 << " and " << i2 << std::endl;

    swap(&i1, &i2);

    std::cout << "After swap function call: " << i1 << " and " << i2 << std::endl;

    return 0;
}
