#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::string sought = "Q";

    std::cout << "To stop reading press 'Q'" << std::endl;
    
    // read until we hit end-of-file or find an input equal to sought
    while (std::cin >> s && s != sought)
        ; // null statement

    return 0;
}
