# C - Function Pointers

## Project Description

This project introduces **function pointers** — a powerful C feature that allows programs to store the address of a function and call it indirectly. Function pointers enable dynamic function selection, callbacks, and higher-order functions, making code more flexible and modular.

## Concepts Covered

- Declaring and initializing function pointers
- Passing function pointers as arguments to other functions
- Calling functions through pointers
- Arrays of function pointers
- Function pointer syntax and notation
- Creating function selector utilities
- Implementing callback mechanisms

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: function_pointers.h

## Tasks

### 0-print_name.c
**What it does**: Accepts a name and a function pointer, then calls the function with the name as an argument.

**How it works**:
- Defines `print_name()` which takes two parameters: a string (`name`) and a function pointer (`f`)
- The function pointer `f` is declared to accept a `char *` parameter and return void
- Calls the function pointed to by `f`, passing the `name` as an argument
- This demonstrates passing a callback function to perform action on data

### 1-array_iterator.c
**What it does**: Iterates through an array of integers and applies a function to each element.

**How it works**:
- Takes three parameters: an integer array, array size, and a function pointer
- The function pointer `action` accepts an integer and returns void
- Loops through each element of the array (0 to size-1)
- For each element, calls the function pointed to by `action`, passing the element value
- Demonstrates applying a callback function to process every element in a collection

### 2-int_index.c
**What it does**: Searches an array of integers and returns the index of the first element that matches a comparison function.

**How it works**:
- Takes three parameters: an integer array, array size, and a comparison function pointer
- Validates inputs (checks for NULL pointers and valid size)
- The function pointer `cmp` is a predicate that returns non-zero if a condition is met
- Iterates through the array calling `cmp()` on each element
- Returns the index of the first element where `cmp()` returns a non-zero value
- Returns -1 if no match is found or if inputs are invalid
- Demonstrates search functionality using a customizable comparison function

### 3-calc.h, 3-main.c, 3-get_op_func.c, 3-op_functions.c
**What they do together**: Create a simple calculator that performs operations (+, -, *, /, %) on two numbers based on command-line input.

**How they work**:
- **3-main.c**: Entry point that parses command-line arguments (two operands and an operator)
  - Validates that exactly 3 arguments are provided
  - Converts operands to integers
  - Calls `get_op_func()` to get the appropriate operation function
  - Checks for division by zero errors
  - Calls the retrieved operation function and prints the result

- **3-get_op_func.c**: Returns a function pointer to the appropriate operation function
  - Takes an operator string as input
  - Returns a pointer to the matching operation function (+, -, *, /, %)
  - Returns NULL if operator is invalid

- **3-op_functions.c**: Defines the actual operation functions
  - Each function (add, sub, mul, div, mod) takes two integers
  - Performs the corresponding mathematical operation
  - Returns the result

- **3-calc.h**: Header file containing function prototypes and type definitions
  - Defines the `op_t` structure to associate operators with their functions
  - Declares all function prototypes

This multi-file project demonstrates how function pointers enable a dispatcher pattern, where the correct function is selected and called dynamically based on input data.
