#include <iostream>
#include <string>

using std::string;

bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;

    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return; // error #1: no return value
    }

    // error #2: no return
}

int main()
{
    string s1 = "Hello", s2 = "World";
    bool result = str_subrange(s1, s2);
    std::cout << (result ? "true" : "false") << std::endl;
    return 0;
}
