*This project has been created as part of the 42 curriculum by spoernba.*

## Description
Libft is my first C library, where I implement several standard C library functions and additional utility functions. Everything is collected in a static library `libft.a`, which can be reused in later projects.

The project consists of three parts:

**Part 1 – libc functions**
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Character conversion: `ft_toupper`, `ft_tolower`
- Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- Conversion: `ft_atoi`
- Allocation: `ft_calloc`, `ft_strdup`

**Part 2 – additional functions**
- Strings: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- Output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Part 3 – linked list functions**
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

Some functions use the external functions `malloc`, `free` and `write`.

## Instructions

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything
```

## Resources

**References**

- Linux man pages (`man 3 <function>`), for example `man 3 strlcpy`, `man 3 memmove`, `man 3 calloc`: https://man7.org/linux/man-pages/
