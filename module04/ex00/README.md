# Exercise 00: Polymorphism

This exercise introduces subtype polymorphism in C++. We implement a simple
animal hierarchy where derived classes override the `makeSound()` virtual
function, and the correct version is dispatched at runtime through a base
class pointer.

## Virtual dispatch

`Animal` declares `makeSound()` as `virtual`, so when called through an
`Animal*` pointer pointing to a `Dog` or `Cat`, the derived class version
runs. The destructor is also virtual so that `delete` on an `Animal*`
correctly calls the derived destructor first.

## WrongAnimal / WrongCat

`WrongAnimal` is identical to `Animal` except `makeSound()` is **not**
virtual. When a `WrongCat` is stored in a `WrongAnimal*` and `makeSound()`
is called, the compiler resolves it statically to `WrongAnimal::makeSound()`
instead of `WrongCat::makeSound()`. This demonstrates why virtual is needed.

## Useful links

- [Virtual functions and polymorphism](https://en.cppreference.com/w/cpp/language/virtual)
- [Object slicing](https://en.wikipedia.org/wiki/Object_slicing)
