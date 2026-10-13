/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:59:08 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 17:52:32 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
int main(void)
{
	#include <stdio.h>
	t_list *node;
	char *content = "Hello";

	node = ft_lstnew(content);
	printf("%s%s\n", "Expected Hello --> ", (char*)node->content);
	free(node);
	return (0);
}
*/