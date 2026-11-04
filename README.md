*This project has been created as part of the 42 curriculum by ajeremy.*

## Description

Libft is a custom C library developed as part of the 42 Common Core curriculum. The main objective of this project is to recreate several functions from the C standard library, gaining a deeper understanding of how they work internally and how to implement them from scratch.

Beyond reproducing standard C functions, this project introduces additional utility functions for string manipulation, text parsing, memory management, and linked list operations.

The resulting library, libft.a, serves as a foundation for future projects throughout the 42 curriculum, providing a collection of reusable functions that can be easily integrated into other C programs.

Main objectives
- Understand how static libraries work and how to create them.
- Develop a better understanding of pointers and memory addresses.
- Learn how to allocate, manage, and free dynamic memory.
- Improve proficiency in string manipulation and memory operations.
- Understand and implement linked list data structures.
- Strengthen problem-solving skills and programming practices in C.
- Write reusable, modular, and well-structured code.

## Instructions

### Requirements

To compile the library, you will need:

- A C compiler (such as cc or gcc).
- GNU Make.
- A Unix-like environment (Linux or macOS).

###Compilation

Clone the repository and navigate to its root directory:

```bash
git clone <repository-url>
cd libft
```

Run the following command:

```bash
make
```

This will compile the source files and generate a static library named libft.a in the root directory.

### Makefile rules

The Makefile provides the following rules:

- make	Compiles the library.
- make all	Same as make.
- make clean	Removes object files (.o).
- make fclean	Removes object files and the compiled library.
- make re	Rebuilds the library from scratch.

## Implemented Functions

The library contains several groups of functions, each focusing on a particular aspect of C programming.

1. Libc functions (Part 1)

Reimplementations of commonly used functions from the C standard library.

These functions cover:

- Character checking and conversion: character classification and case conversion.
- String manipulation: string length, comparison, searching, and copying.
- Memory manipulation: memory comparison, copying, setting, and searching.
- Conversion: converting strings into integer values.

### Functions Overview

| Function name | Description |
|---|---|
| `ft_isalpha` | Returns non-zero if a character is alphabetic (uppercase or lowercase). |
| `ft_isdigit` | Returns non-zero if a character is a decimal digit (0–9). |
| `ft_isalnum` | Returns non-zero if a character is alphabetic or a decimal digit. |
| `ft_isascii` | Returns non-zero if a character belongs to the ASCII character set (0–127). |
| `ft_isprint` | Returns non-zero if a character is printable, including space. |
| `ft_strlen` | Calculates and returns the length of a string, excluding the null terminator. |
| `ft_memset` | Fills a memory area with a specified byte value. |
| `ft_bzero` | Sets the first `n` bytes of a memory area to zero. |
| `ft_memcpy` | Copies `n` bytes from a source memory area to a destination. |
| `ft_memmove` | Copies `n` bytes between memory areas, safely handling overlapping regions. |
| `ft_strlcpy` | Copies a string into a destination buffer, ensuring null termination when the buffer size is greater than zero. |
| `ft_strlcat` | Appends a string to a destination buffer while respecting its specified size. |
| `ft_toupper` | Converts a lowercase alphabetic character to uppercase. |
| `ft_tolower` | Converts an uppercase alphabetic character to lowercase. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncmp` | Compares up to `n` characters of two strings. |
| `ft_memchr` | Searches for the first occurrence of a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte over `n` bytes. |
| `ft_strnstr` | Locates the first occurrence of a substring within a string, searching at most `len` characters. |
| `ft_atoi` | Converts the initial portion of a string into an integer. |
| `ft_calloc` | Allocates memory for an array of elements and initializes all allocated bytes to zero using `malloc()`. |
| `ft_strdup` | Allocates memory using `malloc()` and creates a duplicate of a string. |

2. Additional functions (Part 2)

Utility functions that extend the functionality of the standard library implementations.

These include:

- Output functions: writing characters, strings, and numbers to file descriptors.
- String manipulation: trimming, joining, duplicating, and extracting substrings.
- Text parsing: splitting strings based on delimiters.
- Memory management: allocating and initializing memory safely.

### Functions Overview

| Function name | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring from a given string, starting at a specified index and with a maximum length. |
| `ft_strjoin` | Allocates and returns a new string formed by concatenating two strings. |
| `ft_strtrim` | Allocates and returns a copy of a string with characters from a specified set removed from the beginning and end. |
| `ft_split` | Splits a string into an array of strings using a specified character as a delimiter. |
| `ft_itoa` | Converts an integer into a null-terminated string. |
| `ft_strmapi` | Applies a function to each character of a string, passing its index and character, and returns a newly allocated string containing the results. |
| `ft_striteri` | Applies a function to each character of a string, passing its index and a pointer to the character, modifying the original string. |
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

3. Linked list functions (Part 3)

Implementation of a singly linked list using dynamically allocated nodes.

These functions provide the ability to:

- Create new list nodes.
- Add nodes to the beginning or end of a list.
- Calculate the size of a list.
- Retrieve the last node.
- Remove and delete nodes.
- Iterate through a list and apply functions to its contents.
- Map list elements into a new list.

### Functions overview

| Function name | Description |
|---|---|
| `ft_lstnew` | Allocates and returns a new list node initialized with the given content. |
| `ft_lstadd_front` | Adds a new node to the beginning of a linked list. |
| `ft_lstsize` | Counts and returns the number of nodes in a linked list. |
| `ft_lstlast` | Returns the last node of a linked list. |
| `ft_lstadd_back` | Adds a new node to the end of a linked list. |
| `ft_lstdelone` | Deletes a single node, freeing its content using the provided deletion function. |
| `ft_lstclear` | Deletes and frees all nodes in a linked list, using the provided deletion function for each node's content. |
| `ft_lstiter` | Iterates through a linked list and applies a given function to the content of each node. |
| `ft_lstmap` | Creates a new linked list by applying a function to each node's content, using the provided deletion function if an allocation fails. |

## Usage

Once compiled, libft.a can be used as a static library in any C project.

To use the library, include its header file, libft.h, in your source code and link the compiled library during compilation.

Example
```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, world!", 1);
    return (0);
}
```

Compile your program by linking it with libft.a:

```bash
cc main.c ./libft.a -o main
```

Alternatively, you can use the -L and -l compiler flags:

```bash
cc main.c -L. -lft -I. -o main
```

Where:

-L. specifies the directory where the library is located.
-lft links against libft.a (the lib prefix and .a extension are omitted).
-I. specifies the directory containing the header file.

Run the resulting executable:

```bash
./main
```
## Resources

The following resources were used throughout the development of this project to understand the underlying concepts and achieve its objectives.

The C Programming Language — Brian Kernighan and Dennis Ritchie.
Memory Management, Explained Simply (Parts 1 and 2) — Nic Barker on YouTube.
The Linux Man Pages — Man-pages.
Queue Data Structure & Operations (Linked List Based) — Portfolio Courses on YouTube.
Split Strings Function — Portfolio Courses on YouTube.

## AI Usage

AI tools were used throughout this project as learning and productivity aids.

Their primary purposes were:

Explaining memory management concepts and helping clarify topics related to pointers and dynamic memory allocation.
Assisting with understanding programming concepts encountered during development.
Helping improve the structure, formatting, and readability of this README file.
