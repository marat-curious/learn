# Dealing with Types

## `decltype`

`decltype((variable))` (double parentheses) is always a reference type, but
`decltype(variable)` is a reference type only is variable is a reference.

## Exercises

2.33: Using the variable definitions from this section, determine what
happens in each of assignments (source)
2.34: Write a program containing the variables  and assignments from previous
exercise.
2.35: Determine the types deduced in each of the following difinitions.
2.36: In the following code, determine the type of each variable and the value
each variable has when the code finishes (source).
2.37: Assignment is an example of an expression that yields a reference type.
Determine the type and value of each variable (source).
2.38: Describe the differences in type deduction between `decltype` and `auto`.
