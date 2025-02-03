#include <iostream>

using std::cout;
using std::endl;

struct St {
    int mem[2] = {0,1};
};

int f()
{
    return 1;
}

int main()
{
    int x = 1, y = 2;
    size_t sxy = sizeof x + y;
    cout << sxy << endl;

    struct St t;
    struct St *p = &t;
    int i = 0;
    size_t sp = sizeof p->mem[i];
    cout << sp << endl;

    int a = 3, b = 3;
    size_t sab = sizeof a < b;
    cout << sab << endl;

    size_t sf = sizeof f();
    cout << sf << endl;

    return 0;
}
