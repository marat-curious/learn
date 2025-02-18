# Defining Abstract Data Types

## Exercises

7.1. Write a version of the transaction-processing program from 1.6 using the
`Sales_data` class you defined for the exercises in 2.6.1.
([source](./ex_7_01.cpp))

7.2. Add the `combine` and `isbn` members to the `Sales_data` class you wrote
for exercises in 2.6.2. ([source](./ex_7_02.hpp))

7.3. Revise your transaction-processing program from 7.1.1 to use these
members. ([source](./ex_7_03.cpp))

7.4. Write a class named `Person` that represents the name and address of a
person. Use a `string` to hold each of these elements. Subsequent exercises
will incrementally add features to this class. ([source](./ex_7_04.npp))

7.5. Provide operations in your `Person` class to return the name and address.
Should these functions be `const`? Explain your choice.
([source](./ex_7_05.hpp))

7.6. Define your own versions of the `add`, `read`, and `print` functions.
([source](./ex_7_06.hpp))

7.7. Rewrite the transaction-processing program you wrote for the exercises
in 7.1.2 to use these new functions. ([source](./ex_7_07.cpp))

7.8. Why does `read` define its `Sales_data` parameter as a plain reference
and `print` define its parameter as a reference to `const`?

7.9. Add operations to read and print `Person` objects to the code you wrote
for the exercises in 7.1.2. ([source](./ex_7_09.cpp))

7.10. What does the condition in the following `if` statement do?
([source](./ex_7_10.cpp))

7.11. Add constructors to your `Sales_data` class and write a program to use
each of the constructors. ([source](./ex_7_11.hpp))

7.12. Move the definition of the `Sales_data` constructor that takes an
`istream` into the body of the `Sales_data` class. ([source](./ex_7_12.cpp))

7.13. Rewrite the program from page 255 to use the `istream` constructor.
([source](./ex_7_13.cpp))

7.14. Write a version of the default constructor that explicitly initializes
the members to the values we have provided as in-class initializers.
([source](./ex_7_14.cpp))

7.15. Add appropriate constructors to your `Person` class.
([source](./ex_7_15.cpp))
