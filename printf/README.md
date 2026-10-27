*This project has been created as part of the 42 curriculum by spoernba.*

## Description
The printf project replicates `printf()`. All the necessary components are collected in a static library `libftprintf.a`.

External functions used: `write`,`va_start`, `va_arg`, `va_copy`, and `va_end`.

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