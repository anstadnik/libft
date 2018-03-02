/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:30:12 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:35:37 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds the nodeent node at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd(t_list **head, t_list *node)
{
	if (!head || !node)
		return ;
	if (*head)
		node->next = *head;
	*head = node;
}
