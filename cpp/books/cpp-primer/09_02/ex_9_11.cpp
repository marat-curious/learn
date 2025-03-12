#include <vector>

using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2 = {0,1,2,3,4,5,6,7};
    vector<int> v3{0,1,2,3,4,5,6,7};
    vector<int> v4(8);
    vector<int> v5(8, 0);
    vector<int> v6(v3.begin(), v3.end());
    vector<int> v7(v3);

    return 0;
}
