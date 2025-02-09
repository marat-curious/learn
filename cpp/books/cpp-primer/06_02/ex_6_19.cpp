#include <string>
#include <vector>

using std::string;
using std::vector;

double calc(double);

int count(const string &, char);

int sum(vector<int>::iterator, vector<int>::iterator, int);

vector<int> vec(10);

int main()
{
    // a
    // calc(23.4, 55.1);
    calc(23.4);

    // b
    count("abcda", 'a');

    // c
    calc(66);

    // d
    sum(vec.begin(), vec.end(), 3.8);

    return 0;
}
