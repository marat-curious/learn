#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string n;
    vector<string> r;
    while (cin >> n)
        r.push_back(n);

    for (auto i : r)
        cout << i << "\t";
    cout << endl;

    return 0;
}
