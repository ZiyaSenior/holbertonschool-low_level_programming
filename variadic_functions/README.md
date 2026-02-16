# C - Variadic Functions

## Project Description

This project covers **variadic functions** in C — functions that accept a variable number of arguments. Students learn how to use the `<stdarg.h>` library to create flexible functions that can handle different numbers of parameters, enabling powerful APIs like `printf()`.

## Concepts Covered

- Variadic function declaration
- `va_list` for managing variable arguments
- `va_start()`, `va_arg()`, `va_end()` macros
- Handling different argument types
- Finding the sum of variable arguments
- Printing variable arguments
- Type-aware variadic functions
- Generic printing functions

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: variadic_functions.h

## Tasks

### 0-sum_them_all.c
**What it does**: Sums all the integers passed as variable arguments.

**How it works**:
- Takes number of arguments (n) as first parameter
- Uses `va_list` to access remaining arguments
- Calls `va_start()` to initialize the list
- Loops n times, using `va_arg()` to extract each integer
- Accumulates sum of all arguments
- Calls `va_end()` to clean up
- Returns total sum
- Demonstrates basic variadic function usage

### 1-print_numbers.c
**What it does**: Prints all the numbers passed as variable arguments.

**How it works**:
- Takes separator string (for between numbers) and count as parameters
- Uses `va_list` to iterate through numeric arguments
- Calls `va_start()` to initialize
- For each argument, uses `va_arg()` to get the integer
- Prints number followed by separator (except after last number)
- Calls `va_end()` to clean up
- Demonstrates formatted output of variable arguments

### 2-print_strings.c
**What it does**: Prints all the strings passed as variable arguments.

**How it works**:
- Takes separator string and count of strings as parameters
- Uses `va_list` to iterate through string arguments
- Calls `va_start()` to initialize
- For each argument, uses `va_arg()` to get the string pointer
- If string is NULL, prints "(nil)"
- Otherwise prints the string
- Separates strings with given separator
- Demonstrates handling string arguments in variadic functions

### 3-print_all.c
**What it does**: Prints arguments of different types based on a format string.

**How it works**:
- Takes format string describing argument types and variable arguments
- Format characters: 'c' (char), 'i' (int), 'f' (float), 's' (string)
- Uses `va_list` and iterates through format string
- For each format character, uses `va_arg()` with appropriate type
- Prints value based on type
- Handles NULL strings by printing "(nil)"
- Demonstrates type-aware variadic functions
- Similar to how `printf()` works with format specifiers
