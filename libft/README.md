*This project has been created as part of the 42 curriculum by spoernba.*

# Libft

## Description

Libft is my first own C library. The goal is to re-implement a set of standard C library functions, write some additional utility functions, and collect everything in one static library (`libft.a`) that can be reused in later projects.

The project has three parts:

- **Part 1 (libc functions):** re-implementations of functions such as `ft_strlen`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_atoi`, `ft_calloc` and `ft_strdup`, plus the character checks (`ft_isalpha`, `ft_isdigit`, ...).
- **Part 2 (additional functions):** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri` and the `ft_put*_fd` output functions.
- **Linked list functions:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter` and `ft_lstmap`. <remove or adjust if not all are included>

All functions follow the 42 Norm, only use the allowed external functions (`malloc`, `free`, `write`), and free everything they allocate.

## Instructions

**Compilation**

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything
```

The library is compiled with `cc -Wall -Wextra -Werror`. <adjust to your Makefile>

**Usage**

Include the header in your code and link against the library:

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft -o program
```

**Testing**

Each function file contains only the function (no `main`). Tests are written in separate files and compiled together with the needed sources, for example:

```bash
cc test_split.c ft_split.c ft_substr.c ft_strlen.c -o test && ./test
```

To compare `ft_strlcpy`, `ft_strlcat` and `ft_bzero` with the system versions on glibc, compile with `-lbsd`.

## Resources

**References**

- Linux man pages (`man 3 <function>`), for example `man 3 strlcpy`, `man 3 memmove`, `man 3 calloc`: https://man7.org/linux/man-pages/
- Brian W. Kernighan and Dennis M. Ritchie, *The C Programming Language*.
- The 42 Norm and the Libft subject PDF.