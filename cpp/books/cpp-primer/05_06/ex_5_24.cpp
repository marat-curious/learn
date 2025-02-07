#include <iostream>
#include <stdexcept>

int main()
{
    int n1, n2;
    std::cin >> n1 >> n2;

    try {
        if (n2 == 0)
            throw std::runtime_error("Division by zero");
        std::cout << (n1 / n2) << std::endl;
    } catch (std::runtime_error e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
