# ft_printf

An implementation of the printf function in C, following the specifications and behavior of the standard printf. This project is part of the 42 Network curriculum, designed to deepen understanding of variadic functions, memory handling, and formatted output.

## Table of Contents
- Overview
- Features
- Functionality
- Functions Breakdown
- Installation and Compilation
- Usage
- Testing
- Acknowledgements

## Overview

`ft_printf` replicates the behavior of the C standard library function `printf`, providing formatted output for various data types and custom handling of memory and variadic arguments.

## Features

- Supports the following format specifiers:
  - `%c` for characters
  - `%s` for strings
  - `%p` for pointers (memory addresses)
  - `%d` and `%i` for signed integers
  - `%u` for unsigned integers
  - `%x` and `%X` for hexadecimal numbers (lowercase and uppercase)
  - `%%` for a literal percent sign
- Handles variadic arguments using the `stdarg.h` library.
- Implements memory-safe handling of `NULL` pointers for `%s` and `%p`.

## Functionality

`ft_printf` provides formatted output for various data types based on format specifiers passed within the format string. For example:

ft_printf("Hello, %s! You are %d years old.\n", "Alice", 25);


**Output:** `Hello, Alice! You are 25 years old.`

The function parses the format string and dynamically handles the provided arguments to construct the output.

## Functions Breakdown

### `ft_printf`
- **Purpose:**  
  The main function that replicates the standard `printf` functionality.
- **Prototype:**  
  ```c
  int ft_printf(const char *str, ...);




## How to run tests:
### 1- Make the objects files (Make all)
### 2- run in your terminal :  ```./tests/runtests.sh```
### The tests are made by our peer Ali: https://github.com/ila36IX
