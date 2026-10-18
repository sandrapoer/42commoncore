/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:30:00 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/18 16:00:41 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	new_list = 0;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == 0)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>
void	*double_copy(void *content)
{
	int	*new_value;
	new_value = malloc(sizeof(int));
	*new_value = *(int *)content * 2;
	return (new_value);
}

void	free_int(void *content)
{
	free(content);
}

int main(void)
{
	int		a = 1;
	int		b = 2;
	int		c = 3;

	t_list	*original = ft_lstnew(&a);
	t_list	*result;
	t_list	*tmp;

	original->next = ft_lstnew(&b);
	original->next->next = ft_lstnew(&c);

	result = ft_lstmap(original, double_copy, free_int);
	printf("Original, expected 1 2 3 --> ");
	tmp = original;
	while (tmp)
	{
		printf("%d ", *(int *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	printf("New list, expected 2 4 6 --> ");
	tmp = result;
	while (tmp)
	{
		printf("%d ", *(int *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	ft_lstclear(&result, free_int);
	free(original->next->next);
	free(original->next);
	free(original);
	return (0);
}
*/