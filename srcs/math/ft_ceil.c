/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceil.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 20:11:16 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 20:13:25 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_ceil(long double n)
{
	if ((long long)n >= n)
		return ((long long)n);
	else
		return ((long long)n + 1);
}
