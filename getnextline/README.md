*This project has been created as part of the 42 curriculum by spoernba.*

## Description
Get Next Line is a program that returns a line read from a file descriptor. If the `get_next_line` function is called in a loop, it returns the whole file or any other readable descriptor such as standard input, line by line.

The returned line includes the terminating `\n` except for the last line that has none. The function returns `NULL` when there is nothing left to read or when an error occurs.

The size of the `read` call is set at compile time with `-D BUFFER_SIZE=n` and works for any `n` greater than 0. The caller must `free` every returned line.

External functions used: `malloc`, `free` and `read`.

## Instructions

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
```

Check for leaks with:
```bash
valgrind --leak-check=full ./gnl file.txt # use -g flag when compiling
```

# The Idea
A `read` call returns a chunk of `BUFFER_SIZE` bytes. One chunk can contain parts of a line, several lines, or a single character. The function needs to remember what was read and what hasn't been returned yet. The `static char *buffer` keeps its value between calls and the operating system keeps track of the file position itself, so `read` continues where the previous call stopped.

## Resources

**References**
- Static Variables: https://www.geeksforgeeks.org/c/static-variables-in-c/ & https://en.wikipedia.org/wiki/Static_variable
- Buffer: https://en.wikipedia.org/wiki/Data_buffer
- Linux man page `read`: https://man7.org/linux/man-pages/man2/read.2.html
- Linux man page `open`: https://www.man7.org/linux/man-pages/man2/open.2.html
- Linux man page `close`: https://man7.org/linux/man-pages/man2/close.2.html