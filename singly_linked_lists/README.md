# C - Singly Linked Lists

## Project Description

This project introduces **singly linked lists**, a fundamental data structure in C. Students learn how to create nodes, link them together, and traverse a linked list. This is essential for understanding more complex data structures.

## Concepts Covered

- Struct definitions for list nodes
- Linked list nodes with data and pointers
- Pointer chains and memory addressing
- List traversal and iteration
- Printing linked lists
- Linked list structure representation

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: lists.h

## Tasks

### 0-print_list.c
**What it does**: Prints the values in a linked list.

**How it works**:
- Takes a pointer to the head of the linked list
- Iterates through the list following the `next` pointers
- For each node, prints the data (typically a number)
- Handles NULL pointer (end of list)
- Returns the number of nodes in the list
- Demonstrates basic linked list traversal

## Data Structure

The linked list uses a `list_t` struct (defined in lists.h) with:
- `int n` - data field (usually an integer)
- `struct list_s *next` - pointer to the next node
