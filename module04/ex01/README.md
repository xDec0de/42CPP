# Exercise 01: I don't want to set the world on fire

This exercise extends the Animal hierarchy from ex00 by adding a `Brain`
class. Dog and Cat each own a `Brain*` allocated with `new` on construction
and deleted on destruction. The goal is to ensure deep copies and avoid
memory leaks.

## Brain class

`Brain` holds an array of 100 `std::string` called `ideas`. The array is
a fixed-size member, so no heap allocation is needed inside Brain itself.

## Deep copy in Dog and Cat

Because Dog and Cat own a heap-allocated `Brain*`, their copy constructor and
copy assignment operator must perform a **deep copy**: they allocate a brand
new `Brain` and copy the contents, rather than sharing the same pointer. This
ensures that modifying one animal's ideas does not affect the other.

The copy assignment operator deletes the existing `brain` before allocating
the new one to avoid leaking the old object.

## Array of animals

The main function creates an array of `Animal*` — half Dog, half Cat — and
deletes every element through the base pointer at the end. The virtual
destructor in `Animal` guarantees that each derived destructor (and thus the
`Brain` deletion) is called correctly.

## Memory leaks

All heap allocations (`new Brain()`, `new Dog()`, `new Cat()`) have a
matching `delete`. The deep-copy logic prevents double-free bugs.

## Useful links

- [Rule of three](https://en.cppreference.com/w/cpp/language/rule_of_three)
- [Virtual destructor](https://en.cppreference.com/w/cpp/language/destructor#Virtual_destructors)
