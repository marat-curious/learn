# Return Types and the `return` Statement

## Exercises

6.30. Compile the version of `str_subrange` to see what your compiler does with
the indicate errors. ([source](./ex_6_30.cpp))

6.31. When is it valid to return a reference? A reference to `const`?

6.32. Indicate whether the following function is legal. If so, explain what it
does; if not, correct any errors. ([source](./ex_6_32.cpp))

6.33. Write a recursive function to print the contents of a `vector`.
([source](./ex_6_33.cpp))

6.34. What would happen if the stopping condition in `factorial` were
`if (val != 0)`? ([source](./ex_6_34.cpp))

6.35. In the call to `fact`, why did we pass `val - 1` rather than `val--`?

6.36. Write the declaration for a function that returns a reference to an
array of ten `string`s, without using either a trailing return, `decltype`, or
alias. ([source](./ex_6_36.cpp))

6.37. Write three additional declarations for the function in the previous
exercise. One should use a type alias, one should use a trailing return, and
the third should use `decltype`. Which form do you prefer and why?
([source](./ex_6_37.cpp))

6.38. Revice the `arrPtr` function on to return a reference to the array.
([source](./ex_6_38.cpp))
