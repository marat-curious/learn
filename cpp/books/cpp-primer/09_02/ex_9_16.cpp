#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    vector<int> v1(l1.begin(), l1.end());
    if (v1 < v2)
        cout << "list is less than vector";
    else if (v1 > v2)
        cout << "list is greater than vector";
    else
        cout << "list and vector are equals";

    cout << endl;

    return 0;
}
