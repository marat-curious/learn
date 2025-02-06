#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int count;

    string s;
    cin >> s;

    for (char &c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            ++count;
    }

    cout << count << endl;

    return 0;
}
