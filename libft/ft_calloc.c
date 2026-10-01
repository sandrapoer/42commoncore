// use malloc()
// if nmemb or size is 0 then calloc() returns a uniwue pointer value
// that can be successfully passed to free()

// The calloc() function shall allocate unused space for an array of
// nelem elements each of whose size in bytes is elsize. The space
// shall be initialized to all bits 0.

#include <stdlib.h>

void	*ft_calloc(unsigned long nelem. unsigned long elsize)
{
	unsigned long	total;
	char			*ptr;

	total = nelem * elsize;
	if (elsize != 0 && total / elsize != nelem)
		return (0);
	if (total == 0)
		ptr = malloc(1);
	else
		ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total)
	return(ptr);
}