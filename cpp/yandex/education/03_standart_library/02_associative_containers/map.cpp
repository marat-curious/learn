#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> years = {
        {"Moscow", 1147},
        {"Rome", -763},
        {"London", 47}
    };

    for (const std::pair<const std::string, int>& item : years) {
        std::cout << item.first << ": " << item.second << "\n";
    }

    // or

    for (const auto& [city, year] : years) {
        std::cout << city << ": " << year << "\n";
    }

    std::map<std::string, int> data;
    std::string key;
    int value;

    while (std::cin >> key >> value) {
        data[key] = value;
    }

    data.erase("hello");

    if (auto iter = data.find("test"); iter != data.end()) {
        std::cout << "Found the key " << iter -> first << " with the value " << iter -> second << "\n";
    } else {
        std::cout << "Not found\n";
    }

    return 0;
}
