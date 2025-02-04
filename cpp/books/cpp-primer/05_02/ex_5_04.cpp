#include <string>

using std::string;

bool find(string w)
{
    if (w.size() == 0)
        return false;
    else
        return true;
}

int main()
{
    string s = "Hello";
    string::iterator iter = s.begin();

    while (iter != s.end()) { /* ... */ }

    string word = "";

    while (bool status = find(word)) { /* ... */}

    bool status = false;

    if (!status) { /* ... */ }

    return 0;
}
