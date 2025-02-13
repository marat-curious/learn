#include <iostream>

void manip(int, int);
double dobj;

void manip(int i, int j)
{
    std::cout << "manip function call with: " << i << ", " << j << std::endl;
}

int main()
{
    manip('a', 'z');
    manip(55.4, dobj);

    return 0;
}
