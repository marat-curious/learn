/**
 * Create file with input data, example:
 * Morgan 2015552368 8625550123
 * Drew 9735550130
 * Lee 6095550123 2015550175 8005550000
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::istringstream;
using std::string;
using std::vector;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;

    while(getline(cin, line))
    {
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    return 0;
}
