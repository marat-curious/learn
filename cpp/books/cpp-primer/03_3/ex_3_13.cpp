#include <string>
#include <vector>

using std::string;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4(10);
    vector<int> v5(10, 42);
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    return 0;
}
