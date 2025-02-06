#include <iostream>
#include <string>

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned int bCnt = 0, tCnt = 0, nCnt = 0;
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    std::string s;

    bool fMatch = false;

    std::getline(std::cin, s);

    for (char &c : s)
        switch (c) {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                if (fMatch) {
                    ++fiCnt;
                    fMatch = false;
                }
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;

            case ' ':
                ++bCnt;
                break;
            case '\t':
                ++tCnt;
                break;
            case '\n':
                ++nCnt;
                break;

            case 'f':
                if (fMatch) {
                    ++ffCnt;
                    fMatch = false;
                }
                else
                    fMatch = true;
                break;
            case 'l':
                if (fMatch) {
                    ++flCnt;
                    fMatch = false;
                }
                break;
            default:
                if (fMatch)
                    fMatch = false;
                break;
        }

    std::cout << "a: " << aCnt << '\n'
              << "e: " << eCnt << '\n'
              << "i: " << iCnt << '\n'
              << "o: " << oCnt << '\n'
              << "u: " << uCnt << '\n'
              << "spaces: " << bCnt << '\n'
              << "tabs: " << tCnt << '\n'
              << "new lines: " << nCnt << '\n'
              << "ff: " << ffCnt << '\n'
              << "fl: " << flCnt << '\n'
              << "fi: " << fiCnt
              << std::endl;

    return 0;
}
