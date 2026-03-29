# Exercise 02: Abstract class

This exercise takes the hierarchy from ex01 and makes the base class
**abstract** by declaring `makeSound()` as a pure virtual function
(`= 0`). The class is optionally renamed `AAnimal` to signal that it
cannot be instantiated directly.

## Pure virtual function

Adding `= 0` to `makeSound()` in `AAnimal` means the compiler refuses to
create an `AAnimal` object. Any attempt to do so results in a compile-time
error. Derived classes (Dog, Cat) must override `makeSound()` or they
become abstract themselves.

## Why this matters

In ex00 and ex01, `Animal` had a body for `makeSound()` that printed a
generic noise. That was semantically wrong: a generic animal sound makes no
sense. Making the function pure virtual enforces that only concrete animals
with a real sound can be instantiated, catching mistakes at compile time
instead of at runtime.

## Everything else unchanged

The Brain class, deep-copy logic, and the virtual destructor remain
identical to ex01. The array-of-animals test and deep-copy test behave the
same way — only the abstract base prevents accidental direct instantiation.

## Useful links

- [Pure virtual functions and abstract classes](https://en.cppreference.com/w/cpp/language/abstract_class)
