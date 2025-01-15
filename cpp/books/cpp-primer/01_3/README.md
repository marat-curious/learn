# Comments

There are two kinds of comments:

- `//` - single-line comment
- `/* ... */` - multi-line comment

```
#include <iostream>

/**
 * Simple main function:
 * Read two numbers and write their sum
 */
int main()
{
    // prompt user to enter two numbers
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0; // variables to hold the input we real
    std::cin >> v1 >> v2; // read input
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
```

## Exercises

1.7 - Compile program that has incorrectly nested comments
1.8 - Check output statements in exercise (see source)