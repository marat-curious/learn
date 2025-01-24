#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using std::size_t;

int main()
{
    constexpr size_t asize = 10;
    int arr[asize] = {};
    for (size_t i = 0; i != asize; ++i)
        arr[i] = i;

    for (auto &i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}
