#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;

    int val1 = v.at(0);
    int val2 = v[0];
    int val3 = v.front();
    int val4 = v.back();

    cout << "val1 = " << val1 << "; val2 = " << val2 << "; val3 = " << val3 << "; val4 = " << val4 << endl;

    return 0;
}
