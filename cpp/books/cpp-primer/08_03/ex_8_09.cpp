#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::istream;
using std::istringstream;
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
    istringstream iss("istringstream object");
    istream &is = read(iss);
    cout << "after function 'read'" << endl;
    cout << "stream is good: " << is.good() << " or bad: " << is.bad() << endl;

    return 0;
}
