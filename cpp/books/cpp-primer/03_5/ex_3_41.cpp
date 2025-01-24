#include <iostream>
#include <vector>

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    std::vector<int> varr(std::begin(arr), std::end(arr));

    for (int &i : varr)
        std::cout << i << ", ";

    std::cout << std::endl;
    return 0;
}
