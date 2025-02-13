# Features for Specialized Uses

## Exercises

6.40. Which, if either, of the following declarations are errors? Why?
([source](./ex_6_40.cpp))

6.41. Which, if any, of the following calls are illegal? Why? Which, if any,
are legal but unlikely to match the programmer's intent? Why?
([source](./ex_6_41.cpp))

6.42. Give the second parameter of `make_plural`(6.3.2) a default argument
of `s`. Test your program by printing singular and plural versions of the words
`success` and `failure`. ([source](./ex_6_42.cpp))

6.43. Which one of the following declarations and defenitions would you put in
a header? In a source file? ([source](./ex_6_43.cpp))

6.44. Rewrite the `isShorter` function from 6.2.2 to be inline.
([source](./ex_6_44.cpp))

6.45. Review the programs you've written for the earlier exercises and decide
whether they should be defined as `inline`. If so, do so. If not, explain why
they should be `inline`.

6.46. Would it be possible to define `isShorter` as a `constexpr`? If so, do
so. If not, explain why not. ([source](./ex_6_46))

6.47. Revise the program you wrote in the exercises in 6.3.2 that used
recursion to print the contents of a `vector` to conditionally print
information about its execution. For example, you might print the size of the
`vector` on each call. Compile and run the program with debugging turned on
and again with it turned off. ([source](./ex_6_47.cpp))

6.48. Explain what this loop does and whether it is good use of `assert`.
([source](./ex_6_48.cpp))
