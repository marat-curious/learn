#include <iostream>
#include <string>

using std::string;

constexpr bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    std::cout << isShorter("test", "another test") << std::endl;
    return 0;
}
