#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo = "";
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    // 1.20
    /**
     *
     * Sales_data data;
     * while (std::cin >> data.bookNo >> data.units_sold >> data.revenue)
     *     std::cout << data.bookNo << " " << data.units_sold << " " << data.revenue << std::endl;
     */

    // 1.21
    Sales_data data1, data2;
    double sum = 0.0;
    std::cin >> data1.bookNo >> data1.units_sold >> data1.revenue;
    std::cin >> data2.bookNo >> data2.units_sold >> data2.revenue;
    if (data1.bookNo == data2.bookNo)
        sum += data1.units_sold * data1.revenue + data2.units_sold * data2.revenue;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
