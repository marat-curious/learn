#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int get_response()
{
    return 0;
}

int main()
{
    // a
    do {
        int v1, v2;
        cout << "Please enter two numbers to sum: ";
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    } while (cin);

    // b
    int ival1 = 0;
    do {
        // ...
    } while (ival1 != get_response());

    // c
    int ival2 = 0;
    do {
        ival2 = get_response();
    } while (ival2);

    return 0;
}
