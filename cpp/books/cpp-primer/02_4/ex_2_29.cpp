int main()
{
    int i, *const cp;
    int *pi, *const p2;
    const int ic, &r = ic;
    const int *const p3;
    const int *p;

    i = ic;
    p1 = p3;
    p1 = &ic;
    p3 = &ic;
    p2 = p1;
    ic = *p3;

    return 0;
}
