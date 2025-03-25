#include <forward_list>
#include <iostream>
#include <string>

using std::forward_list;
using std::string;

void insert(forward_list<string> &f, const string &key, const string &value)
{
    forward_list<string>::iterator p = f.begin();
    while(p != f.end())
    {
        if (*p == key)
            p = f.insert_after(p, value);
        else
            ++p;
    }
}

int main()
{
    forward_list<string> fls = {"one", "two", "three", "four", "five", "seven"};

    insert(fls, "five", "six");

    for (string s : fls)
        std::cout << s << " ";
    std::cout << std::endl;

    return 0;
}
