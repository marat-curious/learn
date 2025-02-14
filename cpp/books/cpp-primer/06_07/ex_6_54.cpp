#include <vector>

using std::vector;

int some_func(int, int);

typedef decltype(some_func) *sf1;
// or
using sf2 = decltype(some_func);

int main()
{
    vector<sf1> vec1;
    vector<sf2*> vec2;
    return 0;
}
