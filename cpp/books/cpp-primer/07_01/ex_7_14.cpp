#include <iostream>
#include <string>

using std::string;

struct Sales_data {
    string bookNo;
    unsigned int units_count;
    double revenue;

    Sales_data(): bookNo("Sales_data"), units_count(0), revenue(0.0) {};
};

int main()
{
    Sales_data data;
    std::cout << data.bookNo << " " << data.units_count << " " << data.revenue << std::endl;
    return 0;
}
