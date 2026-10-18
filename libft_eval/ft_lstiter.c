/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:30:00 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/18 15:52:10 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst == 0)
		return ;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}

/*
#include <stdio.h>
void	print_int(void *content)
{
	printf("%d ", *(int *)content);
}

void	double_int(void *content)
{
	*(int *)content = *(int *)content * 2;
}

int main(void)
{
	int		a = 1;
	int		b = 2;
	int		c = 3;

	t_list	*head = ft_lstnew(&a);
	head->next = ft_lstnew(&b);
	head->next->next = ft_lstnew(&c);

	printf("Before, expected 1 2 3 --> ");
	ft_lstiter(head, print_int);
	printf("\n");
	ft_lstiter(head, double_int);
	printf("After,  expected 2 4 6 --> ");
	ft_lstiter(head, print_int);
	printf("\n");
	free(head->next->next);
	free(head->next);
	free(head);
	return (0);
}
*/