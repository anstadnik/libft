/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_headiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:37:12 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:46:07 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates the list head and applies the function f to each link.
*/

#include "libft.h"

void	ft_lstiter(t_list *head, void (*del)(t_list *elem))
{
	if (!del)
		return ;
	while (head)
	{
		del(head);
		head = head->next;
	}
}
