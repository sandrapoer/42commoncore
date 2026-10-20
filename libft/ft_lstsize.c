/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:58:27 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 18:17:26 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
int main(void)
{
	#include <stdio.h>
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("Hello ");
	t_list	*node2 = ft_lstnew("and ");
	t_list	*node3 = ft_lstnew("Goodbye!");

	printf("%s%d\n", "Expected 0 --> ", ft_lstsize(head));
	head = node1;
	printf("%s%d\n", "Expected 1 --> ", ft_lstsize(head));
	node1->next = node2;
	node2->next = node3;
	printf("%s%d\n", "Expected 3 --> ", ft_lstsize(head));
	free(node1);
	free(node2);
	free(node3);
}
*/