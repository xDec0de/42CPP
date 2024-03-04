# Exercise 06: Harl filter
Taking the [previous exercise](https://github.com/xDec0de/42CPP/tree/main/module01/ex05), we must now filter Harl, as we may not want to always pay attention to everything that Harl has to say.

## User input
We must accept one string argument from the user, which will be the level to use on the filter, so "DEBUG", "INFO", "WARNING", or "ERROR". I personally decided to make this argument completely optional as the subject does specify that if the passed argument doesn't correspond to any level (An empty string on this case), we must print "[ Probably complaining about insignificant problems ]".

## The filter
Assuming the level passed by the user exists, the subject says that the filter must "display all messages from this level and above", an example is also provided, with the example I was able to assume that higher levels ("above" levels) are the most critical, so "ERROR" is the highest level while "DEBUG" is the lowest.

## Rules
The subject says: "Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off". So yeah, we have to use the `switch` statement.

## Useful links
- [Switch statement](https://www.w3schools.com/cpp/cpp_switch.asp)
