#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0,1,2,3,4,5,6,7};
    int a[8];

    for (int index = 0, *i = std::begin(a); i != std::end(a); ++i, ++index)
        *i = v[index];

    for (int &j : a)
        std::cout << j << " ";

    std::cout << std::endl;
    return 0;
}
