#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string password;
    std::cin >> password;

    size_t size = password.size();
    if (size < 8 || size > 14) {
        std::cout << "NO\n";
        return 0;
    }

    // indexes: 0 - numbers, 1 - uppercase, 2 - lowercase, 3 - symbols
    std::vector<short> groups = {0, 0, 0, 0};
    char c;

    for (size_t i = 0; i != size; ++i) {
        c = password[i];
        if (c < 33 || c > 126) {
            std::cout << "NO\n";
            return 0;
        }

        if ('A' <= c && c <= 'Z') {
            groups[1] += 1;
        } else if ('a' <= c && c <= 'z') {
            groups[2] += 1;
        } else if ('0' <= c && c <= '9') {
            groups[0] += 1;
        } else {
            groups[3] += 1;
        }
    }

    short count = 0;
    for (size_t i = 0; i != groups.size(); ++i) {
        if (groups[i]) {
            ++count;
        }
    }

    if (count >= 3) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
