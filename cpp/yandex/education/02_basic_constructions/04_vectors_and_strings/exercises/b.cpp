#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string word;
    std::string result;
    std::string answer;

    std::cin >> word;

    std::vector<std::vector<char>> checks = {
        {'a', 'e', 'h', 'i', 'o', 'u', 'w', 'y'},
        {'b', 'f', 'p', 'v'},
        {'c', 'g', 'j', 'k', 'q', 's', 'x', 'z'},
        {'d', 't'},
        {'l'},
        {'m', 'n'},
        {'r'}
    };

    for (size_t i = 0; i != word.length(); ++i) {
        if (i == 0) {
            result += word[i];
            continue;
        }

        bool is_found = false;
        for (size_t k = 0; k != checks.size(); ++k) {
            for (size_t l = 0; l != checks[k].size(); ++l) {
                if (checks[k][l] == word[i]) {
                    is_found = true;
                    if (k == 0) {
                        break;
                    } else {
                        result += std::to_string(k);
                    }
                }

            }

            if (is_found) {
                break;
            }
        }
    }

    answer += result.substr(0, 2);
    for (size_t i = 2; i != result.length(); ++i) {
        if (result[i] != result[i - 1]) {
            answer += result[i];
        }
    }

    if (answer.length() < 4) {
        for (size_t i = answer.length(); i != 4; ++i) {
            answer += '0';
        }
    } else if (answer.length() > 4) {
        answer = answer.substr(0, 4);
    }

    std::cout << answer << std::endl;
    
    return 0;
}
