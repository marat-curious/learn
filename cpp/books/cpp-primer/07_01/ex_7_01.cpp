#include <iostream>
#include "../02_6/sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    Sales_data total;

    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    
    return 0;
}
