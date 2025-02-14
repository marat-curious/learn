#include <iostream>
#include <vector>

using std::vector;

typedef int(*f)(int, int);

int sum(int a, int b)
{
    return a + b;
};

int subtract(int a, int b)
{
    return a - b;
};

int multiply(int a, int b)
{
    return a * b;
};

int divide(int a, int b)
{
    return a / b;
};

int main()
{
    vector<f> vec;
    vec.push_back(*sum);
    vec.push_back(*subtract);
    vec.push_back(*multiply);
    vec.push_back(*divide);

    for (f i : vec)
        std::cout << i(5, 5) << std::endl;

    return 0;
}
