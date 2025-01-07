#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> freqs;
    freqs.reserve(300'000);
    std::string word;

    while (std::cin >> word) {
        ++freqs[word];
    }

    for (const auto& [word, freq] : freqs) {
        std::cout << word << "\t" << freq << "\n";
    }

    return 0;
}
