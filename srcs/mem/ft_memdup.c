/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:47:28 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:56:30 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates memory, copies there size bytes from src and returns it
*/

#include "libft.h"

void	*ft_memdup(void *src, size_t size)
{
	char	*rez;

	if (!(rez = malloc(size)))
		return (NULL);
	ft_memcpy(rez, src, size);
	return ((void *)rez);
}
