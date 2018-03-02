/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 16:53:53 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 18:12:13 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long double	ft_pow(int n, int p)
{
	long double	rez;

	rez = 1;
	if (!p)
		return (1);
	else if (p > 0)
		while (p--)
			rez *= n;
	else
		while (p++)
			rez /= n;
	return (rez);
}
