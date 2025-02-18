#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;

istream &read(istream &is, int &d) {
    return cin >> d;
}

int main()
{
    int data1, data2;

    if (read(read(cin, data1), data2))
        cout << data1 << " " << data2 << endl;

    return 0;
}
