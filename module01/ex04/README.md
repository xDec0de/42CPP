# Exercise 04: Sed is for losers
This time we have to create a program that takes three parameters:
-   A file name, we will refer to this as `filename`.
-   The string to find on the file that will be replaced, we will refer to this string as `to_find`.
-   Another string as a replacement for the first string, we will refer to this string as `replacement`.
A new file with the name "`filename`.replace" must be created, in that file, the contents of `filename` must be pasted, replacing
every ocurrence of `to_find` with `replacement`.

## Rules
C file manipulation fuctions are forbidden, this means we are restricted to C++ functions, which isn't really a problem and was expected,
however, the problem comes when we are allowed to use all member functions of the `std::string` class except `replace`, the useful one!
Seems like we found the tricky part of the exercise.

## Error handling
Of course, we need to handle any errors that may occur such as invalid input. The subject also mentions that we should create our own
tests to ensure that the program works correctly, even though this should always be done with any project.

## Useful links
-   [Input/output files](https://cplusplus.com/doc/tutorial/files/)
-   [std::getline](https://en.cppreference.com/w/cpp/string/basic_string/getline)
-   [std::string::erase](https://cplusplus.com/reference/string/string/erase/)
-   [std::string::insert](https://cplusplus.com/reference/string/string/insert/)
-   [std::string::compare](https://cplusplus.com/reference/string/string/compare/)
