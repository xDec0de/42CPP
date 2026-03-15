# Exercise 01: Serena, my love!

For this exercise we have to create a derived class named ScavTrap that
inherits from ClapTrap. This introduces the concept of inheritance in C++.

## ClapTrap changes

Since ScavTrap needs to access and modify ClapTrap's attributes directly,
those attributes had to be moved from `private` to `protected`. This is the
standard approach when designing classes intended to be inherited from.

## ScavTrap attributes

ScavTrap uses the same attributes as ClapTrap but with different values:
- Name, passed as a constructor parameter.
- Hit points, initialized to `100` (vs ClapTrap's 10).
- Energy points, initialized to `50` (vs ClapTrap's 10).
- Attack damage, initialized to `20` (vs ClapTrap's 0).

## Construction and destruction chaining

When a ScavTrap is created, the ClapTrap constructor is called first with
the provided name, then ScavTrap's constructor overrides the stat values.
Destruction happens in reverse order: ScavTrap's destructor runs first,
then ClapTrap's.

## Different messages

The subject requires that ScavTrap's constructors, destructor and `attack()`
print different messages than ClapTrap's. The constructors and destructor
have their own implementations. For `attack()`, instead of overriding it,
a `virtual prefix()` method was introduced in ClapTrap and overridden in
ScavTrap. Since `attack()` calls `prefix()` internally, virtual dispatch
ensures that ScavTrap's prefix (which prints "ScavTrap") is used when
calling `attack()` on a ScavTrap instance, producing different output
without any code duplication.

## ScavTrap special ability

ScavTrap also has its own exclusive function:
- `void guardGate()`: Displays a message indicating that ScavTrap is now
  in Gate keeper mode.

## Tests

Tests cover construction/destruction chaining, the inherited functions,
`guardGate()`, copy construction and assignment, energy depletion and
lethal damage scenarios.
