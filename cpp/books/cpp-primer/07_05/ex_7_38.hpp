#include <iostream>

using std::cin;
using std::istream;

class Example {
    public:
        Example() = default;
        Example(istream &is = cin) {};
};
