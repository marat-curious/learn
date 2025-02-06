#include <iostream>

using std::cout;
using std::endl;

int get_value()
{
    return 42;
}

int main()
{
    int minval = 0, ival1 = 1, ival2 = 2;
    int occurs = 0;

    // a
    if (ival1 != ival2)
        ival1 = ival2;
    else
        ival1 = ival2 = 0;

    // b
    int ival = 0;

    if (ival < minval) {
        minval = ival;
        occurs += 1;
    }

    // c
    if (ival == get_value())
        cout << "ival = " << ival << endl;

    if (!ival)
        cout << "ival = " << 0 << "\n";

    // d
    if (ival == 0)
        ival = get_value();

    return 0;
}
