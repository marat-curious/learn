#include <iostream>

void swap(int &r1, int &r2)
{
    int temp = r1;
    r1 = r2;
    r2 = temp;
}

int main()
{
    int i1, i2;
    std::cin >> i1 >> i2;

    std::cout << "You entered: " << i1 << " and " << i2 << std::endl;

    swap(i1, i2);

    std::cout << "After swap function call: " << i1 << " and " << i2 << std::endl;

    return 0;
}
