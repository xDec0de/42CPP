# Exercise 00: BraiiiiiiinnnzzzZ

A Zombie class must be implemented, this class must have a string private attribute called "name" and a member function `void announce(void)`.

## Announcing
Zombies must announce themselves with their name followed by "BraiiiiiiinnnzzzZ...", as an example: "Zombie: BraiiiiiiinnnzzzZ...".

## New zombie
The function `Zombie* newZombie(std::string name)` must be implemented (I assumed it must be implemented on [newZombie.cpp](https://github.com/xDec0de/42CPP/blob/main/module01/ex00/newZombie.cpp)), this function must create a new zombie, name it and return it.

## Random chump
The function `void randomChump(std::string name)` must be implemented (Once again I assued it must be implmenented on [randomChump.cpp](https://github.com/xDec0de/42CPP/blob/main/module01/ex00/randomChump.cpp)), this function must create a zombie and announce it.

## Additional requirements
Zombies must be destroyed when no longer needed. The destructor must
print a message with the name of the zombie. I took just a bit of liberty here and decided that the message will be "(Zombie name) died.".

## The actual point of the exercise
The real point of this exercise is to determine when the zombies should be allocated on the stack or the heap.

## Useful links
[New operator](https://www.geeksforgeeks.org/new-vs-operator-new-in-cpp/)
[Delete keyword](https://www.geeksforgeeks.org/delete-in-c/)
