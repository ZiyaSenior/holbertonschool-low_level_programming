# C - More malloc, free

## Project Description

This project provides **additional practice with dynamic memory allocation and manipulation**. Students work with advanced memory techniques including partial string concatenation, custom `calloc()` implementation, and array range generation using `malloc()`.

## Concepts Covered

- Dynamic memory allocation with `malloc()`
- `calloc()` function (allocate and initialize)
- Memory manipulation functions
- String operations with memory allocation
- Custom malloc implementations
- Array generation and manipulation
- Error handling for allocation failures
- Pointer arithmetic with allocated memory

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: main.h

## Tasks

### 0-malloc_checked.c
**What it does**: Allocates memory and exits with error status if allocation fails.

**How it works**:
- Takes size as parameter
- Calls `malloc()` to allocate requested size
- If allocation fails (returns NULL), prints error message and exits with code 98
- Returns pointer to allocated memory if successful
- Demonstrates defensive programming for memory allocation

### 1-string_nconcat.c
**What it does**: Concatenates first n bytes of one string to another using memory allocation.

**How it works**:
- Takes two string pointers and n (number of bytes) as parameters
- Treats NULL strings as empty strings
- Calculates total memory needed (full first string + n bytes of second string)
- Allocates memory for result
- Copies first string entirely, then adds only n bytes of second string
- Returns pointer to concatenated result
- Demonstrates partial string copying and concatenation

### 2-calloc.c
**What it does**: Allocates memory for array and initializes all bytes to zero.

**How it works**:
- Takes number of elements and size of each element
- Returns NULL if nmemb or size is 0
- Calculates total bytes needed (nmemb * size)
- Allocates memory using `malloc()`
- Initializes all allocated memory to 0
- Returns pointer to allocated array
- Similar to standard `calloc()` function

### 3-array_range.c
**What it does**: Creates an array containing a range of integers.

**How it works**:
- Takes minimum and maximum values as parameters
- Returns NULL if min > max
- Calculates array size (max - min + 1)
- Allocates memory for array
- Fills array with sequential integers from min to max
- Returns pointer to populated array
- Demonstrates programmatic array generation
