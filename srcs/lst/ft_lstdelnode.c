/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 15:23:50 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:36:34 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Searches for a node in a list, deletes it and sets it's previous's next
** pointer to it's next node. Now read it again and maybe u'll understand it)
*/

#include "libft.h"

void		ft_lstdelnode(t_list **head, t_list *node)
{
	if (!head || !*head || !node)
		return ;
	while (*head)
	{
		if (*head == node)
		{
			*head = (*head)->next;
			ft_lstdelone(&node, &free);
			return ;
		}
		head = &(*head)->next;
	}
}
