# Sequential Container Operations

## Exercises

9.18. Write a program to read a sequence of `string`s from the standard input
into a `deque`. Use iterators to write a loop to print the elements in the
`deque`. ([source](./ex_9_18.cpp))

9.19. Rewrite the program from the previous exercise to use a `list`. List the
changes you needed to make. ([source](./ex_9_19.cpp))

9.20. Write a program to copy elements from a `list<int>` into two `deque`s.
The even-valued elements should go into one `deque' and the odd ones into the
other. ([source](./ex_9_20.cpp))

9.21. Explain how the loop (see source) that used the return from `insert` to
add elements to a `list` would work if we inserted into a `vector` instead.
([source](./ex_9_21.cpp))

9.22. Assuming `iv` is a `vector` of `int`s, what is wrong with the following
program? How might you correct the problem(s)? ([source](./ex_9_22.cpp))

9.23. In the first program in this section, what would the values of `val`,
`val2`, `val3` and `val4` be if `c.size()` is `1`? ([source](./ex_9_23.cpp))

9.24. Write a program that fetches the first element in a `vector` using `at`,
the subscript operator, `front`, and `begin`. Test your program on empty
`vector`. ([source](./ex_9_24.cpp))

9.25. In the program in this section that erased a range of elements, what
happens if `elem`  and `elem2` are equal? What if `elem2` or both `elem1` and
`elem2` are the off-the-end iterator? ([source](./ex_9_25.cpp))

9.26. Using the following definition of `ia`, copy `ia` into a `vector` and
into a `list`. Use the single-iterator form of `erase` to remove the elements
with odd values from your `list` and the even values from your `vector`.
([source](./ex_9_26.cpp))

9.27. Write a program to find and remove the odd-valued elements in a
`forward_list<int>`. ([source](./ex_9_27.cpp))

9.28. Write a function that takes a `forward_list<string>` and two additional
`string` arguments. The function should find the first `string` and insert the
second immediately following the first. If the first `string` is not found,
then insert the second `string` at the end of the list.
([source](./ex_9_28.cpp))

9.29. Given that `vec` holds 25 elements, what does `vec.resize(100)` do? What
if we next wrote `vec.resize(10)`?

9.30. What, if any, restrictions does using the version of `resize` that takes
a single argument place on the element type?
