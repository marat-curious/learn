#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

int main()
{
    unsigned int arr[5];
    for (unsigned int *i = begin(arr); i != end(arr); ++i)
        *i = 0;

    for (auto &j : arr)
        cout << j << endl;

    return 0;
}
