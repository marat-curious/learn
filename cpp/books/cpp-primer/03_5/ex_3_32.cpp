#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using std::size_t;

int main()
{
    constexpr size_t size = 10;
    int arr1[size] = {};
    for (size_t i = 0; i != size; ++i)
        arr1[i] = i;

    int arr2[size] = {};
    for (size_t i = 0; i != size; ++i)
        arr2[i] = arr1[i];

    for (int &i : arr1)
        cout << i << " ";
    cout << endl;

    for (int &j : arr2)
        cout << j << " ";
    cout << endl;

    return 0;
}
