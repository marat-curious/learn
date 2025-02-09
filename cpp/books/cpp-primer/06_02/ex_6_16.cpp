#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_empty(const string &s)
{
    return s.empty();
}

int main()
{
    string str;
    cin >> str;

    cout << "string '" << str << "' is empty: " << (is_empty(str) ? "true" : "false") << endl;
    cout << "constant string " << is_empty("Hello World") << endl;

    return 0;
}
