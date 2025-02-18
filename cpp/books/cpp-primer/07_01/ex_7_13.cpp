#include <iostream>
#include "ex_7_12.hpp"

using std::cerr;
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    Sales_data total(cin);
    if (total.isbn().size() > 0) {
        Sales_data trans(cin);
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
    }
    return 0;
}
