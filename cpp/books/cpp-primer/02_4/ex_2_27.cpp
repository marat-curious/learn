int main()
{
    int i2 = 42;

    int i = -1, &r = 0;
    int *const p2 = &i2;
    const int i1 = -1, &r1 = 0;
    const int *const p3 = &i2;
    const int *p1 = &i2;
    const int &const r2;
    const int i3 = i, &r3 = i;

    return 0;
}
