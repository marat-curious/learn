/**
 * Create input file with sample data, example:
 * X-XXX-XXXXX-XX-0 3 5.5
 * X-XXX-XXXXX-XX-3 2 7.15
 * X-XXX-XXXXX-XX-3 8 2.72
 * X-XXX-XXXXX-XX-1 7 9.3
 * X-XXX-XXXXX-XX-1 6 3.8
 */

#include <fstream>
#include <iostream>
#include "../07_03/ex_7_26.hpp"

using std::cout;
using std::endl;
using std::cerr;
using std::ifstream;
using std::ofstream;

int main(int argc, char **argv)
{
    if (argc < 2) {
        cout << "need speicify input data as file" << endl;
        return 0;
    }

    ifstream ifs(argv[1]);
    ofstream ofs("output");

    Sales_data total;
    if (read(ifs, total)) {
        Sales_data trans;
        while(read(ifs, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(ofs, total) << endl;
                total = trans;
            }
        }
        print(ofs, total) << endl;
    } else {
        cerr << "No data?!" << endl;
    }

    ifs.close();
    ofs.close();

    return 0;
}
