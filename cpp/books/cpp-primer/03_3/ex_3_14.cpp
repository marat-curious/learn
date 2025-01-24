#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int n;
    vector<int> r;
    while (cin >> n)
        r.push_back(n);

    for (auto i : r)
        cout << i << " ";
    cout << endl;

    return 0;
}
