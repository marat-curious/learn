# Introducing Iterators

## Some `vector` Operations Invalidate Iterators

It is important to realize that loops that use iterators should not add
elements to the container to which the iterators refer.

## Exercises

3.21. Redo the first exercize from 3.3.3 using iterators ([source](./ex_3_21.cpp)).

3.22. Revise the loop that printed the first paragraph in `text` to instead
change the elements in `text` that corresponds to the first paragraph to all
uppercase ([source](./ex_3_22.cpp)).

3.23. Write a program to create a `vector` with ten `int` elements. Using an
iterator, assign each element a value that is twice its current value
([source](./ex_3_23.cpp)).

3.24. Redo the exercise 3.20 using iterators ([source](./ex_3_24.cpp)).

3.25. Rewrite the grade clustering program from 3.3.3 using iterators instead
of subscripts ([source](./ex_3_25.cpp)).
