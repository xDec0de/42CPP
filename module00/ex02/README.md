# Exercise 02: The Job Of Your Dreams
On this exercise we play the role of a new employee at GlobalBanksters United, our job is to recreate a missing file, `Account.cpp`, luckily for us, `Account.hpp` still exists and a log file was provided so we can replicate the original behaviour of `Account.cpp`.

## Provided files
The following files were provided for this exercise and are not my property.
- 19920104_091532.log
- Account.hpp
- tests.cpp

## Getting the timestamp format
The timestamp is formatted on a weird way, the provided log file has the timestamp "19920104_091532". The first four digits seem to be the year 1992, but for the rest of the date, it could be either the 4th of January or the 1st of April. After reading `Account.hpp` I noticed that it contains the following line: "Last update : Wed Jan 04 14:54:06 1992", so there we have it, month then day of month. About the time, it is safe to assume that a 24 hour format is being used (09), and it would be really weird if the minutes and seconds were reversed meaning that the format is: "[yyyymmdd_hhmmss]".

## About destructors
Destructors may be called in a reverse order, that depends on the compiler or the operating system you are using, we don't have to worry about that.

## Useful links
- https://www.w3schools.com/cpp/cpp_constructors.asp (Constructor parameters)
- https://www.geeksforgeeks.org/constants-in-c/ (`const` keyword)
- https://www.geeksforgeeks.org/static-keyword-cpp/ (`static` keyword)
- https://en.cppreference.com/w/cpp/io/manip/put_time (Timestamp)