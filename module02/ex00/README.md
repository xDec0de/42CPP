# Exercise 00: My First Class in Orthodox Canonical Form

As mentioned in [the main README of this repository](https://github.com/xDec0de/42CPP/blob/main/README.md),
from now on we must use the orthodox canonical form for all classes unless
specifically stated otherwise, so we are going to create one to get used to
this. This class must represent a fixed-point number.

## Class requirements

The class that we have to create must be named "Fixed" and have the following
private members:
- A int to store the fixed-point value.
- A static constant int with a value of 8 for the number of fractional bits.
And the following public members:
- Default constructor that initializes the fixed-point value to 0.
- A copy constructor.
- A copy assignment operator overload.
- A destructor.
- A member function `int getRawBits(void) const` that returns the raw value of
the fixed-point value.
- A setter `void setRawBits(int const raw)` for the previously mentioned value.

## Output requirements

Even though this is not specifically mentioned on the subject, the example
shown there provides some information about the output we should print,
which is "x called", whith "x" being for example "Default constructor",
"Copy constructor", "getRawBits member function" and so on depending on
what we are calling.

## About the copy constructor

If you took the time to read my code you might have noticed that
I used the copy assignement operator on the copy constructor instead of just
modifying `value` with the `value` of `other`, why? Well, just because it is
more future proof, even if this exercise will never change as it is just that,
an exercise. If for some reason the `Fixed` class ends up having more
members, I would only need to modify the copy assignement operator, not the
copy constructor too.

## Useful links

- [Orthodox canonical form](https://www.francescmm.com/orthodox-canonical-class-form/)
- [Copy constructor](https://en.cppreference.com/w/cpp/language/copy_constructor)
- [Copy assignement operator](https://en.cppreference.com/w/cpp/language/copy_assignment)
- [Const at the end of a function declaration](https://stackoverflow.com/questions/3141087/what-is-meant-with-const-at-end-of-function-declaration)
