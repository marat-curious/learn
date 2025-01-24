# Arrays

## Pointers and Arrays

In most expressions, when we use an object of array type, we are really using
a pointer to the first element in that array.

## Exercises

3.27. Assuming `txt_size` is a function that takes no arguments and returns an
`int` value, which of the following definitions are illegal
([source](./ex_3_27.cpp))?

3.28. What are the values in the following arrays ([source](./ex_3_28.cpp))?

3.29. List some of the drawbacks of using an array instead of `vector`.

3.30. Identify the indexing errors in the following code
([source](./ex_3_30.cpp)).

3.31. Write a program to define an array of ten `int`s. Give each element the
same value as its position in the array ([source](./ex_3_31.cpp)).

3.32. Copy the array you defined in the previous exercise into another array.
Rewrite your program to use `vector`s ([source](./ex_3_32.cpp)).

3.33. What would happen if we did not initialize the `scores` array in the
program on page 116 ([source](./ex_3_33.cpp)).

3.34. Given that `p1` and `p2` point to elements in the same array, what does
the follow code do? Are there values of `p1` or `p2` that make this code
illegal ([source](./ex_3_34.cpp))?

3.35. Using pointers, write a program to set the elements in array to zero
([source](./ex_3_35.cpp)).

3.36. Write a program to compare two arrays for equality. Write a similar
program to compare two `vector`s ([source](./ex_3_36.cpp)).

3.37. What does the following program do ([source](./ex_3_37.cpp))?

3.38. In this section, we noted that it was not only illegal but meaningless
to try add two pointers. Why would adding two pointers be meaningless
([source](./ex_3_38.cpp))?

3.39. Write a program to compare two `string`s. Now write a program to compare
the values of two C-style character strings ([source](./ex_3_39.cpp)).

3.40. Write a program to define two character arrays initialized from string
literals. Now define a third character array to hold the concatenation of the
two arrays. Use `strcpy` and `strcat` to copy the two arrays into the third
([source](./ex_3_40.cpp)).
