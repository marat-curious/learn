#include <iostream>
#include <string>

using std::string;

int main()
{
    string s = "word";
    string pl = s + s[s.size() - 1] == 's' ? "" : "s";

    std::cout << pl << std::endl;

    return 0;
}
