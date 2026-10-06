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
	char *ex = "hello";
	t_list *node = ft_lstnew(node);
	printf("%s\n", (char *)node->content);
	printf("%s\n", (void *)node->next);

	printf("%s\n", (char *)(*node).content);
    printf("%p\n", (void *)(*node).next);
	
	free(node);
	return(0);
}
*/