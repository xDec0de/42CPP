# Exercise 03: Now it's weird!

For this exercise we have to create DiamondTrap, a class that inherits from
both FragTrap and ScavTrap simultaneously. This is the classic "diamond
inheritance" problem in C++.

## The diamond problem

Without special handling, a class inheriting from both ScavTrap and FragTrap
would end up with two separate ClapTrap subobjects (one per parent), causing
ambiguity when accessing ClapTrap members. The solution is **virtual
inheritance**: ScavTrap and FragTrap both declare `virtual public ClapTrap`,
which guarantees that DiamondTrap contains exactly one shared ClapTrap
subobject.

## Construction and destruction chaining

With virtual inheritance, the most derived class (DiamondTrap) is responsible
for constructing the virtual base directly. The order is:

1. `ClapTrap`
2. `ScavTrap`
3. `FragTrap`
4. `DiamondTrap`

Destruction happens in reverse order.

## DiamondTrap attributes

Attributes are inherited from the parent classes as specified:
- Hit points: `100` (from FragTrap)
- Energy points: `50` (from ScavTrap)
- Attack damage: `30` (from FragTrap)
- `attack()` comes from ScavTrap (declared via `using ScavTrap::attack`)

## Name shadowing and `-Wno-shadow`

DiamondTrap has its own private `name` attribute with the **same variable
name** as `ClapTrap::name`, as required by the subject. This is intentional
shadowing: DiamondTrap's `name` holds the its actual name, while
`ClapTrap::name` is set to `name + "_clap_name"` in the constructor.

Because all other Makefiles use `-Wshadow`, and this shadowing is intentional,
this exercise uses `-Wno-shadow` instead to suppress the warning without
changing the behaviour.

## DiamondTrap special ability

In addition to `guardGate()` (from ScavTrap) and `highFivesGuys()` (from
FragTrap), DiamondTrap has its own exclusive function:
- `void whoAmI()`: Displays both the DiamondTrap name and the ClapTrap name.

## Tests

Tests verify the full construction/destruction chain, `whoAmI()` showing
both names, all inherited special abilities, copy construction and
assignment, energy depletion and lethal damage scenarios.
