/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:30:00 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/08 16:30:00 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == 0 || del == 0)
		return ;
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>
void	delete(void *content)
{
	printf("Content delete by delete function --> %s\n", (char *)content);
}

int main(void)
{
	t_list	*node1 = ft_lstnew("First");
	t_list	*node2 = ft_lstnew("Second");

	node1->next = node2;
	printf("Current list: First -> Second -> NULL\n\n");

	printf("Delete the first node\n");
	ft_lstdelone(node1, delete);

	printf("Current list: --> %s\n\n", (char *)node2->content);

	return (0);
}
*/