void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{
    // a
    f(2.56, 42);

    // b
    f(42);

    // c
    f(42, 0);

    // d
    f(2.56, 3.14);

    return 0;
}
