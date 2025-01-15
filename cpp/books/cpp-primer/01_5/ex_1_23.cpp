#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, item;
    if (std::cin >> currItem) {
        int count = 1;
        while (std::cin >> item) {
            if (currItem.isbn() == item.isbn())
                ++count;
            else {
                std::cout << currItem.isbn() << ": " << count << std::endl;
                currItem = item;
                count = 1;
            }
        }
        std::cout << currItem.isbn() << ": " << count << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
