# correct_cpp_show_args

Branch|[Travis CI](https://travis-ci.org)|[Codecov](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/janderkkotlarski/correct_cpp_show_args.svg?branch=master)](https://travis-ci.org/janderkkotlarski/correct_cpp_show_args)|[![codecov.io](https://codecov.io/github/janderkkotlarski/correct_cpp_show_args/coverage.svg?branch=master)](https://codecov.io/github/janderkkotlarski/correct_cpp_show_args/branch/master)

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'Show CLI arguments'.

## Goal

 * Display all command-line arguments using the [STL](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStl.md)

## Prerequisites

 * Understand [how this course works](https://github.com/richelbilderbeek/correct_cpp/blob/master/doc/how_this_course_works.md)
 * Have written [a correct 'hello_cli' program](https://github.com/janderkkotlarski/correct_cpp_hello_cli)

## Exercise

Write a command-line interface (CLI) program that displays all command-line arguments, seperated by spaces and followed by a newline.

Call to `show_args`|Output|Exit status
---|---|---
`./show_args`|`show_args` (with newline)|0
`./show_args hello`|`show_args hello` (with newline)|0
`./show_args hello world`|`show_args hello world` (with newline)|0

 * Do not use `for`
 * [argv](https://github.com/richelbilderbeek/cpp/blob/master/content/CppArgv.md) must be converted to a [std::vector](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdVector.md)< [std::string](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdString.md) >
 * Use [std::copy](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdCopy.md) to display the command-line arguments with [std::cout](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdCout.md)

## External links

 * Video how to do this chapter: [YouTube](https://youtu.be/rpScbTZxIlI) [mp4](http://www.richelbilderbeek.nl/correct_cpp_show_args.mp4)
