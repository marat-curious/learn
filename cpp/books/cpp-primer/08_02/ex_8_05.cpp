#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

void read_file(const string &file_name, vector<string> &vec)
{
    ifstream ifs(file_name);
    if (ifs) {
        string line;
        while(ifs >> line) {
            vec.push_back(line);
        }
    }
    ifs.close();
}

int main()
{
    vector<string> content;
    read_file("input.txt", content);

    for (string line : content)
        cout << line << "\n";
    cout << endl;

    return 0;
}
