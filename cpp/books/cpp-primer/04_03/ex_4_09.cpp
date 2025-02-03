#include <iostream>

int main()
{
    const char *cp  = "Hello World";
    if (cp && *cp)
        std::cout << *cp << " " << cp << std::endl;

    return 0;
}
