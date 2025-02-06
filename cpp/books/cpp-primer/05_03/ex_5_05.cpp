#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int score;
    cin >> score;

    if (score < 0) {
        cout << "enter number bigger than 0" << endl;
        return 1;
    }

    if (score < 60) {
        cout << "F" << endl;
    } else if (score < 70) {
        cout << "D" << endl;
    } else if (score < 80) {
        cout << "C" << endl;
    } else if (score < 90) {
        cout << "B" << endl;
    } else if (score < 100) {
        cout << "A" << endl;
    } else {
        cout << "A++" << endl;
    }

    return 0;
}
