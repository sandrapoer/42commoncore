*This project has been created as part of the 42 curriculum by spoernba.*

## Description
Libft is the first C library where I am implementing a several standard C library functions and additional utility funcitons. Everything is collected in a static library `libft.a` which can be reused.

The project consists of three parts:

- **Part 1 libc functions:** `ft_strlen`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`, `ft_isalpha`, `ft_isdigit`
- **Part 2 additional functions:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_put*_fd`
- **Linked list functions:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

Some functions allow the use of the external functions `malloc`, `free` and `write`.

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
