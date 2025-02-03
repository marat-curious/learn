#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0,1,2,3,4,5,6,7};
    for (int &i : v)
        i = i % 2 == 0 ? i * 2 : i;

    for (int &i : v)
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;
}
