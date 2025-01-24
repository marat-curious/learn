#include <iostream>
#include <cstring>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1 = "string1";
    string s2 = "string2";

    if (s1 == s2)
        cout << "strings are equal" << endl;
    else
        cout << "strings are not equal" << endl;

    char cs1[] = {'s', 't', 'r', 'i', 'n', 'g', '1', '\0'};
    char cs2[] = {'s', 't', 'r', 'i', 'n', 'g', '2', '\0'};

    if (strcmp(cs1, cs2) == 0)
        cout << "c-style strings are equal" << endl;
    else
        cout << "c-style strings are not equal" << endl;

    return 0;
}
