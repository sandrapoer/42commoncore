*This project has been created as part of the 42 curriculum by spoernba.*

## Description
The printf project replicates `printf(3)`. All the necessary components are collected in a static library `libftprintf.a`. The goal of the project is to learn how variadic functions work.

The function prototype is:
```c
int	ft_printf(const char *format, ...)
```

It returns the number of characters printed, or a negative value on error. The supported conversion are the following:

| Specifier  | Output |
|------------|--------|
| `%c`       | a single character |
| `%s`       | a string (`(null)` if the pointer is `NULL`) |
| `%p`       | a pointer address in lowercase hexadecimal with `0x` prefix (`(nil)` for `NULL`, as glibc does) |
| `%d`, `%i` | a signed decimal integer |
| `%u`       | an unsigned decimal integer |
| `%x`, `%X` | an unsigned hexadecimal number, lowercase or uppercase |
| `%%`       | a literal `%` |

External functions used: `write`,`va_start`, `va_arg`, `va_copy`, and `va_end`.

### The Idea
`ft_printf` goes throught the initial format string. When it finds a `%`, it hands the following character to `ft_conversion`. This reads the corresponding argument with `va_arg` and calls one print function per type. Every print funciton returns how many characters it wrote.
## Instructions

```bash
make        # builds libftprintf.a
make clean  # removes object files
make fclean # removes object files and libftprintf.a
make re     # rebuilds everything
```

## Resources

**References**
- Variadic Functions: https://www.geeksforgeeks.org/c/variadic-functions-in-c/ & https://dev.to/pauljlucas/variadic-functions-in-c-53ml
- Linux man page `printf`: https://www.man7.org/linux/man-pages/man3/printf.3.html