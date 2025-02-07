#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    bool isPrefix = true;

    vector<int> v1 = {0,1,1,2};
    vector<int> v2 = {0,1,1,2,3,5,8};

    decltype(v1.size()) minSize = v1.size() > v2.size() ? v2.size() : v1.size();

    for (size_t i = 0; i != minSize; ++i) {
        if (v1[i] != v2[i]) {
            isPrefix = false;
            break;
        }
    }

    cout << "is prefix: " << (isPrefix ? "true" : "false") << endl;

    return 0;
}
