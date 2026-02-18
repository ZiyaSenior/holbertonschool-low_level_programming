# C - Doubly Linked Lists

## Project Description

This folder contains exercises that implement a **doubly linked list** data structure in C. Unlike singly linked lists (where each node points only to the next node), doubly linked lists allow nodes to point in both directions — to the previous and next nodes. This enables traversal in both directions and simpler deletion operations.

## Concepts Covered

- Doubly linked list node structure with `prev` and `next` pointers
- List traversal in forward and backward directions
- Inserting nodes at head, tail, and specific indices
- Deleting nodes at specific indices
- Calculating list length and sum of values
- Searching for nodes by index
- Memory allocation and deallocation of list nodes
- Handling empty lists and edge cases

## Requirements

- **Compiler**: `gcc`
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: lists.h

## Tasks

### 0-print_dlistint.c
**What it does**: Prints all the integer values stored in a doubly linked list.

**How it works**: 
- Takes a pointer to the head of the list
- Iterates through the list following `next` pointers
- Prints each node's value on a separate line
- Counts and returns the total number of nodes
- Demonstrates basic list traversal

### 1-dlistint_len.c
**What it does**: Returns the number of nodes in a doubly linked list.

**How it works**:
- Takes a pointer to the head of the list
- Traverses the list counting nodes until reaching the end (NULL)
- Returns the total count
- Used to determine list size for operations like insertion at specific indices

### 2-add_dnodeint.c
**What it does**: Adds a new node at the head (beginning) of the doubly linked list.

**How it works**:
- Takes a pointer-to-pointer of the head and a value `n`
- Allocates memory for a new node
- Sets the new node's `prev` to NULL and `next` to the current head
- If list not empty, updates the old head's `prev` to point to new node
- Updates head to point to new node
- Returns pointer to new node

### 3-add_dnodeint_end.c
**What it does**: Adds a new node at the tail (end) of the doubly linked list.

**How it works**:
- Takes a pointer-to-pointer of the head and a value `n`
- Allocates memory for a new node
- If list is empty, sets it as the head and returns
- Otherwise, traverses to the last node (where `next` is NULL)
- Links the last node's `next` to new node and new node's `prev` to last node
- Returns pointer to new node

### 4-free_dlistint.c
**What it does**: Frees all memory allocated for a doubly linked list.

**How it works**:
- Takes a pointer to the head of the list
- Iterates through each node, freeing the current node
- Advances to the next node before freeing (to avoid losing reference)
- Prevents memory leaks from dynamic allocations

### 5-get_dnodeint.c
**What it does**: Returns the node at a specific index in the doubly linked list.

**How it works**:
- Takes a pointer to the head and an index
- Returns NULL if head is NULL or index is invalid
- Traverses the list following `next` pointers until reaching the target index
- Returns pointer to node at that index or NULL if index out of range

### 6-sum_dlistint.c
**What it does**: Calculates and returns the sum of all integer values in the list.

**How it works**:
- Takes a pointer to the head of the list
- Initializes sum to 0
- Traverses the entire list, adding each node's value to the sum
- Returns the total sum
- Returns 0 if list is empty

### 7-insert_dnodeint.c
**What it does**: Inserts a new node at a specific index in the doubly linked list.

**How it works**:
- Takes a pointer-to-pointer of the head, index, and value
- If index is 0, adds at head (calls `add_dnodeint`)
- Otherwise, traverses to the node before the target index
- Creates new node and links it between the previous and current nodes
- Updates both `prev` and `next` pointers to maintain chain integrity
- Returns pointer to new node

### 8-delete_dnodeint.c
**What it does**: Deletes the node at a specific index from the doubly linked list.

**How it works**:
- Takes a pointer-to-pointer of the head and an index
- If deleting at index 0, updates head pointer and frees old head
- Otherwise, traverses to the target node
- Removes node by linking its previous node's `next` to its next node
- Updates new next node's `prev` pointer
- Frees the deleted node
- Returns 1 on success or -1 on failure

### lists.h
**What it does**: Header file defining the doubly linked list node structure and function prototypes.

**How it works**:
- Defines `dlistint_t` struct with `n` (integer data), `prev` (pointer to previous node), and `next` (pointer to next node)
- Declares prototypes for all list operation functions
- Provides type definitions for consistent interfaces across implementation files

## High-level Notes

- Doubly linked lists allow efficient traversal in both directions, useful for certain algorithms
- Operations like insertion and deletion are straightforward because you have direct access to previous nodes
- Memory management is critical — always free nodes and update pointers correctly to prevent leaks or dangling pointers
- The structure maintains two-way links: `prev` for backward traversal, `next` for forward traversal
