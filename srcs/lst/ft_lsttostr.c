/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 17:42:25 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:35:01 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Combines all the content from the list to one string and returns it.
*/

char	*ft_lsttostr(t_list *head)
{
	t_list	*temp;
	size_t	size;
	char	*ret;
	char	*ptr;

	temp = head;
	size = 0;
	while (temp)
	{
		size += temp->content_size;
		temp = temp->next;
	}
	if (!(ret = malloc(sizeof(char) * size + 1)))
		return (0);
	ret[0] = '\0';
	ptr = ret;
	while (head)
	{
		ft_strcpy(ptr, (char *)head->content);
		ptr += head->content_size;
		head = head->next;
	}
	return (ret);
}
