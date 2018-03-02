/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:20:09 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:40:32 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds a new element of t_list type at the end of the list.
*/

#include "libft.h"

void	ft_lstpushb(t_list **head, void *content, size_t content_size)
{
	t_list	*new;

	if (!head || !(new = ft_lstnew(content, content_size)))
		return ;
	ft_lstaddb(head, new);
}
