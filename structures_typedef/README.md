# C - Structures, typedef

## Project Description

This project covers **structures (structs) and typedef** in C. Students learn how to define composite data types that group related variables together, and how to use typedef to create aliases for types. This is essential for organizing complex data.

## Concepts Covered

- Structure definition and declaration
- Accessing structure members
- Typedef keyword for type aliases
- Structure initialization
- Function parameters using structures
- String members in structures
- Nested structures
- Structure array operations

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: dog.h

## Tasks

### 1-init_dog.c
**What it does**: Initializes a dog structure with provided values.

**How it works**:
- Takes a pointer to a dog structure and initialization values (name, age, owner)
- Assigns each parameter to the corresponding structure member
- Demonstrates structure initialization
- Handles structure member assignment

### 2-print_dog.c
**What it does**: Prints the contents of a dog structure.

**How it works**:
- Takes a pointer to a dog structure
- Checks if pointer is NULL (prints nothing if NULL)
- Prints name, age, and owner in formatted output
- Demonstrates accessing and displaying structure members
- Shows conditional output based on NULL pointers

### 4-new_dog.c
**What it does**: Creates a new dog structure with dynamically allocated memory.

**How it works**:
- Takes name, age, and owner as parameters
- Allocates memory for a new dog structure
- Allocates separate memory for name and owner strings (copies them)
- Initializes structure with copied values
- Returns pointer to new structure
- Demonstrates dynamic structure allocation and string duplication

### 5-free_dog.c
**What it does**: Frees memory allocated for a dog structure.

**How it works**:
- Takes a pointer to a dog structure
- Checks if pointer is NULL (does nothing if NULL)
- Frees dynamically allocated string members (name, owner)
- Frees the structure itself
- Prevents memory leaks from dynamic allocation
- Demonstrates proper deallocation order

## Data Structure

The dog structure contains:
- `char *name` - dog's name (string)
- `float age` - dog's age (floating-point number)
- `char *owner` - dog's owner's name (string)
