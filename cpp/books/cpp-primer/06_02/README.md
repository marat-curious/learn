# Argument Passing

## Pointer Parameters

Programmers accustomed to programming in C often use pointer parameters to
access objects outside a function. In C++, programmers generally use reference
parameters instead.

## Exercises

6.10. Using pointers write a function to swap the values of two `int`s. Test
the function by calling it and printing the swapped values.
([source](./ex_6_10.cpp))

6.11. Write and test your own version of `reset` that takes a reference.
([source](./ex_6_11.cpp))

6.12. Rewrite the program from exercise 6.10 to use references instead of
pointers to swap the value of two `int`s. Which version do you think would be
easier to use and why? ([source](./ex_6_12))

6.13. Assuming `T` is the name of a type, explain the difference between a
function declared as `void f(T)` and `void f(T&)`.

6.14. Give an example of when a parameter should be a reference type. Give
an example of when a parameter should not be a reference.
([source](./ex_6_14.cpp))

6.15. Explain the rationale for the type of each of `find_char`'s parameters
in particular, why is `s` a reference to `const` but `occurs` is plain
reference? Why are these parameters references, but the `char` parameter `c`
is not? What would happen if we made `s` a plain refenrence? What if we made
`occurs` a reference to `const`? ([source](./ex_6_15.cpp))

6.16. The following function, although legal, is less useful than it might be.
Identify and correct the limitation on this function ([source](./ex_6_16.cpp))

6.17. Write a function to determine whether a string contains any capital
letters. Write a function to change a `string` to all lowercase. Do the
parameters you used in these functions have the same type? If so, why? If not,
why not? ([source](./ex_6_17.cpp))

6.18. Write declarations for each of the following functions. When you write
these declarations, use the name of the function to indicate what the function
does. 

(a) A function named `compare` that returns a `bool` and has two parameters
that are references to a class named `matrix`.

(b) A functon named `change_val` that returns a `vector<int>` iterator and
takes two parameters: One is an `int` and the other is an iterator for a 
`vector<int>`.

([source](./ex_6_18.h))

6.19. Given the following declarations, determine which calls are legal and
which are illegal. For those that are illegal, explain why.
([source](./ex_6_19.cpp))

6.20. When should reference parameters be references to `const`? What happens
if we make a parameter a plain reference when it could be a reference to
`const`.

6.21. Write a function that takes an `int` and a pointer to an `int` and
returns the larger of the `int` value or the value to which the pointer points.
What type should you see for the pointer? ([source](./ex_6_21.cpp))

6.22. Write a function to swap two `int` pointers. ([source](./ex_6_22.cpp))

6.23. Write your own version of each of the `print` functions presented in
this section. Call each of these functions to print `i` and `j` defined as
follow (see source). ([source](./ex_6_23.cpp))

6.24. Explain the behaviour of the following function. If there are problems
in the code, explain what they are and how you might fix them.
([source](./ex_6_24.cpp))

6.25. Write a `main` function that takes two arguments. Concatenate the
supplied arguments and print the resulting `string`. ([source](./ex_6_25.cpp))

6.26. Write a program that accepts the options presented in this section.
Print the values of the arguments passed to `main`. ([source](./ex_6_26.cpp))

6.27. Write a function that takes an `initializer_list<int>` and produces the
sum of the elements in the list. ([source](./ex_6_27.cpp))

6.28. In the second version of `error_msg` that has an `ErrCode` parameter,
what is the type of `elem` in the `for` loop?

6.29. When you use an `initializer_list` in a range `for` would you ever use
a reference as the loop control variable? If so, why? If not, why not?
