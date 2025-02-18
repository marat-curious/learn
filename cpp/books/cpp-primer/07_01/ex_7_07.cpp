#include <iostream>
#include "./ex_7_06.hpp" // Sample_data

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    Sales_data total;

    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                add(total, trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    
    return 0;
}
