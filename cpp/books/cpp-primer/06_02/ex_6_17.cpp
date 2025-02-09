#include <iostream>
#include <locale>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool has_capital(const string &s)
{
    for (char c : s)
        if (std::isupper(static_cast<unsigned char>(c)))
            return true;
    return false;
}

void to_lowercase(string &s)
{
    for (char &c : s)
        c = std::tolower(c);
}

int main()
{
    string str;
    cin >> str;

    cout << "has capital: " << has_capital(str) << endl;

    to_lowercase(str);
    cout << "to lowercase: " << str << endl;

    return 0;
}
