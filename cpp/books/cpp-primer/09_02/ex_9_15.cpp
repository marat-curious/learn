#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1(8, 0);
    vector<int> v2(8);

    if (v1 == v2)
        cout << "vectors are equal" << endl;

    return 0;
}
