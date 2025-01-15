# References

A reference defines an alternative name for an object. A reference type "refers
to" another type.

```
int ival = 1024;    
int &refVal = ival; // refVal refers to (is another name for) ival
int &refVal2;       // error: a reference must be initialized
```

There is no way to rebind a reference, references must be initialized.

## A Reference Is an Alias

A reference is not an object. Instead, a reference is just another name for an
already existing object.

## Pointers

A pointer is a compound type that "points to" another type. Like references,
pointers are used for indirect access to other objects.

Pointers are often hard to understand. Debugging problems due to pointer error
bedevil even experienced programmers.

A pointer holds the address of another object. We get the address of an object
by using the address-of operator (the `&` operator).

## Exercises

2.15: Which of the following definitions, if any, are invalid (source)?
2.16: Which, if any, of the following assignments are invalid (source)?
2.17: What does the following code print?
2.18: Write code to change the value of a pointer.Write code to change the
value to which the pointer points.
2.19: Explain the key differences between pointers and references.
2.20: What does the following program do (source)?
2.21: Explain each of the following definitions (source).
2.22: Assuming `p` is a pointer to `int`, explain the following code (source).
2.23: Given  a pointer `p`, can you determine whether `p` points to a valid
object (source)?
2.24: Why is the initialization of `p` legal but that of `lp` illegal (source)?
