#include <vector>

using std::vector;

int main()
{
    vector<int> v1;
    const vector<int> v2;

    auto it1 = v1.begin();
    auto it2 = v2.cbegin(), it3 = v1.cbegin(), it4 = v2.cbegin();

    return 0;
}
