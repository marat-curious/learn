# The Bitwise Operators

Because there are no guarantees for how the sign bit is handled, we strongly
recommend using `unsigned` types with the bitwise operators.

## Exercises

4.25. What is the value of `~'q' << 6` on a machine with 32-bit `int`s and
8 bit `char`s, that uses Latin-1 character set in which 'q' has pattern
`01110001` ([source](./ex_4_25.cpp))?

4.26. In our grading example in this section, what would happen if we used
`unsigned int` as the type for `quiz1`?

4.27. What is the result of each of these expressions
([source](./ex_4_27.cpp))?
