# Constructors Revisited

## Constructor Initializers are Sometimes Required

We must use the constructor initializer list to provide values for members
that are `const`, reference, or of a class type that does not have a default
constructor.

## Order of Member Initiazlization

It is a good idea to write constructor initializers in the same order as the
members are declared. More over, when possible, avoid using members to
initialize other members.

## The Role of the Default Constructor

In practice, it is almost always right to provide a default constructor if
other constructors are being defined.

## Implicit Class-Type Conversions

A constructor that can be called with a single argument defines an implicit
conversion from the constructor's parameter type to the class type.

## ``explicit` Constructors Can Be Used Only for Direct Initialization

When a constructor is declared `explicit`, it can be used only with the direct
form of initialization. Moreover, the compiler will not use this constructor
in an automatic conversion.

## Exercises

7.36. The following initializer is in error. Identify and fix the problem.
([source](./ex_7_36.hpp))

7.37. Using the version of `Sales_data` from this section, determine which
constructor is used to initialize each of the following variables and list
the values of the members in each object. ([source](./ex_7_37.cpp))

7.38. We might want to supply `cin` as a default argument to the constructor
that takes an `istream&`. Write the constructor declaration that uses `cin`
as default argument. ([source](./ex_7_39.hpp))

7.39. Would it be legal for both the constructor that takes a `string` and
the one that takes an `istream&` to have default arguments? If not, why not?

7.40. Choose one of the following abstractions (or an abstraction of your own
choosing). Determine what data are needed in the class. Provide an appropriate
set of constructions. ([source](./ex_7_40.hpp))

7.41. Rewrite your own version of the `Sales_data` class to use delegating
constructors. Add a statement to the body of each of the constructors that
prints a message whenever it is executed. Write declarations to construct a
`Sales_data` object in every way possible. Study the output until you are
certain you understand the order of execution among delegating constructors.
([source](./ex_7_41.hpp))

7.42. For the class you wrote for exercise 7.40 decide whether any of the
constructors might use declaration. If so, write the delegating constructor(s)
for your class. If not, look at the list of abstractions and choose one that
you think would use a delegating constructor. Write the class definition for
that abstraction. ([source](./ex_7_42.hpp))

7.43. Assume we have a class named `NoDefault` that has a constructor that
takes an `int`, but has no default constructor. Define a class `C` that has a
member of type `NoDefault`. Define the default constructor for `C`.
([source](./ex_7_43.hpp))

7.44. Is the following declaration legal? If not, why not?
([source](./ex_7_44.hpp))

7.45. What if we defined the `vector` in the previous exercise to hold objects
of type `C`? ([source](./ex_7_45.hpp))

7.46. Which, if any, of the following statements are untrue? Why?

a. A class must provide at least one constructor.
b. A default constructor is a constructor with an empty parameter list.
c. If there are no meaningful default values for a class, the class should not
provide a default constructor.
d. If a class does not define a default constructor, the compiler generates
one that initializes each data member to the default value of its associated
type.

7.47. Explain whether the `Sales_data` constructor that takes a `string` should
be  `explicit`. What are the benefits of making the constructor `explicit`?
What are the drawbacks?

7.48. Assuming the `Sales_data` constructors are not `explicit`, what
operations happen during the following the following definitions (see source).
What happens if the `Sales_data` constructors are `explicit`?
([source](./ex_7_48.cpp))

7.49. For each of the three following declarations of `combine`, explain what
happens if we call `i.combine(s)`, where `i` is a `Sales_data` and `s` is a
`string`. ([source](./ex_7_49.cpp))

7.50. Determine whether any of your `Person` class constructors should be
`explicit`. ([source](./ex_7_50.cpp))

7.51. Why do you think `vector` defines its single-argument constructor as
`explicit`, but `string` does not?

7.52. Using our first version of `Sales_data` from explain the following
initialization. Identify and fix any problems. ([source](./ex_7_52.cpp))

7.53. Define your own version of `Debug`. ([source](./ex_7_53.hpp))

7.54. Should the members of `Debug` that begin with `set_` be declared as
`constexpr`? If not, why not?

7.55. Is the `Data` class from 7.5.5 a literal class? If not, why not?
If so, explain why it is literal.
