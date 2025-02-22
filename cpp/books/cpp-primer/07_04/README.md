# Class Scope

## Name Lookup and Class Scope

Member function definitions are processed after the compiler processes all of
declarations in the class.

## Type Names are Special

Definitions of type names usually should appear at the beginning of a class.
That way any member that uses that type will be seen after the type name has
already been defined.

## Exercises

7.33. What would happen if we gave `Screen` a `size` member defined as follow?
Fix any problems you identify. ([source](./ex_7_33.hpp))

7.34. What would happen if we put the `typdef` of `pos` in the `Screen` class
(see source) as the last line in the class?
([source](./ex_7_34.hpp))

7.35. Explain the following code, indicating which definition of `Type` or
`initVal` is used for each use of those names. Say how you would fix any
errors. ([source](./ex_7_35.hpp))
