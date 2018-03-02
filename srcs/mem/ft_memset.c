/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 21:26:35 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:53:14 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes len bytes of value c (converted to an unsigned char) to the
** string b.
*/

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	q;
	unsigned char	*p;

	if (!ptr)
		return (NULL);
	q = (unsigned char)c;
	p = (unsigned char *)ptr;
	while (n--)
		p[n] = q;
	return (ptr);
}
