#include <iostream>
#include "ex_7_42.hpp"

using std::cout;
using std::endl;

int main()
{
    Date d1 = Date();
    cout << d1.get_year() << "." << d1.get_month() << "." << d1.get_day() << endl;

    Date d2 = Date(2026);
    cout << d2.get_year() << "." << d2.get_month() << "." << d2.get_day() << endl;

    Date d3 = Date(2027, 8);
    cout << d3.get_year() << "." << d3.get_month() << "." << d3.get_day() << endl;

    Date d4 = Date(2025, 7, 5);
    cout << d4.get_year() << "." << d4.get_month() << "." << d4.get_day() << endl;

    return 0;
}
