# Iterative Statements

## The `while` Statement

Variables defined in a `while` condition or `while` body are created and
destroyed on each iteration.

## Exercises

5.14. Write a program to read `strings` from standard input looking for
dublicated words. The program should find places in the input where one word
is followed immediately itself. Keep track of the largest number of times a
single repetition occurs and which word is repeated. Print the maximum number
of dublicates, or else print a message saying that no word was repeated. For
example, if the input is
```
how now now now brown cow cow
```
the output should indicate that the word `now` occurred three times. 
([source](./ex_5_14.cpp))

5.15. Explain each of the following loops. Correct any problems you detect.
([source](./ex_5_15.cpp))

5.16. The `while` loop is particularly good at executing while some condition
holds; for example, when we need to read values until end-of-file. The `for`
loop is generally thought of as a step loop: An index steps through a range of
values in a condition. Write an idiomatic use of each loop and then rewrite
each using the other loop construct. If you could use only one loop, which
would you choose? Why? ([source](./ex_5_16.cpp))

5.17. Given two `vector`s of `int`s, write a program to determine whether one
`vector` is a prefix of the other. For `vector`s of unequal length, compare
the number of elements of the smaller `vector`. For example, given the
`vector`s containing `0, 1, 1`, and `2` and `0, 1, 2, 3, 5, 8`, respectively
your program should return `true`. ([source](./ex_5_17.cpp))

5.18. Explain each of the following loops. Correct any problems you detect.
([source](./ex_5_18.cpp))

5.19. Write a program that uses a `do while` loop to repetitively request two
`string`s from the user and report which `string` is less than other.
([source](./ex_5_19.cpp))
