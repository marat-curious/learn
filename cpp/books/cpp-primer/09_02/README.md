# Container Library Overview

## Exercises

9.2. Define a `list` that holds elements that are `deque`s that hold `int`s.
([source](./ex_9_02.cpp))

9.3. What are the constraints on the iterators that form iterator ranges?

9.4. Write a function that takes a pair of iterators to a `vector<int>` and an
`int` value. Look for that value in the range and return a `bool` indicating
whether is was found. ([source](./ex_9_04.cpp))

9.5. Rewrite the previous program to return an interator to the requested
element. Note that the program must handle the case where the element is not
found. ([source](./ex_9_05.cpp))

9.6. What is wrong with the following program? How might you correct it?
([source](./ex_9_06.cpp))

9.7. What type should be used as the index into a `vector` of `int`s?

9.8. What type should be used to read elements in a `list` of `string`s?
To write them?

9.9. What is the difference between the `begin` and `cbegin` functions?

9.10. What are the types of the following four objects?
([source](./ex_9_10.cpp))

9.11. Show an example of each of the six ways to create and initialize a 
`vector`. Explain what values each `vector` contains.
([source](./ex_9_11.cpp))

9.12. Explain the difference between the constructor that takes a container to
copy and the constructor that takes two iterators.

9.13. How would you initialize a `vector<double>` from a `list<int>`? From
a `vector<int>`? Write code to check your answer. ([source](./ex_9_12.cpp))

9.14. Write a program  to assign the elements from a `list` of `char*` pointers
to C-style character string to a `vector` of `string`s.
([source](./ex_9_14.cpp))

9.15. Write a program to determine whether two `vector<int>`s are equal.
([source](./ex_9_15.cpp))

9.16. Repeat the previous program, but compare elements in a `list<int>` to a
`vector<int>`. ([source](./ex_9_16.cpp))

9.17. Assuming `c1` and `c2` are containers, what (if any) containers does the
following  usage place on the types of `c1` and `c2`?
```
if (c1 < c2) ...
```
