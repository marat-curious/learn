#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    bool isOccursTwice = false;
    std::string p, s;

    while (std::cin >> s) {
        if (p.size() == 0) {
            p = s;
            continue;
        }

        if (p == s) {
            isOccursTwice = true;
            break;
        }

        p = s;
    }

    if (isOccursTwice)
        cout << s << " occurs twice" << endl;
    else
        cout << "no repeated words" << endl;

    return 0;
}
