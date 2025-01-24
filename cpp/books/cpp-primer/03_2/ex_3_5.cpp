#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string line, str, word;

    // while (cin >> word)
    //     str += word;

    while (getline(cin, line))
       str += " " + line;

    cout << str << endl;

    return 0;
}
