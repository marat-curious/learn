#include <iostream>
#include <string>

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned int bCnt = 0, tCnt = 0, nCnt = 0;
    std::string s;

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
            default:
                break;
        }

    std::cout << "a: " << aCnt << '\n'
              << "e: " << eCnt << '\n'
              << "i: " << iCnt << '\n'
              << "o: " << oCnt << '\n'
              << "u: " << uCnt << '\n'
              << "spaces: " << bCnt << '\n'
              << "tabs: " << tCnt << '\n'
              << "new lines: " << nCnt << std::endl;

    return 0;
}
