#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    while (cin >> s) {
        for (char &c : s)
            c = 'X';

        cout << s << endl;

        for(decltype(s.size()) i = 0; i != s.size(); ++i)
            s[i] = 'Y';

        cout << s << endl;

        decltype(s.size()) j = 0;
        while (j < s.size()) {
            s[j] = 'Z';
            ++j;
        }

        cout << s << endl;
    }
    return 0;
}
