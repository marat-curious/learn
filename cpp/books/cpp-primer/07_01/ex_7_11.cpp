#include <iostream>
#include "./ex_7_11.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data data1;
    print(cout, data1) << endl;

    Sales_data data2("X_XXX_XX_XXX_XXXX");
    print(cout, data2) << endl;

    Sales_data data3("X_000_00_000_1234", 2, 4.2);
    print(cout, data3) << endl;

    return 0;
}
