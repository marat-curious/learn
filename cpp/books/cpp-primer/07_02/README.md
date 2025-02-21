# Access Control and Encapsulation

Only difference between using `class` and using `struct` to define a class
is the default access level.

## Exercises

7.16. What, if any, are the constraints on where and how often an access
specifier may appear inside a class defnition? What kinds of members should
be defined after a `public` specifier? What kinds should be `private`?

7.17. What, if any, are the differences between using `class` or `struct`?

7.18. What is encapsulation? Why it is useful?

7.19. Indicate which members of your `Person` class you would declare as
`public` and which you would declare ar `private`. Explain your choice.
([source](./ex_7_19.hpp))

7.20. When are friends useful? Discuss the pros and cons of using friends.

7.21. Update your `Sales_data` class to hide its implementation. The programs
you've written to use `Sales_data` operations should still continue work.
Recompile those programs with your new class definition to verify that they
still work. ([source](./ex_7_21.cpp))

7.22. Update your `Person` class to hide its implementation.
([source](./ex_7_22.cpp))
