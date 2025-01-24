int txt_size()
{
    return 8;
}

int main()
{
    unsigned buf_size = 1024;

    int ia1[buf_size];
    int ia2[4 * 7 - 4];
    int ia3[txt_size()];
    char st[11] = "fundamental";

    return 0;
}
