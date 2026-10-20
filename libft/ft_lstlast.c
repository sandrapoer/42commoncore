/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:04:06 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 18:18:36 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int main(void)
{
	#include <stdio.h>
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("Hello ");
	t_list	*node2 = ft_lstnew("and ");
	t_list	*node3 = ft_lstnew("Goodbye!");

	printf("%s%d\n", "Expected 1        --> ", ft_lstlast(head) == NULL);
	head = node1;
	printf("%s%s\n", "Expected Hello    --> ", (char *)ft_lstlast(head)->content);
	node1->next = node2;
	node2->next = node3;
	printf("%s%s\n", "Expected Goodbye! --> ", (char *)ft_lstlast(head)->content);
	printf("%s%s\n", "Expected Goodbye! --> ", (char *)ft_lstlast(node2)->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/