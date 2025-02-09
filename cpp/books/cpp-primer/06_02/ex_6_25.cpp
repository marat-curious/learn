#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
    cout << argc << endl;
    if (argc < 2) {
        cout << "minimum number of arguments is two" << endl;
        return 1;
    }
    cout << argv[1] << argv[2] << endl;
    return 0;
}
