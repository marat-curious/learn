#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    /**
    for (auto &i : v)
        i *= i;
    for (auto i : v)
        cout << i << " ";
    */

    for (auto i = v.begin(); i != v.end(); ++i)
        (*i) *= (*i);
    for (vector<int>::const_iterator i = v.cbegin(); i != v.cend(); ++i)
        cout << *i << " ";

    cout << endl;

    return 0;
}
