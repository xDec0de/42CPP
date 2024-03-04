# 42CPP
A collection of all C++ projects from 42, consisting of 10 different modules.
<div align=center>
<a href="https://www.codefactor.io/repository/github/xdec0de/42cpp"><img src="https://www.codefactor.io/repository/github/xdec0de/42cpp/badge" alt="CodeFactor"</img></a>
<a href="https://app.codacy.com/gh/xDec0de/42CPP/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade"> <img src="https://app.codacy.com/project/badge/Grade/8186c6267ffd4d92a41ada31319b288d" alt="Codacy"</img></a>
</div>

## General instructions

Instructions apply for all projects and exercises unless stated otherwis
on a specific exercise.
- Makefiles must not [relink](https://stackoverflow.com/questions/52502399/what-does-it-mean-for-a-makefile-to-relink).
- Code must be compiled with `c++` and the flags
`-Wall -Werror -Wextra -std=c++98 -pedantic`.
- Class names must be in [UpperCamelCase](https://wiki.c2.com/?UpperCamelCase)
format, that is "ClassName.cpp/.hpp/.tpp".
- Output messages must be ended by a new-line character and displayed
to the standard output.
- Almost everything on the standard library is allowed, however [boost libraries](https://www.geeksforgeeks.org/advanced-c-boost-library/),
*printf(), *alloc() and free() are forbidden.
- The `using namespace <ns_name>` and `friend` keywords are forbidden.
- Anything that requires to include the `<algorithm>` header is also forbidden,
except on Module 08 and 09.
- Memory leaks must be avoided.
- From Module 02 to 09, classes must be designed in the [Orthodox Canonical Form](https://www.francescmm.com/orthodox-canonical-class-form/),
except when explicitely stated otherwise.
- Any function implementation put in a header file
(except for function templates) are forbidden.
- [Double inclusion](https://stackoverflow.com/questions/5000749/avoiding-double-inclusion-preprocessor-directive-vs-makefiles)
must be avoided by using include guards.

## Code style

Both CodeFactor and Codacy are used to measure the code quality of this
project, one important performance issue that I had was using
[regular parameters instead of const references](https://stackoverflow.com/questions/2627166/what-is-the-difference-between-a-const-reference-and-normal-parameter),
that is why most of the string parameters of this project are passed as
`const std::string &str` instead of just `std::string str`.
