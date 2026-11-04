*This activity has been created as part of the 42 curriculum by adallari.*

<div align="center">

<pre>
██╗     ██╗██████╗ ███████╗████████╗
██║     ██║██╔══██╗██╔════╝╚══██╔══╝
██║     ██║██████╔╝█████╗     ██║   
██║     ██║██╔══██╗██╔══╝     ██║   
███████╗██║██████╔╝██║        ██║   
╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   
</pre>

**A fully optimized C library — built from scratch at 42.**

[![42](https://img.shields.io/badge/42-School-000000?style=for-the-badge&logo=42&logoColor=white)](https://42.fr)
[![Norminette](https://img.shields.io/badge/Norminette-passing-brightgreen?style=for-the-badge)](https://github.com/42School/norminette)
[![Discord](https://img.shields.io/badge/Discord-iiz2416-5865F2?style=for-the-badge&logo=discord&logoColor=white)](https://discord.com/users)

---

Every function has been **hand-optimized** for minimal memory usage, reduced system calls, and clean control flow.

</div>

## Description

Libft is a C library that reimplements a set of standard libc functions along with additional utility functions. The goal is to understand how these functions work internally by coding them from scratch. This library serves as a foundation that will be reused throughout the entire 42 curriculum.

The library is split into three parts:
- **Part 1** — Reimplementation of standard libc functions (string manipulation, memory management, character checks, conversions).
- **Part 2** — Additional utility functions not found in the libc or present in a different form (string trimming, splitting, iteration with function pointers, file descriptor output).
- **Part 3** — Linked list manipulation functions using a `t_list` structure with `content` (void pointer) and `next` fields.

### Part 1 — Libc functions

> Standard C library reimplementations.

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is ASCII |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlap) |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Concatenates a string with size limit |
| `ft_toupper` | Converts to uppercase |
| `ft_tolower` | Converts to lowercase |
| `ft_strchr` | Finds first occurrence of a char |
| `ft_strrchr` | Finds last occurrence of a char |
| `ft_strncmp` | Compares two strings up to n chars |
| `ft_memchr` | Scans memory for a byte |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Finds a substring within a length limit |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates and zeroes memory |
| `ft_strdup` | Duplicates a string |

### Part 2 — Additional functions

> Utility functions for string manipulation and output.

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims characters from both ends |
| `ft_split` | Splits a string by delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Maps a function over a string (new copy) |
| `ft_striteri` | Applies a function to each char in place |
| `ft_putchar_fd` | Outputs a char to a fd |
| `ft_putstr_fd` | Outputs a string to a fd |
| `ft_putendl_fd` | Outputs a string + newline to a fd |
| `ft_putnbr_fd` | Outputs an integer to a fd |

### Part 3 — Linked list

> Singly linked list operations using `t_list`.

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new node |
| `ft_lstadd_front` | Adds a node at the front |
| `ft_lstsize` | Counts nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstadd_back` | Adds a node at the end |
| `ft_lstdelone` | Deletes one node |
| `ft_lstclear` | Deletes and frees a list |
| `ft_lstiter` | Iterates over a list |
| `ft_lstmap` | Maps a function over a list (new list) |

## Instructions

```bash
make        # Compile the library (libft.a)
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile everything
```

To use the library in your project, include the header and compile with the archive:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft
```

## Resources

- [C Standard Library Reference — cppreference.com](https://en.cppreference.com/w/c)
- [The Open Group Base Specifications (man pages)](https://pubs.opengroup.org/onlinepubs/9699919799/)
- [42 Norminette](https://github.com/42School/norminette)

**AI usage:** Claude was used to generate this README.

---

<div align="center">

*Made with patience and seg faults at 42.*

</div>
