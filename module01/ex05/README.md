# Exercise 05: Harl 2.0
On this exercise we have to create some kind of logger, this logger has a name, Harl, and four printing levels:
- DEBUG: Used for contextual information, this is the lowest level.
- INFO: Used for extensive information, helpful for tracing program execution in a production environment.
- WARNING: Used for potential issues on the program execution that can normally be ignored.
- ERROR: Used for critical issues that may require manual intervention to be fixed.
I copied the messages provided as examples for each level by the subject even though I was allowed to change them, as I'm honestly too tired to think of cool phrases.

## Structure
A `Harl` class must be created with the following methods.
- `void debug(void)`
- `void info(void)`
- `void warning(void)`
- `void error(void)`
Each of them must print the message that correlates to each logger level of `Harl`. Additionaly, we also must implement a more general method:
- `void complain(std::string)`: This method must accept parameters such as "ERROR" to call the `error` member function.

## Rules
Obviously! Rules! The point of this exercise is to learn about pointers to member functions, so `if`/`else`/`else if` are forbidden for the purpose
of identifying what member function should be called.

## Useful links
- [Array of pointers to member functions](https://cplusplus.com/forum/beginner/239227/)
