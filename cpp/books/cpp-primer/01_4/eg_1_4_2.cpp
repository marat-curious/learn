#include <iostream>

int main()
{
    int sum = 0;
    // sum values from 1 through 10 inclusive
    for (int val = 1; val <= 10; ++val) 
        sum += val;
    std::cout << "Sum of 1 to 10 inclusize is " << sum << std::endl;
    return 0;
}
