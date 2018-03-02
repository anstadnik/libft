/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 20:58:33 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:58:27 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” memory
** area. The memory allocated is initialized to 0. If the allocation
** fails, the function returns NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*pt;

	if (!size)
		return (NULL);
	pt = (char *)malloc(size);
	if (!pt)
		return (NULL);
	while (size--)
		*(pt + size) = 0;
	return ((void *)pt);
}
