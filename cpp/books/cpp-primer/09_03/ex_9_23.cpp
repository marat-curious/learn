#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> c{1};

    if (!c.empty())
    {
        auto val1 = *c.begin(), val2 = c.front();
        auto last = c.end();
        auto val3 = *(--last); // can't decrement forward_list iterators
        auto val4 = c.back(); // not supported by forward_list

        cout << "val1 = " << val1 << "; val2 = " << val2 << "; val3 = " << val3 << "; val4 = " << val4 << endl;
    }

    return 0;
}
