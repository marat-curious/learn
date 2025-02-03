#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{
    std::vector<int> vec = {0,1,2,3,4,5,6,7};
    int ival = 2;
    int *ptr = &ival;

    cout << (ptr != 0 && *ptr++) << " " << *ptr << endl;
    cout << (ival++ && ival) << " " << ival << endl;
    cout << (vec[ival++] < vec[ival]) << endl;

    return 0;
}
