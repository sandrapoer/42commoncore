/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:30:00 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/18 15:47:31 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == 0 || del == 0)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = 0;
}

/*
#include <stdio.h>
void	delete(void *content)
{
	printf("Content delete by delete function --> %s\n", (char *)content);
}

int main(void)
{
	t_list	*head = ft_lstnew("First");
	t_list	*empty = NULL;

	head->next = ft_lstnew("Second");
	head->next->next = ft_lstnew("Third");

	ft_lstclear(&head, delete);
	printf("%s%d\n", "Expected 1 --> ", head == NULL);
	return (0);
}
*/