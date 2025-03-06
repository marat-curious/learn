/**
 * Create file with input data, example:
 * Morgan 2015552368 8625550123
 * Drew 9735550130
 * Lee 6095550123 2015550175 8005550000
 */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::ostringstream;
using std::string;
using std::vector;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(const string &phone)
{
    return phone.size() > 9;
}

const string &format(const string &phone)
{
    return phone;
}

int main()
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;

    ifstream ifs("input");

    while(getline(ifs, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    for (const auto &entry : people)
    {
        ostringstream formatted, bad_numbers;
        for (const auto &nums : entry.phones)
        {
            if (!valid(nums))
                bad_numbers << " " << nums;
            else
                formatted << "; " << format(nums);
        }

        if (bad_numbers.str().empty())
            cout << entry.name << ": " << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name << " invalid numbers(s) " << bad_numbers.str() << endl;
    }

    return 0;
}
