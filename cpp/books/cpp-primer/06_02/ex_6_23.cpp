#include <iostream>

using std::cout;

// print for C-style character strings
void print(const char *cp)
{
    if (cp)
        while (*cp)
            cout << *cp++;
}

// using standard library convention
void print(const int *beg, const int *end)
{
    while (beg != end)
        cout << *beg++;
}

// explicitly passing size parameter
void print(const int ia[], int size)
{
    for (size_t i = 0; i != size; ++i)
        cout << ia[i];
}

void print(const int *pi)
{
    if (pi)
        cout << *pi;
}

int main()
{
    int i = 0;
    int j[2] = {0, 1};

    print(&i);
    print(std::begin(j), std::end(j));
    print(j, 2);

    return 0;
}
