# `string` Stream

## Exercises

8.9. Use the function you wrote for the first exercise in 8.1.2 to print the
contents of an `istringstream` object. ([source](./ex_8_09.cpp))

8.10. Write a program to store each line from a file in a `vector<string>`. Now
use an `istringstream` to read each element from the `vector` a word at a time.
([source](./ex_8_10.cpp))

8.11. The program in this section defined its `istringstream` object inside the
outer `while` loop. What changes would you need to make if `record` were
defined outside that loop? Rewrite the program, moving the definition of
`record` outside the `while`, and see whether you thought of all the changes
that are needed. ([source](./ex_8_11.cpp))

8.12. Why didn't we use in-class initializers in `PersonInfo`?

8.13. Rewrite the phone number program from this section to read from a named
file rather than from `cin`. ([source](./ex_8_13.cpp))

8.14. Why did we declare `entry` and `nums` as `const auto &`?
