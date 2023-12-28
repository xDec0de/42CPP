# Exercise 01:  Moar brainz
Taking and modifying a bit the [Zombie.hpp](https://github.com/xDec0de/42CPP/blob/main/module01/ex01/Zombie.hpp) and [Zombie.cpp](https://github.com/xDec0de/42CPP/blob/main/module01/ex01/Zombie.cpp) files from [ex00](https://github.com/xDec0de/42CPP/blob/main/module01/ex00/), we must implement a `Zombie* zombieHorde(int N, std::string name)` function on [zombieHorde.cpp](https://github.com/xDec0de/42CPP/blob/main/module01/ex01/zombieHorde.cpp).

## Function requiremenets
The function must allocate N Zombie objects in a single allocation. Then, it has to initialize the zombies, giving each one of them the name passed as a parameter. returning a pointer to the first zombie.

## Tests
The subject also asks us to create a [main.cpp](https://github.com/xDec0de/42CPP/blob/main/module01/ex01/main.cpp) file that must contain any tests we want to make to ensure the function works correctly, we also can't have memory leaks.

## Freeing hordes
It seems that the main objective of this exercise is to learn how to allocate arrays of objects and how to free them. I used `Zombie *horde = new Zombie[N]` to allocate hordes, expecting to free them with `delete horde`, but instead, I had to use `delete[] horde`. I figured this out thanks to a compiler error when trying to `delete` the allocated horde array inside of `Zombie* zombieHorde(int N, std::string name)`, because using `delete horde` on the `main` function only told me that the pointer being freed wasn't allocated.
