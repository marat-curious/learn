#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p1 = &arr[1];
    int *p2 = &arr[5];

    cout << "p1: " << *p1 << endl;
    cout << "p2: " << *p2 << endl;

    p1 += p2 - p1;

    cout << "p1: " << *p1 << endl;

    return 0;
}
