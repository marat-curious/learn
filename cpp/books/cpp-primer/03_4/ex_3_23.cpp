#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{0,1,2,3,4,5,6,7,8,9};
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        *i *= 2;
    for (int &c : v)
        cout << c << " ";
    cout << endl;
    return 0;
}
