# C - Command Line Arguments (argc, argv)

## Project Description

This project teaches how to work with **command-line arguments** in C programs. `argc` (argument count) and `argv` (argument vector) are special parameters to the `main()` function that allow programs to accept and process input from the command line.

## Concepts Covered

- Understanding `argc` (number of command-line arguments)
- Understanding `argv` (array of command-line argument strings)
- Parsing and processing command-line arguments
- String-to-integer conversion using `atoi()`
- Error handling for invalid arguments
- Algorithm implementation: coin change problem using modulo and division

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix

## Tasks

### 0-whatsmyname.c
**What it does**: Prints the name of the program itself (argv[0]).

**How it works**: 
- The program receives the program name as the first element of `argv`
- It simply prints this first argument using `printf()` with the `%s` format specifier
- This demonstrates accessing individual command-line arguments

### 1-args.c
**What it does**: Prints the number of arguments passed to the program.

**How it works**:
- `argc` contains the total count of arguments (including the program name)
- Subtracting 1 from `argc` gives the number of arguments passed by the user (excluding the program name)
- The result is printed using `printf()`

### 2-args.c
**What it does**: Prints all the command-line arguments passed to the program, one per line.

**How it works**:
- Uses a loop that iterates from 0 to `argc - 1`
- For each iteration, it prints `argv[i]` (the current argument)
- `argv[0]` is the program name, and `argv[1]` through `argv[argc-1]` are the user-provided arguments

### 3-mul.c
**What it does**: Multiplies two numbers provided as command-line arguments and prints the result.

**How it works**:
- Checks if exactly 3 arguments are provided (program name + 2 numbers)
- Converts `argv[1]` and `argv[2]` to integers using `atoi()`
- Multiplies the two integers together
- Prints the result
- Returns error code 1 if incorrect number of arguments

### 4-add.c
**What it does**: Adds all positive integer arguments provided on the command line and prints the sum.

**How it works**:
- Iterates through each argument (starting from index 1, skipping program name)
- For each argument, checks each character to ensure it's a digit (0-9)
- If a non-digit character is found, prints "Error" and exits
- Uses `atoi()` to convert valid numeric strings to integers
- Accumulates the sum in a counter variable
- Prints the total sum at the end

### 100-change.c
**What it does**: Calculates the minimum number of coins needed to make change for a given amount in cents.

**How it works**:
- Takes a single integer argument (amount in cents)
- Uses a greedy algorithm:
  - Repeatedly divides by 25 (quarter), 10 (dime), 5 (nickel), 2 (two-cent), and 1 (one-cent)
  - Uses modulo operator to get the remainder after each division
  - Counts how many coins of each denomination are needed
- Returns error code 1 if wrong number of arguments or negative amount
- Prints the total count of minimum coins needed
