#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4(10);
    vector<int> v5(10, 42);
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1: size: " << v1.size() << " elements: ";
    for (auto e : v1)
        cout << e << " ";
    cout << ";" << endl;

    cout << "v2: size: " << v2.size() << " elements: ";
    for (auto e : v2)
        cout << e << " ";
    cout << ";" << endl;

    cout << "v3: size: " << v3.size() << " elements: ";
    for (decltype(v3.size()) i = 0; i != v3.size(); ++i)
        cout << v3[i] << " ";
    cout << ";" << endl;

    cout << "v4: size: " << v4.size() << " elements: ";
    for (decltype(v4.size()) i = 0; i != v4.size(); ++i)
        cout << v4[i] << " ";
    cout << ";" << endl;

    cout << "v5: size: " << v5.size() << " elements: ";
    decltype(v5.size()) j = 0;
    while (j < v5.size()) {
        cout << v5[j] << " ";
        ++j;
    }
    cout << ";" << endl;

    cout << "v6: size: " << v6.size() << " elements: ";
    decltype(v6.size()) k = 0;
    while (k < v6.size()) {
        cout << v6[k] << " ";
        ++k;
    }
    cout << ";" << endl;

    cout << "v7: size: " << v7.size() << " elements: ";
    for (string s : v7)
        cout << s << " ";
    cout << ";" << endl;

    return 0;
}
