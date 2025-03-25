#include <iostream>
#include <vector>

using std::vector;

int main()
{
    int val = 5;
    vector<int> v{0,1,2,3,4,5,6,7};
    vector<int>::iterator iter = v.begin(), mid = v.begin() + v.size() / 2;

    while(iter != mid)
        if (*iter == val)
            iter = v.insert(iter, 2 * val);
        ++iter;

    return 0;
}
