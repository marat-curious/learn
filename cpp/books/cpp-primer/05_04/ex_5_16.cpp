int main()
{
    // `while` idiomatic
    int i;
    while (cin >> i)
        ; // ...

    for (int i = 0; cin >> i;)
        ; // ...

    // `for` idiomatic
    int size = 42;
    for (int i = 0; i != size; ++i)
        ; // ...

    int i = 0;
    while (i != size) {
        // ...
        ++i;
    }

    return 0;
}
