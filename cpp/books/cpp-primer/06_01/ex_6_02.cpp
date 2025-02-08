// a
string f() // return type not matched with return value type string != int
{
    string s;
    // ...
    return s;
}

// b
void f2(int i) { /* ... */ } // function not have return type

// c
int calc(int v1, int v2) { /* ... */ } // params must have different param names

// d
double square(double x) { return x * x; }; // function body needs braces

int main()
{
    return 0;
}
