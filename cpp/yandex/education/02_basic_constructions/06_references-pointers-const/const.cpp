#include <iostream>
#include <vector>

int main() {
    const int c1 = 42; // known in compile time

    int x;
    std::cin >> x;
    const int c2 = 2 * x; // known in runtime
    // c2 = 0; // compilation error

    const std::vector<int> v = {1, 3, 5};
    std::cout << v.size() << "\n";
    // v.clear(); // compilation error
    // v[0] = 0; // also compilation error

    int& ref = x;
    const int& cref = x;

    ++x; // OK
    ++ref; // OK
    // ++cref; // compilation error

    int* ptr = &x;
    const int* cptr = &x;

    ++*ptr; // OK
    // ++*cptr; // compilation error

    return 0;
}
