#include <iostream>

using std::cin;

int main()
{
    // unsigned scores[11] = {};
    unsigned grade;
    while (cin >> grade)
        if (grade <= 100)
            ++scores[grade/100];

    return 0;
}
