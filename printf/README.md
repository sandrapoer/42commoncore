*This project has been created as part of the 42 curriculum by spoernba.*

## Description
Libft project replicates ``printf()` using functions coded previously in `libft`. All the necessary components are collected in a static library `ft_printf.h`.

External functions used: `malloc`, `free` and `write`, as well as `va_start`, `va_arg`, `va_copy`, and `va_end`.


## Instructions

```bash
make        # builds ft_printf.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything
```

## Resources

**References**
- variadic functions
- Linux man pages (`man 3 <function>`), for example `man 3 strlcpy`, `man 3 memmove`, `man 3 calloc`: https://man7.org/linux/man-pages/
