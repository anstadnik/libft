/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 20:17:16 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 20:18:00 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_trunc(long double n)
{
	if (n - (long long)n >= 0.5)
		return ((long long)n + 1);
	else
		return ((long long)n);
}
