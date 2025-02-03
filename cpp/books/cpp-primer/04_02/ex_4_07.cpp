#include <iostream>

using std::cout;
using std::endl;

int main()
{
    short s = 32767;
    ++s;

    cout << s << endl;

    unsigned ui = 0;
    --ui;

    cout << ui << endl;

    unsigned short us = 65535;
    ++us;

    cout << us <<endl;

    return 0;
}
