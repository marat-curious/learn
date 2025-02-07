#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    unsigned int count = 1, maxCount = 0;
    string word, maxWord;
    string s;

    while (cin >> s) {
        if (word.size() == 0) {
            word = s;
            continue;
        }

        if (s == word) {
            ++count;

            if (count > maxCount) {
                maxCount = count;
                maxWord = word;
            }
        } else {
            word = s;
            count = 1;
        }
    }

    cout << "word: " << maxWord << ", count: " << maxCount << endl;

    return 0;
}
