#include <iostream>
#include <stdint.h>

int main() 
{
    int32_t r = ~'q' << 6; // q = 0111001
    std::cout << r << std::endl;
    
    return 0;
}
