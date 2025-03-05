# File Input and Output

## Automatic Construction and Destruction

When an `fstream` object is destroyed, `close` is called automatically.

## Exercises

8.4. Write a function to open a file for input and read its contents into a
`vector` of `string`s, storing each line as a separate element in the
`vector`. ([source](./ex_8_04.cpp))

8.5. Rewrite the previous program to store each word in a separate element.
([source](./ex_8_05.cpp))

8.6. Rewrite the bookstore program from 7.1.1 to read its transactions from
a file. Pass the name of the file as an argument to `main`.
([source](./ex_8_06.cpp))

8.7. Revise the bookstore program from the previous section to write its ouput
to a file. Pass the name of that file as a second argument to `main`.
([source](./ex_8_07.cpp))

8.8. Revise the program from previous exercise to append its output to its
given file. Run the program on the same output file at least twice to ensure
that the data are preserved.
([source](./ex_8_08.cpp))
