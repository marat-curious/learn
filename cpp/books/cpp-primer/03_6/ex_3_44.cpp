#include <iostream>

using std::begin;
using std::cout;
using std::endl;

int main()
{
    using int_arr = int[4];

    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    // or
    // int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (int_arr &row : ia) {
        for (int &j : row)
            cout << j << " ";
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i != 3; ++i) {
        for (int j = 0; j != 4; ++j)
            cout << ia[i][j] << " ";
        cout << endl;
    }

    cout << endl;

    for (int_arr *i = ia; i != ia + 3; ++i) {
        for (int *j = *i; j != *i + 4; ++j)
            cout << *j << " ";
        cout << endl;
    }

    cout << endl;

    return 0;
}
