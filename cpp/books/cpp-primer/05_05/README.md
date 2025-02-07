# Jump Statements

Jump statements interrupt the flow of execution. C++ offers four jumps:

- `break`
- `continue`
- `goto`
- `return`

## Exercises

5.20. Write a program to read a sequence of `string`s from the standard input
until either the same word occurs twice in succession or all the words have
been read. Use a `while` loop to read the text one word at a time. Use the
`break` statement to terminate the loop if a word occurs twice in succession.
Print the word if it occurs twice in succession, or else print a message
saying that no word was repeated. ([source](./ex_5_20.cpp))

5.21. Revise the program from the previous exercise so that is looks only for
dublicated words that start with an uppercase letter. ([source](./ex_5_21.cpp))

5.22. The last example in this section that jumped back to `begin` could be
better written using a loop. Rewrite the code to eliminate the `goto`.
([source](./ex_5_22.cpp))
