# Exercise 02: Repetitive work

For this exercise we have to create another derived class named FragTrap,
also inheriting from ClapTrap. It is very similar to ScavTrap but with
different stats and a different special ability.

## FragTrap attributes

FragTrap uses the ClapTrap attributes with these values:
- Name, passed as a constructor parameter.
- Hit points, initialized to `100`.
- Energy points, initialized to `100` (vs ScavTrap's 50).
- Attack damage, initialized to `30` (vs ScavTrap's 20).

## Construction and destruction chaining

Same chaining mechanism as ScavTrap: ClapTrap's constructor is called
first, then FragTrap overrides the stat values. Destructors run in
reverse order.

## FragTrap special ability

FragTrap has its own exclusive function:
- `void highFivesGuys()`: Displays a positive high-fives request on the
  standard output.

## Design note

Just like ScavTrap, FragTrap overrides `virtual prefix()` inherited from
ClapTrap instead of duplicating the logic of `attack()`. This ensures that
calling `attack()` on a FragTrap instance will print "FragTrap" in the
message, satisfying the requirement that messages are different across
classes.

## Tests

Tests cover both ScavTrap and FragTrap in the same program, verifying
construction/destruction chaining, special abilities, energy depletion
and lethal damage for each class.
