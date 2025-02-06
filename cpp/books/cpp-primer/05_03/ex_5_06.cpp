#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int score;
    cin >> score;

    if (score < 0) {
        cout << "enter number bigger than 0" << endl;
        return 1;
    }

    string grade = score < 60 ? "F" : (score < 70 ? "D" : (score < 80 ? "C" : (score < 90 ? "B" : (score < 100 ? "A" : "A++"))));

    cout << grade << endl;

    return 0;
}
