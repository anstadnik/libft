/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:38:59 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:39:11 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates a list lst and applies the function f to each link to
** create a “fresh” list (using malloc(3)) resulting from the successive
** applications of f. If the allocation fails, the function
** returns NULL.
*/

t_list		*ft_lstmap(t_list *head, t_list *(*func)(t_list *elem))
{
	t_list	*first;
	t_list	*temp;
	t_list	*p;

	p = NULL;
	first = NULL;
	if (!func)
		return (NULL);
	while (head)
	{
		if (!(temp = func(head)))
		{
			ft_lstdel(&first, &free);
			return (NULL);
		}
		ft_lstaddb(&p, temp);
		if (!first)
			first = p;
		p = p->next;
		head = head->next;
	}
	return (first);
}
