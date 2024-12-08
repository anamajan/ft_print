# ft_printf

An implementation of the `printf` function in C, following the specifications and behavior of the standard `printf`. This project is part of the **42 Network curriculum**, designed to deepen understanding of variadic functions, memory handling, and formatted output.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Functionality](#functionality)
- [Functions Breakdown](#functions-breakdown)
- [Installation and Compilation](#installation-and-compilation)
- [Usage](#usage)
- [Testing](#testing)
- [Acknowledgements](#acknowledgements)

---

## Overview
`ft_printf` replicates the behavior of the C standard library function `printf`, supporting various format specifiers and features while adhering to 42 project constraints, such as limited library usage and no dynamic memory allocation.

---

## Features
- Handles the following format specifiers:
  - `%c` - Single character
  - `%s` - String
  - `%d` and `%i` - Signed decimal integers
  - `%u` - Unsigned decimal integers
  - `%x` and `%X` - Hexadecimal numbers (lowercase and uppercase)
  - `%p` - Memory address (pointer)
  - `%%` - Literal `%` character
- Supports variadic arguments using `stdarg.h`.
- Graceful handling of `NULL` for strings and pointers.

---

## Functionality
The project consists of the main `ft_printf` function, supported by helper functions to handle different format specifiers.

The basic workflow of `ft_printf`:
1. Parse the format string.
2. Identify format specifiers.
3. Retrieve variadic arguments.
4. Use appropriate helper functions to format and print each argument.
5. Return the total number of characters printed.

---

## Functions Breakdown
### `ft_printf`
```c
int ft_printf(const char *str, ...);
```

Purpose: Main function that mimics printf.
Parameters:

    ```str``` - The format string containing text and format specifiers.
    Variadic arguments corresponding to format specifiers.

Return Value: Total number of characters printed.

## How to run tests:
### 1- Make the objects files (Make all)
### 2- run in your terminal :  ```./tests/runtests.sh```
### The tests are made by our peer Ali: https://github.com/ila36IX
