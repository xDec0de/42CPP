# Exercise 03: Interface & recap

This exercise introduces **interfaces** in C++98. Since the language has no
`interface` keyword, a pure abstract class (all methods `= 0`) serves the
same purpose. We implement a small RPG-style system with Materias, Characters,
and a MateriaSource.

## AMateria — abstract base

`AMateria` is the abstract base for all Materia types. It stores a `type`
string set by the derived class constructor. `clone()` is pure virtual so
every concrete Materia must implement it. `use()` has a default no-op body
since it is not pure virtual, but derived classes override it.

The copy assignment operator deliberately does **not** copy `type` because
copying Materia type makes no sense (the type is set at construction and
defines what the object is).

## Ice and Cure

Both are concrete Materias. Their types are `"ice"` and `"cure"` respectively
(lowercase). `clone()` returns a `new` instance of the same type. `use()`
prints the required message using the target's name from `ICharacter::getName()`.

## ICharacter — interface

`ICharacter` is a pure abstract class (interface) with a virtual destructor
and four pure virtual functions. `Character` is the only concrete
implementation. The inventory holds at most 4 `AMateria*` slots, starting
empty. `equip()` fills the first free slot, `unequip()` sets a slot to NULL
**without deleting** it (caller is responsible), and `use()` delegates to the
Materia at the given slot.

Deep copy of `Character` clones every equipped Materia before deleting the
old ones.

## IMateriaSource — interface

`IMateriaSource` is another pure abstract class. `MateriaSource` stores up to
4 Materia templates. `learnMateria()` stores the pointer directly (the source
owns it). `createMateria()` finds a template whose type matches the argument
and returns `clone()` of it, or `NULL` if unknown.

## Memory management

Materias unequipped from a Character are **not** deleted by `unequip()` — the
caller must track and delete them to avoid leaks. The subject hints at saving
addresses before calling `unequip()`. The tests in `main.cpp` always `delete`
every created Materia that is not equipped or is later unequipped.

## Useful links

- [Abstract classes and interfaces in C++](https://en.cppreference.com/w/cpp/language/abstract_class)
- [Virtual destructor](https://en.cppreference.com/w/cpp/language/destructor#Virtual_destructors)
