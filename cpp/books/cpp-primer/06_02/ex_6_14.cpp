// example taken from https://github.com/Mooophy/Cpp-Primer
#include <iostream>
#include <vector>

// reference type
void reset(int &i)
{
    i = 0;
}

// a parameter not a reference
void print(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator i = begin; i != end; ++i)
        std::cout << *i << std::endl;
}

int main()
{
    return 0;
}
