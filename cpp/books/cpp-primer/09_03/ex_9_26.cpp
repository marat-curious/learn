#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

    vector<int> iv(ia, ia + (sizeof(ia) / sizeof(int)));
    list<int> il(ia, ia + (sizeof(ia) / sizeof(int)));

    vector<int>::iterator itv = iv.begin();
    while(itv != iv.end())
        if (*itv % 2)
            ++itv;
        else
            itv = iv.erase(itv);

    list<int>::iterator itl = il.begin();
    while(itl != il.end())
        if (*itl % 2)
            itl = il.erase(itl);
        else
            ++itl;
            
    for (const int &i : iv)
        cout << i << " ";
    cout << endl;

    for (const int &i : il)
        cout << i << " ";
    cout << endl;

    return 0;
}
