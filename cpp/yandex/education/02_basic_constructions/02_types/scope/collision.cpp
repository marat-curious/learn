#include <iostream>

int main() {
    int x = 1;
    std::cout << x << "\n";

    {
        int x = 2; // new variable in this scope
        std::cout << x << "\n";
    }

    std::cout << x << "\n"; // output is `1`

    return 0;
}
