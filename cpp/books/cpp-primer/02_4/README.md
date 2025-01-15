# `const` Qualifier

## By Defualt, `const` Objects Are Local to a File

To share a `const` object among multiple files, you must define the variable
as `extern`.

```
// file_1.cc defines and initializes a const that is accessible to other files
extern const int bufSize = fcn();
// file_1.h
extern const int bufSize; // same bufSize as defined in file_1.cc
```

## A Reference to `const`

```
int i = 42;
int &r1 = i; // r1 bound to i
const int &r2 = i; // r2 also bound to i, but cannot be used to change i
r1 = 0; // r1 is not const; i is now 0
r2 = 0; // error: r2 is a reference to const
```

## Pointers and `const`

```
const int i = 42; // i is const
int *pi = &i; // error: pi is plain pointer
const int *cpi = &i; // ok: cpi may point to const i
*cpi = 0; // error: can't assign to cpi

int errNum = 0;
int *const curErr = &errNum; // curErr will always point to errNum
const double pi = 3.14159;
const double *const pip = &pi; // pip is a const pointer to a const object
```

## Exercises

2.26: Which of the following are legal (source)?
2.27: Which of the following initializationa are legal (source)?
2.28: Explain the following definitions (source)?
2.29: Using the variables in the previous exercise, which of the following
assignments are legal (source)?
2.30: For each of the following declarations indicate whether the object
being has top-leveal or low-level const (source).
2.31: Given the declarations in the previous exercise determine whether the
following assignments are legal (source).
2.32: Is the following code legal or not (source)?
