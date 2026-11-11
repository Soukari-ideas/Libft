*This project has been created as part of the 42 curriculum by maonesta.

# Libft

## Description

Libft is the first project of the 42 common core. The goal is to build your own C library, `libft.a`, by re-coding a set of standard C library functions and adding a few utility functions that will be reused in later projects.

The library is split into three parts:

- **Part 1 - Libc functions**: re-implementation of standard functions, with the same prototypes and behavior as the originals (prefixed with `ft_`).
- **Part 2 - Additional functions**: useful functions that are not in the libc or that exist in a different form (string manipulation, conversion, file descriptor output).
- **Bonus - Linked lists**: a set of functions to create and manipulate singly linked lists, using the `t_list` structure.

The project is compiled with `cc` and the flags `-Wall -Wextra -Werror`, and the library is archived with `ar`.

## Instructions

### Compilation

```bash
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # fclean + all
```

### Usage

Include the header in your source file and link against the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Functions

### Part 1 - Libc functions

| Category | Functions |
|----------|-----------|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

### Part 2 - Additional functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated one. |
| `ft_strtrim` | Trims a set of characters from the start and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter character. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character and returns the new string. |
| `ft_striteri` | Applies a function to each character (with its index) in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Bonus - Linked lists

The list functions use the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Frees a single node using a delete function. |
| `ft_lstclear` | Deletes and frees a node and all the following ones. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Applies a function to each node and builds a new list. |

> Note: in this repository, the list functions are compiled directly with the main rule (`make`), so a separate `make bonus` rule is not needed.

## Project structure

```
.
├── Makefile
├── libft.h
├── ft_*.c      # one file per function
└── README.md
```

## Resources

- `man` pages of the re-implemented functions (`man 3 strlcpy`, `man 3 memmove`, etc.)
- Valgrind documentation, for checking memory leaks
- Google to look for documentation on the non-Libc functions.

### Use of AI

AI was used solely for the purpose of accelerating learning when peer-to-peer learning stagnated. All the code was written by hands.