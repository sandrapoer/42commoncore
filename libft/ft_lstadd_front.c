/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:53:30 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/08 15:48:40 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == 0 || new == 0)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main(void)
{
	#include <stdio.h>
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("Hello");
	t_list	*node2 = ft_lstnew("World!");

	ft_lstadd_front(&head, node1);
	printf("%s\n", "Example 1:");
	printf("%s%s\n", "Expected Hello --> ", (char*)head->content);
	printf("%s%d\n", "Expected 1     --> ", head->next == NULL);
	
	ft_lstadd_front(&head, node2);
	printf("\n%s\n", "Example 2:");
	printf("%s%s\n", "Expected Hello --> ", (char*)head->content);
	printf("%s%s\n", "Expected World --> ", (char*)head->next->content);
	printf("%s%d\n", "Expected 1     --> ", head->next->next == NULL);

	free(node1);
	free(node2);
	return(0);
}
*/