#include <iostream>

int count_add(int n)
{
    static size_t ctr = 0;
    ctr += n;
    return ctr;
}

int main()
{
    for (size_t i = 0; i != 8; ++i) {
        std::cout << count_add(i) << std::endl;
    }
    return 0;
}
