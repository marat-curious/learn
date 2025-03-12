#include <iostream>
#include <list>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;

int main()
{
    list<const char*> lc = {"string1", "string2"};
    vector<string> vs(lc.begin(), lc.end());

    for (string s : vs)
        cout << s << "; ";

    cout << endl;

    return 0;
}
