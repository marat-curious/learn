int get_size()
{
    return 0;
}

int main()
{
    // begin:
    // int sz = get_size();
    // if (sz < 0) {
    //     goto begin;
    // }

    while (int sz = get_size() && sz < 0)
        ; // null statement

    return 0;
}
