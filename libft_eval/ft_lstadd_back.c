/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:30:00 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/08 16:30:00 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == 0 || new == 0)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}

/*
int main(void)
{
	#include <stdio.h>
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("Hello ");
	t_list	*node2 = ft_lstnew("and ");
	t_list	*node3 = ft_lstnew("Goodbye!");

	ft_lstadd_back(&head, node1);
	printf("%s%s\n", "Expected Hello    --> ", (char *)head->content);
	printf("%s%d\n", "Expected 1        --> ", head->next == NULL);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	printf("%s%s\n", "Expected Hello    --> ", (char *)head->content);
	printf("%s%s\n", "Expected and      --> ", (char *)head->next->content);
	printf("%s%s\n", "Expected Goodbye! --> ", (char *)head->next->next->content);
	printf("%s%d\n", "Expected 1        --> ", head->next->next->next == NULL);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/