int &get(int *arry, int index)
{
    return arry[index];
}

int main()
{
    int ia[10];
    for (int i = 0; i != 10; ++i) {
        get(ia, i) = i;
    }

    return 0;
}
