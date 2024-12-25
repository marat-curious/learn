#include <iostream>

int main() {
    unsigned int a, b, c;
    std::cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0 || (a + b) < c || (a + c) < b || (b + c) < a) {
        std::cout << "UNDEFINED\n";
        return 0;
    }
    unsigned int al = a;
    unsigned int bl = b;
    unsigned int h = c;
    unsigned int t;
    if (al > bl && al > h) {
        t = h;
        h = al;
        al = t;
    } else if (bl > al && bl > h) {
        t = h;
        h = bl;
        bl = t;
    }
    if (al * al + bl * bl == h * h) {
        std::cout << "YES\n";
        return 0;
    }
    std::cout << "NO\n";
    return 0;
}
