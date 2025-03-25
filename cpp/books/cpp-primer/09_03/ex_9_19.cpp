#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    list<string> ls;
    for (string s; cin >> s; ls.push_back(s));
    for (list<string>::const_iterator i = ls.cbegin(); i != ls.cend(); ++i)
        cout << *i << " ";

    cout << endl;

    return 0;
}
