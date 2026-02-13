# C - malloc, free

## Project Description

This project covers **dynamic memory allocation and deallocation** in C using `malloc()` and `free()`. Students learn how to allocate memory at runtime, work with pointers to dynamically allocated memory, and properly free memory to prevent memory leaks.

## Concepts Covered

- Dynamic memory allocation using `malloc()`
- `free()` function for deallocation
- String duplication
- 2D arrays and dynamic grid allocation
- Memory management and error handling
- NULL pointer handling
- String concatenation with dynamic allocation
- Pointer arithmetic with allocated memory

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: main.h

## Tasks

### 0-create_array.c
**What it does**: Creates an array of characters and initializes all elements to a specific character.

**How it works**:
- Takes size and character as parameters
- Allocates memory using `malloc()` for requested size
- Checks if allocation was successful (returns NULL on failure)
- Initializes each array element to the given character
- Returns pointer to allocated array
- Demonstrates basic memory allocation and initialization

### 0-malloc_checked.c
**What it does**: Allocates memory and exits the program if allocation fails.

**How it works**:
- Takes size as parameter
- Attempts to allocate memory using `malloc()`
- If allocation fails (returns NULL), prints error and exits with status 98
- Returns pointer to allocated memory if successful
- Demonstrates error handling for failed allocations

### 1-strdup.c
**What it does**: Duplicates a string by allocating memory and copying it.

**How it works**:
- Takes a string pointer as parameter
- Returns NULL if input string is NULL
- Calculates string length (including null terminator)
- Allocates memory for the copy
- Copies each character from source to new memory
- Returns pointer to duplicated string
- Demonstrates string duplication with dynamic memory

### 2-str_concat.c
**What it does**: Concatenates two strings using dynamic memory allocation.

**How it works**:
- Takes two string pointers as parameters
- Treats NULL strings as empty strings
- Calculates total length needed for concatenation
- Allocates memory for concatenated result
- Copies first string, then appends second string
- Returns pointer to concatenated string
- Demonstrates string merging with memory allocation

### 3-alloc_grid.c
**What it does**: Creates a 2D array (grid) with dynamic memory allocation.

**How it works**:
- Takes width and height as parameters
- Allocates array of pointers for rows
- For each row, allocates array of integers (columns)
- Initializes all elements to 0
- Returns pointer to 2D array
- Demonstrates nested memory allocation (array of arrays)

### 4-free_grid.c
**What it does**: Frees memory allocated for a 2D grid.

**How it works**:
- Takes pointer to 2D grid and its height
- Iterates through each row and frees its memory
- Then frees the array of pointers itself
- Prevents memory leaks from 2D allocations
- Demonstrates proper deallocation order (free contents before container)

### 100-argstostr.c
**What it does**: Concatenates all command-line arguments into a single string.

**How it works**:
- Takes argc and argv as parameters
- Calculates total memory needed for all arguments plus newlines
- Allocates single string buffer
- Copies each argument followed by a newline
- Returns pointer to concatenated result
- Demonstrates working with command-line arguments and dynamic allocation

### 101-strtow.c
**What it does**: Splits a string into words, allocating separate memory for each word.

**How it works**:
- Takes a string as parameter
- Counts number of words (separated by spaces)
- Allocates 2D array (array of word pointers)
- Allocates memory for each individual word
- Copies each word into its own allocated memory
- Returns array of word strings
- Demonstrates complex dynamic allocation with word parsing
