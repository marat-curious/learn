#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;

istream &read(istream &is)
{
    string s;
    while(is >> s) {
        cout << s << endl;
    }

    is.clear();
    return is;
}

int main()
{
    cout << "before function 'read'" << endl;
    istream &is = read(cin);
    cout << "after function 'read'" << endl;
    cout << "stream is good: " << is.good() << " or bad: " << is.bad() << endl;

    return 0;
}
