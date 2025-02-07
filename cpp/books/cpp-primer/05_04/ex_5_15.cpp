int main()
{
    int sz = 42;

    // a
    for (inx ix = 0; ix != sz; ++ix) { /* ... */ }
    // if (ix != sz) // `ix` not visible in this scope
    //     ; // ...

    // b
    int ix;
    for (; ix != sz; ++ix) { /* ... */ }

    // c
    // condition in `for` loop never executes because `ix` and `sz` both incremented
    // for (int ix = 0; ix != sz; ++ix, ++sz) { /* ... */ }

    return 0;
}
