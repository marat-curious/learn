/**
 * Create sample file `input` with input data
 */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

int main()
{
    ifstream ifs;
    ifs.open("input");

    vector<string> vs;
    string line;
    while(getline(ifs, line))
    {
        vs.push_back(line);
    }

    ifs.close();

    for (string s : vs)
    {
        istringstream iss(s);
        string w;
        while(iss >> w)
        {
            cout << w << endl;
        }
    }

    return 0;
}
