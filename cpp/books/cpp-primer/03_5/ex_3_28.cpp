#include <iostream>
#include <string>

using std::string;

string sa[10];
int ia[10];

int main()
{
    for (auto &c : sa)
        std::cout << c;
    std::cout << std::endl;

    for (int &i : ia)
        std::cout << i;
    std::cout << std::endl;

    string sa2[10];
    int ia2[10];

    for (auto &c : sa2)
        std::cout << c;
     std::cout << std::endl;

     for (int &i : ia2)
        std::cout << i;
     std::cout << std::endl;

    return 0;
}
