#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned> scores(11, 0);
    vector<unsigned>::iterator iter = scores.begin();
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            // ++scores[grade / 10];
            ++(*(iter + (grade / 10)));
    }

    for (vector<unsigned>::iterator it = scores.begin(); it != scores.end(); ++it)
        cout << *it << " ";

    cout << endl;

    return 0;
}
