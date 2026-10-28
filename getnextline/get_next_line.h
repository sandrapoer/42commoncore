#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 3
# endif

char	*get_next_line(int fd);

// utils
char	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);

# endif