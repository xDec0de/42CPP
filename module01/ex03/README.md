# Exercise 03: Unnecessary violence
Alright, no more zombies. This time we have to create a HumanA and a HumanB class. Both humans can hold weapons, which as you might have guessed must be created on another class. the program also must be tested in our [main.cpp](https://github.com/xDec0de/42CPP/blob/main/module01/ex03/main.cpp).

## Weapon
Weapons are required to have a type, which is just a `string`, the type of the weapon must be modifiable with getter and setter functions. For performance reasons I used a `const std::string` reference parameter.

## Common HumanA and HumanB requirements
Both classes must have an `attack` method that will print "<name> attacks with their <weapon>".

## HumanA vs HumanB
`HumanA` is a class that only requires:
- A constructor that takes the name of the human and the `Weapon` to use.

While `HumanB` is a class that requires:
- A constructor that only takes the name of the human.
- A setter for the `Weapon`.
- The ability to have no `Weapon` by default.

Thinking about the requirements makes clear that `HumanB` will require a `private` pointer to a `Weapon`, while `HumanA` can use a reference as it is required to have a `Weapon` that will never change but keeping in mind that the weapon itself can change its type.
