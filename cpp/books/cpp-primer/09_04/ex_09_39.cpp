#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print(vector<string> &v)
{
    cout << "size: " << v.size() << ", capacity: " << v.capacity() << endl;
}

int main()
{
    vector<string> svec;
    print(svec);
    svec.reserve(1024);
    print(svec);
    string word;
    while(cin >> word)
        svec.push_back(word);
    print(svec);
    svec.resize(svec.size() + svec.size() / 2);
    print(svec);

    return 0;
}
