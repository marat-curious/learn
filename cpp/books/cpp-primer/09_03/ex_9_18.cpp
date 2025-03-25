#include <iostream>
#include <deque>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::string;

int main()
{
    string s;
    deque<string> ds;
    while(cin >> s)
        ds.push_back(s);

    for (deque<string>::const_iterator i = ds.cbegin(); i != ds.cend(); ++i)
        cout << *i << " ";

    cout << endl;

    return 0;
}
