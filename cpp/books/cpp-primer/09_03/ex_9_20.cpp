#include <deque>
#include <iostream>
#include <list>

using std::cout;
using std::deque;
using std::endl;
using std::list;

int main()
{
    list<int> li{0,1,2,3,4,5,6,7};
    deque<int> di_even, di_odd;

    for (list<int>::const_iterator i = li.cbegin(); i != li.cend(); ++i) {
        if (*i % 2 == 0)
            di_even.push_back(*i);
        else
            di_odd.push_back(*i);
    }

    cout << "Even: ";
    for (const int &i : di_even)
        cout << i << " ";
    cout << endl;

    cout << "Odd: ";
    for (const int &i : di_odd)
        cout << i << " ";
    cout << endl;

    return 0;
}
