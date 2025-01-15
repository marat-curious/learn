#include <iostream>
#include "sales_data.h"

int main()
{
    Sales_data data;
    while (std::cin >> data.bookNo >> data.units_sold >> data.revenue)
        std::cout << data.bookNo << " " << data.units_sold << " " << data.revenue << std::endl;
    return 0;
}
