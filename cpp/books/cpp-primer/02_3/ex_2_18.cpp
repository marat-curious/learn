#include <iostream>

int main()
{
    float *pi = nullptr;
    float i = 42.0;
    pi = &i;
    *pi = 3.14159;

    std::cout << "i: " << i << "\t&i: " << &i << "\tpi: " << pi << "\t*pi: " << *pi << std::endl;

    return 0;
}
