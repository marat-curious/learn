#include <iostream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n1, n2;
    cin >> n1;

    second_try:

    cin >> n2;

    try {
        if (n2 == 0)
            throw std::runtime_error("Division by zero");
        cout << (n1 / n2) << endl;
    } catch (std::runtime_error e) {
        cout << e.what() << endl;
        goto second_try;
    }

    return 0;
}
