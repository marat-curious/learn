#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Size of (in bytes):" << endl;
    cout << "void: nullptr_t " << sizeof(nullptr_t) << endl;
    cout << "bool: " <<  sizeof(bool) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;

    return 0;
}
