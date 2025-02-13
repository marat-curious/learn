#include <cassert>
#include <iostream>
#include <string>

using std::cin;
using std::string;

int main()
{
    string s;
    string sought = "N";
    while (cin >> s && s != sought)
        ; // empty body
    assert(cin);
    return 0;
}
