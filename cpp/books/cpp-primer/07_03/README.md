# Additional Class Features

## Returning `*this` from a `const` Member Function

A `const` member function that returns `*this` as a reference should have a
return type that is a reference to `const`.

## Exercises

7.23. Write your own version of the `Screen` class. ([source](./ex_7_23.hpp))

7.24. Give your `Screen` class three constructors: a default constructor;
a constructor that takes values for height and width and initializes the
contents to hold the given number of blanks; and a constructor that takes
values for height, width, and a character to use as the contents of the screen.
([source](./ex_7.24.hpp))

7.25. Can `Screen` safely rely on the default versions of copy and assingment?
If so, why? If not, why not?

7.26. Define `Sales_data::avg_price` as an `inline` function.
([source](./ex_7_26.hpp))

7.27. Add the `move`, `set`, and `display` operations to your version of
`Screen`. Test your class by executing the following code.
([source](./ex_7_27.cpp))

7.28. What would happen in the previous exercise if the return type of `move`,
`set`, and `display` was `Screen` rather than `Screen&`?

7.29. Revise your `Screen` class so that `move`, `set`, and `display` functions
return `Screen` and check your prediction from the previous exercise
([source](./ex_7_29.cpp))

7.30. It is legal but redundant to refer to members through the `this` pointer.
Discuss the pros and cons of explicitly the `this` pointer to access members.

7.31. Define a pair of classes `X` and `Y`, in which `X` has a pointer to `Y`,
and `Y` has an object of type `X`. ([source](./ex_7_31.hpp))

7.32. Define your own versions of `Screen` and `Window_mgr` in which `clear`
is a member of `Window_mgr` and a friend of `Screen`.
([source](./ex_7_32.hpp))
