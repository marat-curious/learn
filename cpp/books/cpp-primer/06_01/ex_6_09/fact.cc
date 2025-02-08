#include "chapter6.h"

int fact (int n)
{
    int result = 1;
    while (n > 1) {
        result *= n;
        --n;
    }
    return result;
}
