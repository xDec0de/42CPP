# Exercise 00: Aaaaand... OPEN!

For this exercise we have to create a class named ClapTrap. This class
must have some private attributes and public member functions.

## ClapTrap private attributes

The subject doesn't mention an specific name for the atrributes,
so I decided how to name them:
- `std::string` name, which is passed as a constructor parameter.
- Hit points, must be 10, I decided attribute I decided to use is declared as
`unsigned int health`.
- Energy points, again must be 10, declared as `unsigned int energy`.
- Attack damage, zero, declared as `unsigned int damage`

## ClapTrap public member functions

For this part the function prototypes have been provided as well as how this
functions should work:
- `void attack(const std::string& target)`: Causes `ClapTrap::damage` points
of damage to `target` *(In reality, this just prints a message)*.
- `void takeDamage(unsigned int amount)`: Removes `amount` points
from `ClapTrap::health`.
- `void beRepaired(unsigned int amount)`: Adds `amount` points
to `ClapTrap::health`.

Also, every function except `takeDamage` will cause the ClapTrap to loose one
`energy` point, ClapTraps must not be able to do anything if they have no
`energy` or `health` left. Every function must always print a message.

## Tests

The subject explicitly mentions to provide our own tests to ensure that
the ClapTrap class is implemented correclty, this tests must be provided
on the `main.cpp` file.

## Output requirements

Constructors and destructors must display a message, for the `attack()`
function an example is provided, but the subject says that the function
*"may display something like..."*, so I'm assuming we can choose how messages
are formatted as long as we display the same information.
