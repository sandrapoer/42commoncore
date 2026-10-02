/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:51:12 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:51:22 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// use malloc()
// if nmemb or size is 0 then calloc() returns a uniwue pointer value
// that can be successfully passed to free()

// The calloc() function shall allocate unused space for an array of
// nelem elements each of whose size in bytes is elsize. The space
// shall be initialized to all bits 0.

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t		total;
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
	ft_bzero(ptr, total);
	return(ptr);
}

int main(void)
{
	size_t nelem = 5;
	size_t elsize = sizeof(int);
	int *arr = (int *)ft_calloc(nelem, elsize);

	if (arr == NULL)
		return 1;

	for (size_t i = 0; i < nelem; i++)
	{
		printf("%d\n", arr[i]);
	}
	free(arr);
	return 0;
}