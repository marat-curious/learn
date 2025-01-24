#include <cstddef>
#include <iostream>
#include <vector>

using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::ptrdiff_t;
using std::vector;

int main()
{
    int arr1[5] = {0,1,2,3,4};
    int arr2[5] = {0,1,2,3,4};

    ptrdiff_t arr1Size = end(arr1) - begin(arr1);
    ptrdiff_t arr2Size = end(arr2) - begin(arr2);

    if (arr1Size != arr2Size) {
        cout << "arrays are not equal" << endl;
        return 0;
    }

    int *p2 = &arr2[0];
    for (int *i = begin(arr1); i != end(arr1); ++i) {
        cout << *i << " " << *(p2 + (i - begin(arr1))) << endl;
        if (*i != *(p2 + (i - begin(arr1)))) {
            cout << "arrays are not equal" << endl;
            return 0;
        }
    }

    cout << "arrays are equal" << endl;

    vector<int> v1 = {0,1,2,3,4};
    vector<int> v2 = {0,1,2,3,5};

    cout << "are vectors equal: " << (v1 == v2) << endl;
    return 0;
}
