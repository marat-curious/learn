#include <cstring>
#include <iostream>

int main()
{
    char s1[7] = {'p', 'r', 'i', 'm', 'e', 'r', '\0'};
    char s2[5] = {'C', '+', '+', '\0'};
    char s3[10];

    strcat(s2, " ");
    strcat(s3, s2);
    strcat(s3, s1);

    std::cout << s3 << std::endl;

    return 0;
}
