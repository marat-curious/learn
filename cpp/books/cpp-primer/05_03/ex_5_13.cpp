int main()
{
    // a
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a':
            aCnt++;
            break;
        case 'e':
            eCnt++;
            break;
        default:
            iouCnt++;
            break;
    }

    // b
    unsigned index = some_value();
    int ix;
    switch (index) {
        case 1:
            ix = get_value();
            ivec[ix] = index;
            break;
        default:
            ix = ivec.size() - 1;
            ivec[ix] = index;
    }

    // c
    unsigned eventCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
        case 1:
        case 3:
        case 5:
        case 9:
            oddCnt++;
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            evenCnt++;
            break;
        default:
            break;
    }

    // d
    const unsigned ival = 512, jval = 1024, kval = 4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch (swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
        default:
            break;
    }

    return 0;
}
