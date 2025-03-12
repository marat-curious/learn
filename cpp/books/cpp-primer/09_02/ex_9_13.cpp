#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7};
    vector<int> vi(8, 0);

    vector<double> vdl(li.begin(), li.end());
    vector<double> vdv(vi.begin(), vi.end());

    for (double i : vdl)
        cout << i << " ";

    cout << endl;

    for (double i : vdv)
        cout << i << " ";

    cout << endl;

    return 0;
}
