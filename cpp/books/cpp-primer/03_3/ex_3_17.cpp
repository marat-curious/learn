#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::toupper;
using std::vector;

int main()
{
    vector<string> store;
    string word;
    while (cin >> word)
        store.push_back(word);

    unsigned count = 0;
    for (string &item : store) {
        string w;
        for (auto &c : item)
            w += toupper(c);
        cout << w << "\t";
        if (count == 7) {
            cout << endl;
            count = 0;
            continue;
        }
        ++count;
    }

    cout << endl;

    return 0;
}
