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
    while (cin >> i)
        v.push_back(i);
    
    for (decltype(v.size()) index = 1; index < v.size(); ++index) {
        cout << v[index - 1] + v[index] << "\t";
    }
    cout << endl;

    for (decltype(v.size()) l = 0, r = (v.size() - 1); l < r; ++l, --r) {
        cout << v[l] + v[r] << "\t";
    }
    cout << endl;

    return 0;
}
