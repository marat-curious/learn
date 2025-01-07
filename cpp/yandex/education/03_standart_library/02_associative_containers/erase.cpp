#include <unordered_map>
#include <string>

int main() {
    std::unordered_multimap<std::string, int> data = {
        {"a", 1},
        {"a", 2},
        {"a", 3},
        {"b", 4}
    };

    auto iter = data.find("a");
    if (iter != data.end()) {
        data.erase(iter); // remove first finded value
    }

    data.erase("a"); // remove all values with "a"

    return 0;
}
