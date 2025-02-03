#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v = {"test1", "test2", "test3"};
    vector<string>::iterator iter = v.begin();

    cout << *iter++ << endl;
    cout << (*iter)++ << endl;
    cout << *iter.empty() << endl;
    cout << iter -> empty() << endl;
    cout << ++*iter << endl;
    cout << iter++ -> empty() << endl;

    return 0;
}
