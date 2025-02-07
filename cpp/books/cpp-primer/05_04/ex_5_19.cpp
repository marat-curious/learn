#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string response;
    do {
        cout << "Enter two strings to compare: ";
        string s1, s2;
        cin >> s1 >> s2;
        cout << "string " << (s1.size() > s2.size() ? s2 : s1) << " is less than another" << endl;
    } while (!response.empty() && response[0] != 'n');

    return 0;
}
