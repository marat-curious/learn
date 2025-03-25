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
    string word;
    vector<string> v;
    vector<string>::const_iterator i = v.begin();
    while(cin >> word)
        i = v.insert(i, word);

    for (string s : v)
        cout << s << " ";
    cout << endl;

    return 0;
}
