#include <iostream>

using std::cout;
using std::endl;

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

void f()
{
    cout << "f()" << endl;
}

void f(int i)
{
    cout << "f(int)" << endl;
    cout << "arguments: " << i << endl;
}

void f(int i1, int i2)
{
    cout << "f(int, int)" << endl;
    cout << "arguments: " << i1 << ", " << i2 << endl;
}

void f(double d1, double d2)
{
    cout << "f(double, double = 3.14)" << endl;
    cout << "arguments: " << d1 << ", " << d2 << endl;
}

int main()
{
    // a
    // f(2.56, 42);

    // b
    f(42);

    // c
    f(42, 0);

    // d
    f(2.56, 3.14);

    return 0;
}
