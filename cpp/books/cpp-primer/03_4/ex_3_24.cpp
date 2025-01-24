#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    int i;
    while (cin >> i) {
        v.push_back(i);
    }

    for (auto it = v.begin() + 1; it != v.end(); ++it)
        cout << *it + *(it - 1) << " ";

    cout << endl;

    for (auto l = v.begin(), r = v.end() - 1; l < r; ++l, --r)
        cout << (*l) + (*r) << " ";

    cout << endl;

    return 0;
}
