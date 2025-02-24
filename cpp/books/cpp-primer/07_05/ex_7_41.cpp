#include <iostream>
#include "ex_7_41.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "data1 initialization:" << endl;
    Sales_data data1 = Sales_data();
    cout << endl;

    cout << "data2 initialization:" << endl;
    Sales_data data2 = Sales_data("X-XXX-XXXXX-XX");
    cout << endl;

    cout << "data3 initialization:" << endl;
    Sales_data data3 = Sales_data(cin);
    cout << endl;

    return 0;
}
