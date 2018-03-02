/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:26:05 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:36:22 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the adress of a pointer to a link and
** frees the memory of this link and every successors of that link
** using the functions del and free(3). Finally the pointer to
** the link that was just freed must be set to NULL (quite similar
** to the function ft_memdel from the mandatory part).
*/

#include "libft.h"

void	ft_lstdel(t_list **head, void (*del)(void *))
{
	if (!head || !*head || !del)
		return ;
	ft_lstdel(&(*head)->next, del);
	ft_lstdelone(head, del);
}
