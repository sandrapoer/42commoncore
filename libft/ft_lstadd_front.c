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
//tobedone
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == 0 || new == 0)
		return ;
	new-->next = *lst;
	*lst = new;
}