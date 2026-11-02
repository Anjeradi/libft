*This project has been created as part of the of the 42 curriculum by ajeremy (Angel Diaz)*

## Description

This project's goal was to learn how to make our own static library by implementing several
functions from the C standard library.

Additionally, implement our own functions from scratch for text parsing and linked list management.

## Instructions

To compile this project simply execute make in the root directory.

This will generate a static library called libft.a containing all the functions implemented 
in this project.

## Resources

The following resources were used to achieve this project's objectives:

- **The C programming language by Brian** Kernighan and Dennis Ritchie;
- **Memory Managment, Explained simply (parts 1 and 2)** videos by Nic Barker on youtube [YouYube](https://youtu.be/3rez2rDYHHA?si=gp6lweEpN3D9d8GQ);
- **The Linux Man pages**

### AI usage

AI was used in this project's as a learnign tool to explain memory management concepts
and assist with formatting this README readme file.

## Usage

The library "Libft.a" can be used like any other library by including its header file (libft.h)
linking it during compilation. e.g:

```c
#include "libft.h"

int main(void)
{
	ft_putendl_fd("Hello, world!", STDOUT);
	return (0);
}
```

```bash
cc main.c ./libft.a -I. -o main
```
or, addittionaly

```bash
cc main.c -L. -lft I. -o main
```
