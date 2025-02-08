#include <iostream>

int generate(int n)
{
    static size_t result = 0;
    result += n;
    return result;
}

int main()
{
    for (size_t i = 0; i != 8; ++i)
        std::cout << generate(i) << std::endl;
    return 0;
}
