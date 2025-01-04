#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    bool is_palindrome = true;
    size_t i = 0;
    size_t j = s.length() - 1;
    while (i < j) {
        if (s[i] == ' ') {
            ++i;
            continue;
        }
        if (s[j] == ' ') {
            --j;
            continue;
        }

        if (s[i] != s[j]) {
            is_palindrome = false;
            break;
        }

        ++i;
        --j;
    }

    if (is_palindrome) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
