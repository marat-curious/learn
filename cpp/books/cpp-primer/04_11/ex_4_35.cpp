#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char cval = 'a';
    int ival = 1;
    unsigned int ui = 1;
    float fval = 1.0;
    double dval = 1.0;

    cval = 'a' + 3;
    fval = ui - ival * 1.0;
    dval = ui * fval;
    cval = ival + fval + dval;

    cout << "cval: " << cval << endl;
    cout << "fval: " << fval << endl;
    cout << "dval: " << dval << endl;
    cout << "cval: " << cval << endl;

    return 0;
}
