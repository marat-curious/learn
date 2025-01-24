#include <iostream>
#include <string>

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    if (s1 == s2) {
        std::cout << "String '" << s1 << "' is equal to string '" << s2 << "'" << std::endl;
    } else {
        if (s1 > s2)
            std::cout << "String '" << s1 << "' is larger than string '" << s2 << "'" << std::endl;
        else
            std::cout << "String '" << s2 << "' is larger than string '" << s2 << "'" << std::endl;
    }

    if (s1.size() == s2.size()) {
        std::cout << "The strings are same length" << std::endl;
    } else {
        if (s1.size() > s2.size()) {
            std::cout << "\'" << s1 << "\'" << "is larger than \'" << s2 << "\'" << std::endl;
        } else {
            std::cout << "\'" << s2 << "\'" << "is larger than \'" << s1 << "\'" << std::endl;
        }
    }

    return 0;
}
