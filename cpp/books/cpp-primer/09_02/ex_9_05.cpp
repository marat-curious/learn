#include <iostream>
#include <vector>

using std::vector;

vector<int>::const_iterator has_element(vector<int>::const_iterator b, vector<int>::const_iterator e, const int x)
{
    while(b != e) {
        if (*b == x)
            return b;
        ++b;
    }
    return e;
}

int main()
{
    vector<int> v = {0,1,2,3,4,5,6,7};
    std::cout << *(has_element(v.begin(), v.end(), 8)) << std::endl;

    return 0;
}
