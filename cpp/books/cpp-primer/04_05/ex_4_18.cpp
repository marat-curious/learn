#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0,1,2,3,4,5,6,7};
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
        std::cout << *++pbeg << std::endl;

    return 0;
}
