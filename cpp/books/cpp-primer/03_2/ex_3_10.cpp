#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::ispunct;
using std::string;

int main()
{
    string s, r;
    while (getline(cin, s)) {
        for (auto &c : s)
            if (ispunct(c))
                continue;
            else
                r += c;

        cout << r << endl;
    }

    return 0;
}
