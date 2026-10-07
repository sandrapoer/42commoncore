//header 

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void*))
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