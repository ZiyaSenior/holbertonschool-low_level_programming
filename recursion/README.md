# C - Recursion

## Project Description

This project focuses on **recursive functions** in C. Recursion is a technique where a function calls itself to solve a problem by breaking it down into smaller, similar subproblems. Students learn to identify base cases, write recursive logic, and understand how recursion works on the call stack.

## Concepts Covered

- Recursive function definition
- Base case and recursive case
- Call stack and function calls
- Return value propagation
- Tail recursion
- Mathematical recursion (factorial, powers)
- String recursion (printing, checking)
- Prime number checking
- Palindrome detection

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: main.h

## Tasks

### 0-puts_recursion.c
**What it does**: Prints a string recursively.

**How it works**:
- Takes a string pointer as parameter
- Base case: if pointer points to null terminator, print newline and return
- Recursive case: print current character, then call function with pointer+1
- Each recursive call handles one character
- Demonstrates string traversal through recursion

### 1-print_rev_recursion.c
**What it does**: Prints a string in reverse using recursion.

**How it works**:
- Takes a string pointer as parameter
- Base case: if pointer points to null terminator, return
- Recursive case: recursively call with pointer+1 (advance first)
- When returning from recursion, print current character (reverse order)
- Uses call stack to naturally reverse order

### 2-strlen_recursion.c
**What it does**: Returns the length of a string using recursion.

**How it works**:
- Takes a string pointer as parameter
- Base case: if character is null terminator, return 0
- Recursive case: return 1 + length of (string+1)
- Each level adds 1 and passes remaining string to next recursion
- Returns total count when all characters processed

### 3-factorial.c
**What it does**: Calculates factorial of a number using recursion.

**How it works**:
- Takes an integer n as parameter
- Base case: if n == 0 or n == 1, return 1
- Recursive case: return n * factorial(n-1)
- Each call multiplies by current number and reduces n by 1
- Returns -1 for invalid input (negative numbers)

### 4-pow_recursion.c
**What it does**: Calculates x raised to power y using recursion.

**How it works**:
- Takes base x and exponent y as parameters
- Base case: if y == 0, return 1
- Recursive case: return x * pow(x, y-1)
- Each level multiplies by base and reduces exponent
- Returns -1 if exponent is negative

### 5-sqrt_recursion.c
**What it does**: Returns the natural square root of a number using recursion.

**How it works**:
- Takes an integer n as parameter
- Uses binary search through recursion
- Tests if i*i equals n (found), less than n (search higher), or greater than n (search lower)
- Base cases: if i*i == n return i; if i*i > n return -1 (not perfect square)
- Recursive case: adjusts search range based on comparison
- Finds natural square root or returns -1

### 6-is_prime_number.c
**What it does**: Determines if a number is prime using recursion.

**How it works**:
- Takes an integer n as parameter
- Base case: if n <= 1, return 0 (not prime)
- Base case: if n == 2, return 1 (prime)
- Recursive case: checks if n is divisible by 2, 3, etc. up to sqrt(n)
- Returns 0 if divisor found, continues recursion otherwise
- Returns 1 if no divisors found (prime)

### 100-is_palindrome.c
**What it does**: Determines if a string is a palindrome using recursion.

**How it works**:
- Takes a string pointer as parameter
- Calculates string length first
- Uses recursive helper to compare characters
- Base case: if indices cross (left >= right), string is palindrome
- Recursive case: checks if s[left] == s[right], then recurses with left+1, right-1
- Returns 1 if palindrome, 0 otherwise

### 101-wildcmp.c
**What it does**: Compares two strings with wildcard support using recursion.

**How it works**:
- Takes two string pointers (one may contain wildcards)
- Handles '*' in second string as wildcard (matches zero or more characters)
- Base case: if both strings end with null terminator, match found
- Base case: if first string ends but second has characters, check if second is all wildcards
- Recursive case: if characters match or second has wildcard, recurse forward
- If wildcard in second, try matching zero characters or one more character
- Returns 1 if strings match (respecting wildcards), 0 otherwise
- Demonstrates pattern matching through recursion
