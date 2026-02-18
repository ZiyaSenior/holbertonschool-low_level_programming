# C - File I/O

## Project Description

This folder contains exercises about **file input/output (I/O)** in C. The tasks demonstrate how to open, read, write, create, append, and copy files using POSIX system calls and standard C functions, with attention to correct error handling and resource cleanup.

## Concepts Covered

- Opening and closing files (`open`, `close`)
- Reading and writing bytes (`read`, `write`)
- File creation and permission flags
- Appending to files vs truncating
- Copying file contents and handling binary/text data
- Proper error checks and return values
- Memory-safe buffering when reading/writing

## Requirements

- **Compiler**: `gcc`
- **Flags**: `-Wall -Werror -Wextra`
- **Platform**: Linux/Unix (POSIX file APIs used)

## Files / Tasks

### 0-read_textfile.c
What it does: Reads up to `letters` bytes from a text file and writes them to standard output (stdout).

How it works: Opens the file for reading, allocates a buffer of `letters` bytes, reads into the buffer, writes the read bytes to `STDOUT_FILENO`, and properly closes and frees resources. Returns the number of bytes written or 0 on error.

### 1-create_file.c
What it does: Creates a file (or truncates it if it exists) and writes a given text string into it.

How it works: Uses `open()` with `O_CREAT | O_WRONLY | O_TRUNC` and mode flags for user read/write. Writes the provided string bytes to the file and closes the descriptor. Returns 1 on success and -1 on failure.

### 2-append_text_to_file.c
What it does: Appends text at the end of an existing file.

How it works: Opens the file with `O_WRONLY | O_APPEND`, writes the provided string bytes to the end, and closes the file. Returns 1 on success and -1 on failure.

### 3-cp.c
What it does: Copies the contents of one file to another (similar to `cp` command).

How it works: Opens the source file for reading and creates/truncates the destination file for writing. Uses a buffer to read chunks from the source and write them to the destination until EOF. Ensures proper permission flags, checks return values for read/write errors, and closes both files. Returns appropriate exit codes on failure.

### main.h
What it does: Header file declaring helper prototypes and includes used by file I/O tasks.

How it works: Provides shared includes, prototype declarations and constants so the file I/O source files compile consistently.

## High-level Notes

- These tasks demonstrate low-level file I/O using POSIX APIs (`open`, `read`, `write`, `close`) rather than higher-level stdio functions.
- Correct error checking (checking return values of `open`, `read`, `write`) and cleaning up resources (closing file descriptors, freeing buffers) is critical to these exercises.
- When copying files, a fixed-size buffer is used to keep memory usage bounded while allowing large files to be copied in chunks.
