#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words1 = {"a", "cat", "and", "a", "dog"};
    std::vector<std::string> words2(words1.size()); // 5 empty strings

    const std::string from = "a";
    const std::string to = "the";

    std::replace_copy(words1.begin(), words1.end(), words2.begin(), from, to);

    for (const auto& word : words1) {
        std::cout << word << " "; // a cat and a dog
    }

    std::cout << std::endl;

    for (const auto& word : words2) {
        std::cout << word << " "; // the cat and the dog
    }

    std::cout << std::endl;

    return 0;
}
